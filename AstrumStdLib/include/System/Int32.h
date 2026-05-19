#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Numerics/IBinaryIntegerFormatInfo.h"
using namespace System::Numerics;
#include "System/Numerics/ISignedNumber.h"
using namespace System::Numerics;
#include "System/Numerics/IFixedWidthInteger.h"
using namespace System::Numerics;
#include "Optional.h"
#include "IConvertible.h"

namespace System {
namespace __Unsafe {} namespace __Int32_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
using Int32 = Builtin::i32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_14_i32 = Builtin::i32;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Int32_14_i32> { static inline constexpr auto get() -> const __extension_Int32_14_i32; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Int32_14_i32> { static inline constexpr auto get() -> const __extension_Int32_14_i32; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IMinMaxValue, IMinMaxValue, i32);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_19_i32 = Builtin::i32;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int32_19_i32> rhs) noexcept -> const Builtin::i32;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_19_i32;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int32_19_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_19_i32&;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int32_19_i32;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int32_19_i32 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int32_19_i32&;
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int32_19_i32;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int32_19_i32 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int32_19_i32&;
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode(__extension_Int32_19_i32 const& __this ) -> const Builtin::u64;
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
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_72_i32 = Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Int32_72_i32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IAbstractComparable, IAbstractComparable, i32);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_87_i32 = Builtin::i32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IConvertible, IConvertible, i32);
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
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_149_i32 = Builtin::i32;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_149_i32, __extension_Int32_149_i32>;
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32;
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32;
	#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32;
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IDivisibleArithmetic, IDivisibleArithmetic, i32);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_199_i32 = Builtin::i32;
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int32_199_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_199_i32;
	#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int32_199_i32 & __this , T rhs)  -> typename __extension_Int32_199_i32&;
	#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int32_199_i32 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int32_199_i32>;
	#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic, i32);
	} namespace System{
using __extensions::_operator_bsl;
using __extensions::_operator_bsl_eq;
using __extensions::_operator_bsl_bsl;

		} namespace __extensions { using namespace System;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_219_i32 = Builtin::i32;
	#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int32_219_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int32_219_i32;
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int32_219_i32 & __this , Builtin::u32 exp)  -> typename __extension_Int32_219_i32&;
	#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IIntegerPowerArithmetic, IIntegerPowerArithmetic, i32);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_257_i32 = Builtin::i32;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_257_i32 rhs) noexcept -> const typename __extension_Int32_257_i32;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_257_i32 rhs) noexcept -> const typename __extension_Int32_257_i32;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_257_i32 rhs) noexcept -> const typename __extension_Int32_257_i32;
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_257_i32 rhs) noexcept -> const typename __extension_Int32_257_i32;
	#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Parse(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int32_257_i32;
	#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int32_257_i32>;
	#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Int32_257_i32> { static inline constexpr auto get() -> const __extension_Int32_257_i32; };
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Int32_257_i32> { static inline constexpr auto get() -> const __extension_Int32_257_i32; };
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Int32_257_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs(__extension_Int32_257_i32 const& __this ) -> const __extension_Int32_257_i32;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero(__extension_Int32_257_i32 const& __this ) -> const bool;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, INumberBase, INumberBase, i32);
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
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_369_i32 = Builtin::i32;
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Int32_369_i32> { static inline constexpr auto get() -> const __extension_Int32_369_i32; };
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, ISignedNumber, ISignedNumber, i32);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_373_i32 = Builtin::i32;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 sign)  -> const typename __extension_Int32_373_i32;
	#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 rhs) noexcept -> const typename __extension_Int32_373_i32;
	#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 rhs) noexcept -> const typename __extension_Int32_373_i32;
	#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 rhs) noexcept -> const typename __extension_Int32_373_i32;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 rhs) noexcept -> const typename __extension_Int32_373_i32;
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_373_i32 min, __extension_Int32_373_i32 max)  -> const typename __extension_Int32_373_i32;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign(__extension_Int32_373_i32 const& __this ) -> const Builtin::i32;
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, INumber, INumber, i32);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_401_i32 = Builtin::i32;
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_401_i32 base) noexcept -> const Builtin::Nullable<__extension_Int32_401_i32>;
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto Log(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_401_i32 base)  -> const typename __extension_Int32_401_i32;
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_401_i32 rhs) noexcept -> const typename __extension_Int32_401_i32;
	#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_401_i32 rhs) noexcept -> const bool;
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getAllBitsSet; template<> struct __static_getAllBitsSet<__extension_Int32_401_i32> { static inline constexpr auto get() -> const __extension_Int32_401_i32; };
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2(__extension_Int32_401_i32 const& __this ) -> const bool;
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2(__extension_Int32_401_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_401_i32>;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2(__extension_Int32_401_i32 const& __this ) -> const __extension_Int32_401_i32;
	#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10(__extension_Int32_401_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_401_i32>;
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10(__extension_Int32_401_i32 const& __this ) -> const __extension_Int32_401_i32;
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IBinaryNumber, IBinaryNumber, i32);
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
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_525_i32 = Builtin::i32;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_add_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_qst_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_ne_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_mod_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_add_add_or_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_525_i32 rhs, bool carry) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_525_i32 rhs, bool carry) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&;
	[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto);
	#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32;
	#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_525_i32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>;
	#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_525_i32 rhs, __extension_Int32_525_i32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>;
	#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&;
	#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32;
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&;
	#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32;
	#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32;
	#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32;
	#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&;
	#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_525_i32;
	#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_525_i32&;
	#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int32_525_i32;
	#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&;
	#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&;
	#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_525_i32;
	#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_525_i32&;
	#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int32_525_i32;
	#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&;
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&;
	#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int32_525_i32;
	#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp)  -> typename __extension_Int32_525_i32&;
	#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int32_525_i32;
	#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&;
	#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int32_525_i32;
	#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&;
	#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs(__extension_Int32_525_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_525_i32>;
	#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_525_i32;
	#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_525_i32;
	#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_525_i32;
	#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int32_525_i32 const& __this ) -> const std::tuple<__extension_Int32_525_i32, bool>;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, ICheckedArithmetic, ICheckedArithmetic, i32);
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
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_1176_i32 = Builtin::i32;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf(__extension_Int32_1176_i32 const& __this LIFETIMEBOUND, __extension_Int32_1176_i32 rhs)  -> const typename __extension_Int32_1176_i32;
	#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int32_1176_i32 const& __this LIFETIMEBOUND, __extension_Int32_1176_i32 rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1176_i32>;
	#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getIsSigned; template<> struct __static_getIsSigned<__extension_Int32_1176_i32> { static inline constexpr auto get() -> const bool; };
	#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32;
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32;
	#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32;
	#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32;
	#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ASTRUMSTD_API auto getCheckedIsqrt(__extension_Int32_1176_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1176_i32>;
	#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1176_i32;
	#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1176_i32;
	#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1176_i32;
	#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1176_i32;
	#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int32_1176_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1176_i32>;
	#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1176_i32;
	#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IBinaryInteger, IBinaryInteger, i32);
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
#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_1304_i32 = Builtin::i32;
	#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IFixedWidthInteger, IFixedWidthInteger);
	#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft(__extension_Int32_1304_i32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int32_1304_i32;
	#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight(__extension_Int32_1304_i32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int32_1304_i32;
	#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getBitWidth; template<> struct __static_getBitWidth<__extension_Int32_1304_i32> { static inline constexpr auto get() -> const Builtin::u32; };
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32;
	#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32;
	#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32;
	#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32;
	#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1304_i32;
	#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1304_i32;
	#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1304_i32;
	#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1304_i32;
	#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32;
	#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IFixedWidthInteger, IFixedWidthInteger, i32);
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
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	using __extension_Int32_1342_i32 = Builtin::i32;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int32_1342_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const bool;
	#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMaxDigitCount; template<> struct __static_getMaxDigitCount<__extension_Int32_1342_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMaxHexDigitCount; template<> struct __static_getMaxHexDigitCount<__extension_Int32_1342_i32> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class __TT> struct __static_getMaxValueDiv10; template<> struct __static_getMaxValueDiv10<__extension_Int32_1342_i32> { static inline constexpr auto get() -> const __extension_Int32_1342_i32; };
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int32_1342_i32 const& __this ) -> const __extension_Int32_1342_i32;
	#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int32_1342_i32 const& __this ) -> const __extension_Int32_1342_i32;
	#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i32, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, i32);
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
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMinValue<__extension_Int32_14_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-2147483648)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMaxValue<__extension_Int32_14_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(+Builtin::i32(2147483647)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto operator<=>(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int32_1342_i32> rhs) noexcept -> const Builtin::i32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this <=> rhs;
			}
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_19_i32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(UnsafeCast<Builtin::u32>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int32_19_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_19_i32&
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int32_19_i32
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) >= 0) {
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftLeft(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_bsl_eq(__extension_Int32_19_i32 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int32_19_i32&
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::u32 amount) noexcept -> const typename __extension_Int32_19_i32
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) >= 0) {
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsPositive)(__this.__ref()) ? Builtin::i32(0) : Builtin::i32(-1);
		}
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::UncheckedShiftRight(__this, Builtin::Cast<true, Builtin::i32>(amount));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_bsl_eq(__extension_Int32_19_i32 & __this , Builtin::u32 amount) noexcept -> typename __extension_Int32_19_i32&
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_bsl)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getHashCode(__extension_Int32_19_i32 const& __this ) -> const Builtin::u64
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToBoolean(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt8(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i8((signed char)0x7F)) > 0 || (__this <=> (Builtin::i32(-0x80))) < 0) {
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt8(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u8((unsigned char)0)) < 0 || (__this <=> Builtin::u8((unsigned char)0xFF)) > 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt16(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i16((short)0x7FFF)) > 0 || (__this <=> (Builtin::i32(-0x8000))) < 0) {
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::i16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt16(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u16((unsigned short)0)) < 0 || (__this <=> Builtin::u16((unsigned short)0xFFFF)) > 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u32(0U)) < 0) {
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u64(0ULL)) < 0) {
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToInt128(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUInt128(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u128(0ULL)) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToIsize(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToUsize(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::usize(0U)) < 0) {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat32(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToFloat64(__extension_Int32_87_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToByte(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto ToChar(__extension_Int32_87_i32 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::char16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_1342_i32, __extension_Int32_1342_i32>
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator /% implemented only for integer types");
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(ADV_UFCS(_operator_bsl)(__this, rhs), __this % rhs);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = __this; 
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		result /= rhs;
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this /= rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto correction = (__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - Builtin::i32(1)); 
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, __extension_Int32_1342_i32>((ADV_UFCS(_operator_div_lt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int32_1342_i32{ADV_UFCS(_operator_div_lt)(__this, rhs)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Int32_149_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_149_i32
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(__this, rhs);
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (rem == Builtin::i32(0)) {
				#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return div;
			}
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto correction = Builtin::i32(1) + ((__this ^ rhs) >> (ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - Builtin::i32(1))); 
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return div + correction;
		} else {
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return Builtin::Cast<true, __extension_Int32_1342_i32>((ADV_UFCS(_operator_div_gt)(Builtin::f64{__this}, rhs)));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Int32_149_i32 & __this , auto rhs)  -> typename __extension_Int32_149_i32&
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = __extension_Int32_1342_i32{ADV_UFCS(_operator_div_gt)(__this, rhs)}); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl(__extension_Int32_199_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_199_i32
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Div)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_eq(__extension_Int32_199_i32 & __this , T rhs)  -> typename __extension_Int32_199_i32&
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(DivAssign)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl(__extension_Int32_199_i32 const& __this LIFETIMEBOUND, T rhs)  -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::DivExact(__this, rhs, result)) {
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor(__extension_Int32_219_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int32_219_i32
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto base = __this; 
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = Builtin::i32(1); 
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					result *= base;
				}
				#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				base *= base;
			}
			#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result * base;
		} else {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result *= base;
						#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Int32_219_i32 & __this , Builtin::u32 exp)  -> typename __extension_Int32_219_i32&
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MaxMagnitudeNumber(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_257_i32
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto MinMagnitudeNumber(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_257_i32
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt8(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt16(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt32(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt64(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToInt128(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToIsize(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NarrowToUsize(__extension_Int32_257_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getOne<__extension_Int32_257_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getZero<__extension_Int32_257_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getRadix<__extension_Int32_257_i32>::get() -> const Builtin::i32
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getAbs(__extension_Int32_257_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsCanonical(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i32(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsFinite(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInfinity(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsInteger(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNaN(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegative(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsNormal(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsOddInteger(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i32(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositive(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsRealNumber(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsSubnormal(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsZero(__extension_Int32_257_i32 const& __this ) -> const bool
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMinusOne<__extension_Int32_369_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Max(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_373_i32
	{
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MaxNumber(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_373_i32
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Min(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_373_i32
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto MinNumber(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_373_i32
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Clamp(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 min, __extension_Int32_1342_i32 max)  -> const typename __extension_Int32_373_i32
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSign(__extension_Int32_373_i32 const& __this ) -> const Builtin::i32
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedLog(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 base) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(0)) <= 0 || (base <=> Builtin::i32(1)) <= 0) {
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(2)) {
				#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog2)(__this.__ref());
			}
			#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (base == Builtin::i32(10)) {
				#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return ADV_UPCS(CheckedLog10)(__this.__ref());
			}
		}
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> base) < 0) {
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 n = Builtin::i32(1); 
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto r = base; 
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto baseRatio = ADV_UFCS(_operator_bsl)(__this, base); 
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		while ((r <=> baseRatio) <= 0) 
		{
			#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++n;
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			r *= base;
		}
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return n;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto Midpoint(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_401_i32
	{
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto result = ((__this ^ rhs) >> Builtin::i32(1)) + (__this & rhs); 
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto correction = (result <=> Builtin::i32(0)) < 0; 
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result + ((Builtin::Cast<true, __extension_Int32_1342_i32>(correction)) & (__this ^ rhs));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsMultipleOf(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const bool
	{
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(0)) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this == Builtin::i32(0);
		}
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return true;
		}
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getAllBitsSet<__extension_Int32_401_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i32)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getIsPow2(__extension_Int32_401_i32 const& __this ) -> const bool
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPositive)(__this.__ref()) && ADV_UPCS(PopCount)(__this.__ref()) == Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog2(__extension_Int32_401_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Cast<true, __extension_Int32_1342_i32>((ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - Builtin::i32(1) - ADV_UPCS(LeadingZeroCount)(__this.__ref())));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2(__extension_Int32_401_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog2)(__this.__ref())) {
			{
				#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedLog10(__extension_Int32_401_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(0)) <= 0) {
			#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto val = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C1 = Builtin::u32(0b01100000000000000000U) - Builtin::u32(10U);
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C2 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(100U);
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C3 = Builtin::u32(0b11100000000000000000U) - Builtin::u32(1000U);
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::u32 C4 = Builtin::u32(0b10000000000000000000U) - Builtin::u32(10000U);
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto log = Builtin::i32(0); 
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((val <=> Builtin::i32(100000)) >= 0) {
			#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(val.__ref(), Builtin::u32(100000U));
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			log += Builtin::i32(5);
		}
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return log + ((((val + C1) & (val + C2)) ^ ((val + C3) & (val + C4))) >> Builtin::i32(17));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog10(__extension_Int32_401_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedLog10)(__this.__ref())) {
			{
				#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +? implemented only for integer types");
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeAdd(__this, rhs, result)) {
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +?= implemented only for integer types");
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_add_qst)(__this, rhs)) {
			{
				#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +! implemented only for integer types");
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictAdd(__this, rhs, result);
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +% implemented only for integer types");
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingAdd(__this, rhs, result);
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +| implemented only for integer types");
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingAdd(__this, rhs, result);
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_add_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_add_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_qst(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_qst_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_ne(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_ne_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_mod(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_mod_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_add_add_or(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_add_add_or_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_add_add_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingAdd(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs, bool carry) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = Builtin::CarryingAdd(__this, rhs, carry, result); 
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto BorrowingSub(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs, bool carry) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = Builtin::BorrowingSub(__this, rhs, carry, result); 
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -? implemented only for integer types");
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeSubtract(__this, rhs, result)) {
			#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -?= implemented only for integer types");
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_sub_qst)(__this, rhs)) {
			{
				#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -! implemented only for integer types");
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictSubtract(__this, rhs, result);
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -% implemented only for integer types");
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingSubtract(__this, rhs, result);
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -| implemented only for integer types");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingSubtract(__this, rhs, result);
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_sub_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_sub_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_qst(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_qst_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_qst)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_ne(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_ne_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_ne)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_mod(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_mod_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_mod)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_sub_or(__extension_Int32_525_i32 & __this )  -> typename __extension_Int32_525_i32&
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or_eq)(__this, Builtin::i32(1))); 
	}
	inline constexpr auto _operator_sub_sub_or_postfix(__extension_Int32_525_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_sub_sub_or)(__this); return copy; }
	
} namespace System{
} namespace __extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *? implemented only for integer types");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeMultiply(__this, rhs, result)) {
			#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *?= implemented only for integer types");
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mul_qst)(__this, rhs)) {
			{
				#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *! implemented only for integer types");
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictMultiply(__this, rhs, result);
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *% implemented only for integer types");
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingMultiply(__this, rhs, result);
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_mod_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *| implemented only for integer types");
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingMultiply(__this, rhs, result);
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mul_or_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_mul_gt(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>
	{
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::WideningMul32(__this, rhs);
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CarryingMul(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs, __extension_Int32_1342_i32 carry) noexcept -> const std::tuple<Builtin::u32, Builtin::i32>
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto& [low, high] = Builtin::CarryingMul32(__this, rhs, carry);
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(low, high);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\? implemented only for integer types");
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivide(__this, rhs, result)) {
			#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\?= implemented only for integer types");
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_qst)(__this, rhs)) {
			{
				#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\! implemented only for integer types");
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictDivide(__this, rhs, result);
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\% implemented only for integer types");
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingDivide(__this, rhs, result);
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_mod_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\| implemented only for integer types");
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingDivide(__this, rhs, result);
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_or_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_bsl_or)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\? implemented only for integer types");
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeDivExact(__this, rhs, result)) {
			#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_bsl_bsl_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\\\?= implemented only for integer types");
		#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_bsl_bsl_qst)(__this, rhs)) {
			{
				#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %? implemented only for integer types");
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeModulus(__this, rhs, result)) {
			#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_qst_eq(__extension_Int32_525_i32 & __this , T rhs) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %?= implemented only for integer types");
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				__this = result;
			}
		}
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %! implemented only for integer types");
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictModulus(__this, rhs, result);
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_ne_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_ne)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Int32_525_i32
	{
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %% implemented only for integer types");
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingModulus(__this, rhs, result);
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> inline constexpr auto _operator_mod_mod_eq(__extension_Int32_525_i32 & __this , T rhs)  -> typename __extension_Int32_525_i32&
	{
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mod_mod)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (Builtin::SafeNegate(__this, result)) {
			#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return result;
		}
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32
	{
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::StrictNegate(__this, result);
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32
	{
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::WrappingNegate(__this, result);
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const typename __extension_Int32_525_i32
	{
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::SaturatingNegate(__this, result);
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_sub_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND)  -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeNegate(__this, result); 
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_qst_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this <<= amount;
		}
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_525_i32
	{
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::UncheckedShiftLeft(__this, amount);
		}
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_ne_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_525_i32&
	{
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftLeft(__this, amount & (ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_lt_lt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_lt_lt_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_lt_lt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this >> amount;
		}
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_qst_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this >>= amount;
		}
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int32_525_i32
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((amount <=> Builtin::i32(0)) >= 0 && (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) < 0) {
			#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this >> amount;
		}
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_ne_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount)  -> typename __extension_Int32_525_i32&
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_ne)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::UncheckedShiftRight(__this, amount & (ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - Builtin::i32(1)))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_eq(__extension_Int32_525_i32 & __this , Builtin::i32 amount) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_mod)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_gt_gt_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::i32 amount) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UFCS(_operator_gt_gt_mod)(__this, amount), (amount <=> Builtin::i32(0)) < 0 || (amount <=> ADV_USPCS(BitWidth, __extension_Int32_1342_i32)()) >= 0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto base = __this; 
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = Builtin::i32(1); 
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (const auto mul = ADV_UFCS(_operator_mul_qst)(result, base)) {
					{
						#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						auto __tmp0 = *mul; const auto& mul = __tmp0;
						
						#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						result = mul;
					}
				} else {
					#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					{
						#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						return nullptr;
					}
				}
				#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if (const auto mul = ADV_UFCS(_operator_mul_qst)(base, base)) {
				{
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					auto __tmp0 = *mul; const auto& mul = __tmp0;
					
					#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					base = mul;
				}
			} else {
				#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				{
					#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return nullptr;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_qst_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this = result;
			}
		}
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp)  -> const typename __extension_Int32_525_i32
	{
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto base = __this; 
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = Builtin::i32(1); 
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_ne_eq)(result, base);
				#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return result;
				}
			}
			#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(_operator_mul_ne_eq)(base, base);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_ne_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp)  -> typename __extension_Int32_525_i32&
	{
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_ne)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(1);
		}
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto base = __this; 
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = Builtin::i32(1); 
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (std::is_constant_evaluated()) {
			#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(result, base);
				}
				#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
				#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				ADV_UFCS(_operator_mul_mod_eq)(base, base);
			}
			#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UFCS(_operator_mul_mod)(result, base);
		} else {
			#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			{
				#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				for (;;) 
				{
					#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						ADV_UFCS(_operator_mul_mod_eq)(result, base);
						#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
						if (exp == Builtin::i32(1)) {
							#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
							return result;
						}
					}
					#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
					#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					ADV_UFCS(_operator_mul_mod_eq)(base, base);
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_mod)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const typename __extension_Int32_525_i32
	{
		#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(_operator_xor_xor_qst)(__this, exp)) {
			{
				#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_UPCS(IsNegative)(__this.__ref()) && exp % Builtin::i32(2) == Builtin::i32(1)) ? ADV_USPCS(MinValue, __extension_Int32_1342_i32)() : ADV_USPCS(MaxValue, __extension_Int32_1342_i32)();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_or_eq(__extension_Int32_525_i32 & __this , Builtin::u32 exp) noexcept -> typename __extension_Int32_525_i32&
	{
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor_or)(__this, exp)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto _operator_xor_xor_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, Builtin::u32 exp) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return std::make_tuple(Builtin::i32(1), false);
		}
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto base = __this; 
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = Builtin::i32(1); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = false; 
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto tmp = std::make_tuple(Builtin::i32(0), false); 
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		for (;;) 
		{
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
				#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				tmp = ADV_UFCS(_operator_mul_mod_qst)(result, base);
				#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				if (exp == Builtin::i32(1)) {
					#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					std::get<1>(tmp) |= overflowed;
					#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
					return tmp;
				}
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				result = std::get<0>(tmp);
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				overflowed |= std::get<1>(tmp);
			}
			#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_UFCS(DivAssign)(exp.__ref(), Builtin::i32(2));
			#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			tmp = ADV_UFCS(_operator_mul_mod_qst)(base, base);
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			base = std::get<0>(tmp);
			#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			overflowed |= std::get<1>(tmp);
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedAbs(__extension_Int32_525_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_qst)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getStrictAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_ne)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getSaturatingAbs(__extension_Int32_525_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_or)(__this) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getOverflowingAbs(__extension_Int32_525_i32 const& __this ) -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsNegative)(__this.__ref()) ? ADV_UFCS(_operator_sub_mod_qst)(__this) : std::make_tuple(__this, false)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto NextMultipleOf(__extension_Int32_1176_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs)  -> const typename __extension_Int32_1176_i32
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this;
		}
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto remainder = __this % rhs; 
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return mod == Builtin::i32(0) ? __this : __this + (rhs - mod);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto CheckedNextMultipleOf(__extension_Int32_1176_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this;
		}
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 remainder{}; 
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto r = ADV_UFCS(_operator_mod_qst)(__this, rhs)) {
			{
				#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *r; const auto& r = __tmp0;
				
				#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				remainder = r;
			}
		} else {
			#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto mod = ((remainder <=> Builtin::i32(0)) > 0 && (rhs <=> Builtin::i32(0)) < 0) || ((remainder <=> Builtin::i32(0)) < 0 && (rhs <=> Builtin::i32(0)) > 0) ? remainder + rhs : remainder; 
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (mod == Builtin::i32(0)) {
			#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this;
		}
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)(__this, (rhs - mod));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getIsSigned<__extension_Int32_1176_i32>::get() -> const bool
	{
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getTrailingOneCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32
	{
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::TrailingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteCount(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32
	{
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(__extension_Int32_1342_i32)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMinimalBitWidth(__extension_Int32_1176_i32 const& __this ) -> const Builtin::u32
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - ADV_UPCS(LeadingZeroCount)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline auto getIsqrt(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UPCS(CheckedIsqrt)(__this.__ref())) {
			{
				#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLog2Ceiling(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto result = ADV_UPCS(Log2)(__this.__ref()); 
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(PopCount)(__this.__ref()) != Builtin::i32(1)) {
			#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			++result;
		}
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPrevPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(One, __extension_Int32_1342_i32)() << (ADV_UPCS(MinimalBitWidth)(__this.__ref()) - Builtin::i32(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getNextPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return (ADV_USPCS(AllBitsSet, __extension_Int32_1342_i32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())) + Builtin::i32(1);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getCheckedNextPow2(__extension_Int32_1176_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_qst)((ADV_USPCS(AllBitsSet, __extension_Int32_1342_i32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i32(1));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getWrappingNextPow2(__extension_Int32_1176_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::i32(1)) <= 0) {
			#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return Builtin::i32(0);
		}
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const auto p = __this - Builtin::i32(1); 
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_UFCS(_operator_add_mod)((ADV_USPCS(AllBitsSet, __extension_Int32_1342_i32)() >> ADV_UPCS(LeadingZeroCount)(p.__ref())), Builtin::i32(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateLeft(__extension_Int32_1304_i32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int32_1304_i32
	{
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateLeft(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto RotateRight(__extension_Int32_1304_i32 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount) noexcept -> const typename __extension_Int32_1304_i32
	{
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::BitsRotateRight(__this, shiftAmount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getBitWidth<__extension_Int32_1304_i32>::get() -> const Builtin::u32
	{
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(32U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32
	{
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLeadingOneCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::LeadingZeroCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getPopCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32
	{
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getZeroCount(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32
	{
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(ADV_UFCS(_operator_not)(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getByteSwapped(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(Builtin::ByteSwap32(ADV_UFCS(NarrowToUInt32)(__this.__ref())))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getBigEndian(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsLittleEndian()) {
			#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getLittleEndian(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if constexpr (Builtin::IsBigEndian()) {
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(ByteSwapped)(__this.__ref());
		}
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return __this;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getReverseBits(__extension_Int32_1304_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::ReverseBits32(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getShortestBitLength(__extension_Int32_1304_i32 const& __this ) -> const Builtin::u32
	{
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((__this <=> Builtin::u32(0U)) >= 0) {
			#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return ADV_USPCS(BitWidth, __extension_Int32_1342_i32)() + Builtin::u32(1U) - ADV_UPCS(LeadingOneCount)(__this.__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	
} namespace __extensions { using namespace System;
#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int32_1342_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const bool
	{
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt32)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMaxDigitCount<__extension_Int32_1342_i32>::get() -> const Builtin::i32
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMaxHexDigitCount<__extension_Int32_1342_i32>::get() -> const Builtin::i32
	{
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto __static_getMaxValueDiv10<__extension_Int32_1342_i32>::get() -> const __extension_Int32_1342_i32
	{
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int32_1342_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i32(10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int32_1342_i32 const& __this ) -> const __extension_Int32_1342_i32
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(__this, Builtin::i32(16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	

}