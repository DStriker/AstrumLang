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
namespace __Unsafe {} namespace __UInt32_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
using UInt32 = Builtin::u32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_14_u32 = Builtin::u32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_UInt32_14_u32> { static inline constexpr auto get() -> const __extension_UInt32_14_u32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_UInt32_14_u32> { static inline constexpr auto get() -> const __extension_UInt32_14_u32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IMinMaxValue, IMinMaxValue, u32);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_19_u32 = Builtin::u32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto operator<=>(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt32_19_u32> rhs) noexcept -> const Builtin::i32;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_19_u32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt32_19_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_19_u32&;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt32_19_u32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt32_19_u32 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt32_19_u32&;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt32_19_u32;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt32_19_u32 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt32_19_u32&;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getHashCode(__extension_UInt32_19_u32 const& __this ) -> const Builtin::u64;
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
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_72_u32 = Builtin::u32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_UInt32_72_u32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IAbstractComparable, IAbstractComparable, u32);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_87_u32 = Builtin::u32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToBoolean(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt8(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt8(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt16(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt16(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt128(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt128(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToIsize(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUsize(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToByte(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToChar(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char16;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IConvertible, IConvertible, u32);
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
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_146_u32 = Builtin::u32;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt32_146_u32, __extension_UInt32_146_u32>;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&;
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&;
	#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IDivisibleArithmetic, IDivisibleArithmetic, u32);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_187_u32 = Builtin::u32;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt32_187_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_187_u32;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt32_187_u32 & __this , T rhs)  -> typename __extension_UInt32_187_u32&;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt32_187_u32 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt32_187_u32>;
	#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, u32);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_207_u32 = Builtin::u32;
	#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt32_207_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt32_207_u32;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt32_207_u32 & __this , Builtin::u32 exp)  -> typename __extension_UInt32_207_u32&;
	#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IIntegerPowerArithmetic, IIntegerPowerArithmetic, u32);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_245_u32 = Builtin::u32;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_245_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_245_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitude(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_245_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_245_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto Parse(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt32_245_u32;
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto TryParse(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt32_245_u32>;
	#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_UInt32_245_u32> { static inline constexpr auto get() -> const __extension_UInt32_245_u32; };
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_UInt32_245_u32> { static inline constexpr auto get() -> const __extension_UInt32_245_u32; };
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_UInt32_245_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getAbs(__extension_UInt32_245_u32 const& __this ) -> const __extension_UInt32_245_u32;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsCanonical(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsFinite(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInteger(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNaN(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegative(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNormal(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositive(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsZero(__extension_UInt32_245_u32 const& __this ) -> const bool;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, INumberBase, INumberBase, u32);
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
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_300_u32 = Builtin::u32;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IUnsignedNumber, IUnsignedNumber);
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IUnsignedNumber, IUnsignedNumber, u32);
	} namespace System{

		} namespace __extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_304_u32 = Builtin::u32;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CopySign(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 sign) noexcept -> const typename __extension_UInt32_304_u32;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Max(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxNumber(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Min(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinNumber(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto Clamp(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_304_u32 min, __extension_UInt32_304_u32 max)  -> const typename __extension_UInt32_304_u32;
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSign(__extension_UInt32_304_u32 const& __this ) -> const Builtin::i32;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, INumber, INumber, u32);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_316_u32 = Builtin::u32;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedLog(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_316_u32 base) noexcept -> const Builtin::Nullable<__extension_UInt32_316_u32>;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto Log(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_316_u32 base)  -> const typename __extension_UInt32_316_u32;
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Midpoint(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_316_u32 rhs) noexcept -> const typename __extension_UInt32_316_u32;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_316_u32 rhs) noexcept -> const bool;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_UInt32_316_u32> { static inline constexpr auto get() -> const __extension_UInt32_316_u32; };
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPow2(__extension_UInt32_316_u32 const& __this ) -> const bool;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt32_316_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_316_u32>;
	#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2(__extension_UInt32_316_u32 const& __this ) -> const __extension_UInt32_316_u32;
	#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt32_316_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_316_u32>;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog10(__extension_UInt32_316_u32 const& __this ) -> const __extension_UInt32_316_u32;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IBinaryNumber, IBinaryNumber, u32);
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
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_431_u32 = Builtin::u32;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> auto _operator_add_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingAdd(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_431_u32 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto BorrowingSub(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_431_u32 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto);
	#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_431_u32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>;
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingMul(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_431_u32 rhs, __extension_UInt32_431_u32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>;
	#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32;
	#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&;
	#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto _operator_sub_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32;
	#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32;
	#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32;
	#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_431_u32;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_431_u32&;
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt32_431_u32;
	#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&;
	#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_431_u32;
	#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_431_u32&;
	#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt32_431_u32;
	#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&;
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&;
	#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt32_431_u32;
	#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp)  -> typename __extension_UInt32_431_u32&;
	#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt32_431_u32;
	#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&;
	#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt32_431_u32;
	#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&;
	#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt32_431_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_431_u32>;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getStrictAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_431_u32;
	#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_431_u32;
	#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_431_u32;
	#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt32_431_u32 const& __this ) -> const std::tuple<__extension_UInt32_431_u32, bool>;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, ICheckedArithmetic, ICheckedArithmetic, u32);
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
#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_1028_u32 = Builtin::u32;
	#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt32_1028_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1028_u32 rhs)  -> const typename __extension_UInt32_1028_u32;
	#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt32_1028_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1028_u32 rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1028_u32>;
	#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_UInt32_1028_u32> { static inline constexpr auto get() -> const bool; };
	#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32;
	#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32;
	#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32;
	#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32;
	#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1028_u32>;
	#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getIsqrt(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1028_u32;
	#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1028_u32;
	#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPrevPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1028_u32;
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1028_u32;
	#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1028_u32>;
	#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1028_u32;
	#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IBinaryInteger, IBinaryInteger, u32);
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
#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_1133_u32 = Builtin::u32;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateLeft(__extension_UInt32_1133_u32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt32_1133_u32;
	#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateRight(__extension_UInt32_1133_u32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt32_1133_u32;
	#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_UInt32_1133_u32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32;
	#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32;
	#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPopCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32;
	#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getZeroCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32;
	#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getByteSwapped(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1133_u32;
	#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getBigEndian(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1133_u32;
	#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getLittleEndian(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1133_u32;
	#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getReverseBits(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1133_u32;
	#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IFixedWidthInteger, IFixedWidthInteger, u32);
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
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	using __extension_UInt32_1164_u32 = Builtin::u32;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt32_1164_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const bool;
	#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_UInt32_1164_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_UInt32_1164_u32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_UInt32_1164_u32> { static inline constexpr auto get() -> const __extension_UInt32_1164_u32; };
	#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt32_1164_u32 const& __this ) -> const __extension_UInt32_1164_u32;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt32_1164_u32 const& __this ) -> const __extension_UInt32_1164_u32;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(u32, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, u32);
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
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getMinValue<__extension_UInt32_14_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getMaxValue<__extension_UInt32_14_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(4294967295U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto operator<=>(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_UInt32_1164_u32> rhs) noexcept -> const Builtin::i32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return __this <=> rhs;
			}
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_19_u32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this >> amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_UInt32_19_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_19_u32&
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this >>= amount); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt32_19_u32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) >= 0) {
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_UInt32_19_u32 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt32_19_u32&
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_UInt32_19_u32
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) >= 0) {
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_UInt32_19_u32 & __this , Builtin::u32 amount) noexcept -> typename __extension_UInt32_19_u32&
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getHashCode(__extension_UInt32_19_u32 const& __this ) -> const Builtin::u64
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToBoolean(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt8(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::i8((signed char)0x7F)) > 0) {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt8(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u8((unsigned char)0xFF)) > 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt16(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::i16((short)0x7FFF)) > 0) {
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt16(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u16((unsigned short)0xFFFF)) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::i32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToInt128(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUInt128(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToIsize(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(ToInt32)(__this.__ref());
		} else {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return __this;
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToUsize(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat32(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToFloat64(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToByte(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::i32(0xFF)) > 0) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, Builtin::char8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto ToChar(__extension_UInt32_87_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::char16
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::char16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt32_1164_u32, __extension_UInt32_1164_u32>
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = __this; 
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		result /= rhs;
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(_operator_bsl)(__this, rhs);
		} else {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return Builtin::Cast<true, __extension_UInt32_1164_u32>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt32_1164_u32{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_UInt32_146_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_146_u32
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return (rem <=> Builtin::i32(0)) > 0 ? div + Builtin::i32(1) : div;
		} else {
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return Builtin::Cast<true, __extension_UInt32_1164_u32>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_UInt32_146_u32 & __this , auto rhs)  -> typename __extension_UInt32_146_u32&
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = __extension_UInt32_1164_u32{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_UInt32_187_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_187_u32
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_UInt32_187_u32 & __this , T rhs)  -> typename __extension_UInt32_187_u32&
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_UInt32_187_u32 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor(__extension_UInt32_207_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt32_207_u32
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto base = __this; 
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = Builtin::u32(1U); 
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					result *= base;
				}
				#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				base *= base;
			}
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result * base;
		} else {
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				for (;;) 
				{
					#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						result *= base;
						#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						if (exp == Builtin::i32(1)) {
							#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
							return result;
						}
					}
					#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_UInt32_207_u32 & __this , Builtin::u32 exp)  -> typename __extension_UInt32_207_u32&
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitude(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxMagnitudeNumber(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitude(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinMagnitudeNumber(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_245_u32
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt8(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt8(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt16(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt16(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt32(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt32(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt64(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt64(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToInt128(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUInt128(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToIsize(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NarrowToUsize(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getOne<__extension_UInt32_245_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(1U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getZero<__extension_UInt32_245_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getRadix<__extension_UInt32_245_u32>::get() -> const Builtin::i32
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getAbs(__extension_UInt32_245_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsCanonical(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsComplexNumber(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsEvenInteger(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u32(1U)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsFinite(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsInteger(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNaN(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegative(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsNormal(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsOddInteger(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::u32(1U)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositive(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsRealNumber(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsSubnormal(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsZero(__extension_UInt32_245_u32 const& __this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CopySign(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 sign) noexcept -> const typename __extension_UInt32_304_u32
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Max(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MaxNumber(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Min(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto MinNumber(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_304_u32
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto Clamp(__extension_UInt32_304_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 min, __extension_UInt32_1164_u32 max)  -> const typename __extension_UInt32_304_u32
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSign(__extension_UInt32_304_u32 const& __this ) -> const Builtin::i32
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0) ? Builtin::i32(0) : +Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedLog(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 base) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (__this == Builtin::i32(0) || (base <=> Builtin::i32(1)) <= 0) {
			#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (base == Builtin::i32(2)) {
				#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (base == Builtin::i32(10)) {
				#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> base) < 0) {
			#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 n = Builtin::u32(1U); 
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto r = base; 
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			++n;
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			r *= base;
		}
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto Midpoint(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const typename __extension_UInt32_316_u32
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsMultipleOf(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const bool
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return __this == Builtin::i32(0);
		}
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_UInt32_316_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::u32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getIsPow2(__extension_UInt32_316_u32 const& __this ) -> const bool
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog2(__extension_UInt32_316_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (__this == Builtin::i32(0)) {
			#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Cast<true, __extension_UInt32_1164_u32>((ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2(__extension_UInt32_316_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedLog10(__extension_UInt32_316_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (__this == Builtin::i32(0)) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return nullptr;
		}
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto val = __this; 
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::u32(10U);
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(100U);
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::u32(1000U);
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(10000U);
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto log = Builtin::u32(0U); 
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((val <=> Builtin::i32(100000)) >= 0) {
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(val.__ref(), Builtin::u32(100000U));
			#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			log += Builtin::i32(5);
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog10(__extension_UInt32_316_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_qst(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_ne(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_mod(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_add_add_or(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingAdd(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto BorrowingSub(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs, bool carry) noexcept -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_UInt32_431_u32 & __this )  -> typename __extension_UInt32_431_u32&
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::u32(1U))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_UInt32_431_u32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_mul_gt(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto& [low, high] = Builtin::WideningMul32u(__this, rhs);
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CarryingMul(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs, __extension_UInt32_1164_u32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::u32>
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto& [low, high] = Builtin::CarryingMul32u(__this, rhs, carry);
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_eq)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return result;
		}
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_UInt32_431_u32 & __this , T rhs) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				__this = result;
			}
		}
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_UInt32_431_u32
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this % rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_UInt32_431_u32 & __this , T rhs)  -> typename __extension_UInt32_431_u32&
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this %= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(nullptr); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto _operator_sub_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32
	{
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32
	{
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::WrappingNegate(__this, result);
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const typename __extension_UInt32_431_u32
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		__extension_UInt32_1164_u32 result{}; 
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto __var_807_8 = Builtin::SafeNegate(__this, result); 
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return std::make_tuple(result, true);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return __this <<= amount;
		}
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_431_u32
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_431_u32&
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return __this >> amount;
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return __this >>= amount;
		}
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_UInt32_431_u32
	{
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) < 0) {
			#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return __this >> amount;
		}
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount)  -> typename __extension_UInt32_431_u32&
	{
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::i32 amount) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto base = __this; 
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = Builtin::u32(1U); 
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						result = mul;
					}
				} else {
					#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					{
						#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						return nullptr;
					}
				}
				#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return result;
				}
			}
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					base = mul;
				}
			} else {
				#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				{
					#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return __this = result;
			}
		}
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_UInt32_431_u32
	{
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto base = __this; 
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = Builtin::u32(1U); 
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return result;
				}
			}
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp)  -> typename __extension_UInt32_431_u32&
	{
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(1U);
		}
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto base = __this; 
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = Builtin::u32(1U); 
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (std::is_constant_evaluated()) {
			#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			{
				#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				for (;;) 
				{
					#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
						if (exp == Builtin::i32(1)) {
							#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
							return result;
						}
					}
					#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_UInt32_431_u32
	{
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_USPCS(MaxValue, __extension_UInt32_1164_u32)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_UInt32_431_u32 & __this , Builtin::u32 exp) noexcept -> typename __extension_UInt32_431_u32&
	{
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_UInt32_431_u32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return std::make_tuple(Builtin::u32(1U), false);
		}
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto base = __this; 
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = Builtin::u32(1U); 
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto overflowed = false; 
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto tmp = std::make_tuple(Builtin::u32(0U), false); 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		for (;;) 
		{
			#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return tmp;
				}
				#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				result = std::get<0>(tmp);
				#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			base = std::get<0>(tmp);
			#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedAbs(__extension_UInt32_431_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getStrictAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getSaturatingAbs(__extension_UInt32_431_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getOverflowingAbs(__extension_UInt32_431_u32 const& __this ) -> const std::tuple<__extension_UInt32_1164_u32, bool>
	{
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(__this, false)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto NextMultipleOf(__extension_UInt32_1028_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs)  -> const typename __extension_UInt32_1028_u32
	{
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto rem = __this % rhs; 
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return rem == Builtin::u32(0U) ? __this : __this + (rhs - rem);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_UInt32_1028_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto rem = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *rem; const auto& rem = __tmp0;
				
				#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				if (rem == Builtin::u32(0U)) {
					#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
					return __this;
				}
				#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return ADV_UFCS(_operator_add_qst)(__this, (rhs - rem));
			}
		}
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getIsSigned<__extension_UInt32_1028_u32>::get() -> const bool
	{
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingZeroCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getTrailingOneCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32
	{
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getByteCount(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32
	{
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_UInt32_1164_u32)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMinimalBitWidth(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::u32
	{
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getIsqrt(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLog2Ceiling(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::u32(1U)) {
			#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			++result;
		}
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPrevPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_USPCS(One, __extension_UInt32_1164_u32)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::u32(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto p = __this - Builtin::u32(1U); 
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return (ADV_USPCS(AllBitsSet, __extension_UInt32_1164_u32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::u32(1U);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getCheckedNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto p = __this - Builtin::u32(1U); 
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_UInt32_1164_u32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u32(1U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getWrappingNextPow2(__extension_UInt32_1028_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if ((__this <=> Builtin::u32(1U)) <= 0) {
			#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return Builtin::u32(0U);
		}
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto p = __this - Builtin::u32(1U); 
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_UInt32_1164_u32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::u32(1U));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateLeft(__extension_UInt32_1133_u32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt32_1133_u32
	{
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::RotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto RotateRight(__extension_UInt32_1133_u32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_UInt32_1133_u32
	{
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::RotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getBitWidth<__extension_UInt32_1133_u32>::get() -> const Builtin::u32
	{
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingZeroCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32
	{
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getLeadingOneCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32
	{
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getPopCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32
	{
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getZeroCount(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32
	{
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getByteSwapped(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::ByteSwap32(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getBigEndian(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline auto getLittleEndian(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getReverseBits(__extension_UInt32_1133_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits32u(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getShortestBitLength(__extension_UInt32_1133_u32 const& __this ) -> const Builtin::u32
	{
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_UInt32_1164_u32)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	
} namespace __extensions { using namespace System;
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_UInt32_1164_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 rhs) noexcept -> const bool
	{
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_UInt32_1164_u32>::get() -> const Builtin::i32
	{
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_UInt32_1164_u32>::get() -> const Builtin::i32
	{
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_UInt32_1164_u32>::get() -> const __extension_UInt32_1164_u32
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy10(__extension_UInt32_1164_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u32(10U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	inline constexpr auto getMultiplyBy16(__extension_UInt32_1164_u32 const& __this ) -> const __extension_UInt32_1164_u32
	{
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::u32(16U))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	

}