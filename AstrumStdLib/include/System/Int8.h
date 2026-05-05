#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/Numerics/IBinaryIntegerFormatInfo.h"
using namespace System::Numerics;
#include "System/Numerics/ISignedNumber.h"
using namespace System::Numerics;
#include "Optional.h"
#include "IConvertible.h"

namespace System {
namespace __Unsafe {} namespace __Int8_Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using Int8 = Builtin::i8;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
using SByte = Builtin::i8;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_12_i8 = Builtin::i8;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_12_i8> inline constexpr auto __static_getMinValue() -> const __extension_Int8_12_i8;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_12_i8> inline constexpr auto __static_getMaxValue() -> const __extension_Int8_12_i8;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IMinMaxValue, IMinMaxValue, i8);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_17_i8 = Builtin::i8;
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_eq_eq_qst(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_17_i8> rhs)  -> const Builtin::i32;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_17_i8;
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int8_17_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_17_i8&;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode(__extension_Int8_17_i8 const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_qst;
using __extensions::operator<=>;
using __extensions::_operator_gt_gt_gt;
using __extensions::_operator_gt_gt_gt_eq;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_49_i8 = Builtin::i8;
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_qst(__extension_Int8_49_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IAbstractComparable, IAbstractComparable, i8);
	} namespace System{
using __extensions::_operator_lt_eq_gt_qst;

		} namespace __extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_64_i8 = Builtin::i8;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const bool;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::f32;
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::f64;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char8;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char16;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IConvertible, IConvertible, i8);
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
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_126_i8 = Builtin::i8;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MaxMagnitude(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_126_i8 rhs)  -> const typename __extension_Int8_126_i8;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_126_i8 rhs)  -> const typename __extension_Int8_126_i8;
	#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto MinMagnitude(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_126_i8 rhs)  -> const typename __extension_Int8_126_i8;
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_126_i8 rhs)  -> const typename __extension_Int8_126_i8;
	#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto Parse(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int8_126_i8;
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto TryParse(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const Builtin::Nullable<__extension_Int8_126_i8>;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getOne() -> const __extension_Int8_126_i8;
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getZero() -> const __extension_Int8_126_i8;
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getRadix() -> const Builtin::i32;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs(__extension_Int8_126_i8 const& __this ) -> const __extension_Int8_126_i8;
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero(__extension_Int8_126_i8 const& __this ) -> const bool;
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, INumberBase, INumberBase, i8);
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
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_238_i8 = Builtin::i8;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_238_i8> inline constexpr auto __static_getMinusOne() -> const __extension_Int8_238_i8;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, ISignedNumber, ISignedNumber, i8);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_242_i8 = Builtin::i8;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ASTRUMSTD_API auto CopySign(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 sign)  -> const typename __extension_Int8_242_i8;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 rhs)  -> const typename __extension_Int8_242_i8;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 rhs)  -> const typename __extension_Int8_242_i8;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 rhs)  -> const typename __extension_Int8_242_i8;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 rhs)  -> const typename __extension_Int8_242_i8;
	#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto Clamp(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_242_i8 min, __extension_Int8_242_i8 max)  -> const typename __extension_Int8_242_i8;
	#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign(__extension_Int8_242_i8 const& __this ) -> const Builtin::i32;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, INumber, INumber, i8);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_270_i8 = Builtin::i8;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_270_i8> inline constexpr auto __static_getAllBitsSet() -> const __extension_Int8_270_i8;
	#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2(__extension_Int8_270_i8 const& __this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getLog2(__extension_Int8_270_i8 const& __this ) -> const __extension_Int8_270_i8;
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryNumber, IBinaryNumber, i8);
	} namespace System{
using __extensions::__static_getAllBitsSet;
using __extensions::getIsPow2;
using __extensions::getLog2;

		} namespace __extensions { using namespace System;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_284_i8 = Builtin::i8;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto DivRem(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, __extension_Int8_284_i8 rhs)  -> const std::tuple<__extension_Int8_284_i8, __extension_Int8_284_i8>;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount)  -> const typename __extension_Int8_284_i8;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount)  -> const typename __extension_Int8_284_i8;
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_284_i8;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_284_i8;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_284_i8;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount(__extension_Int8_284_i8 const& __this ) -> const Builtin::usize;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength(__extension_Int8_284_i8 const& __this ) -> const Builtin::usize;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryInteger, IBinaryInteger, i8);
	} namespace System{
using __extensions::DivRem;
using __extensions::RotateLeft;
using __extensions::RotateRight;
using __extensions::getLeadingZeroCount;
using __extensions::getPopCount;
using __extensions::getTrailingZeroCount;
using __extensions::getByteCount;
using __extensions::getShortestBitLength;

		} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	using __extension_Int8_308_i8 = Builtin::i8;
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE(IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo);
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int8_308_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const bool;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getIsSigned() -> const bool;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxDigitCount() -> const Builtin::i32;
	#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxHexDigitCount() -> const Builtin::i32;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxValueDiv10() -> const __extension_Int8_308_i8;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int8_308_i8 const& __this ) -> const __extension_Int8_308_i8;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int8_308_i8 const& __this ) -> const __extension_Int8_308_i8;
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(i8, IBinaryIntegerFormatInfo, IBinaryIntegerFormatInfo, i8);
	} namespace System{
using __extensions::IsGreaterThanAsUnsigned;
using __extensions::__static_getIsSigned;
using __extensions::__static_getMaxDigitCount;
using __extensions::__static_getMaxHexDigitCount;
using __extensions::__static_getMaxValueDiv10;
using __extensions::getMultiplyBy10;
using __extensions::getMultiplyBy16;

	//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_12_i8> inline constexpr auto __static_getMinValue() -> const __extension_Int8_308_i8
	{
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-128)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_12_i8> inline constexpr auto __static_getMaxValue() -> const __extension_Int8_308_i8
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(+Builtin::i8(127)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto operator<=>(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::Nullable<__extension_Int8_308_i8> rhs)  -> const Builtin::i32
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(rhs, nullptr))) {
				#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *rhs; const auto& rhs = __tmp0;
				
				#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> rhs;
			}
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8((signed char)1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::i32 amount)  -> const typename __extension_Int8_17_i8
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(UnsafeCast<Builtin::u8>(__this) >> amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto _operator_gt_gt_gt_eq(__extension_Int8_17_i8 & __this , Builtin::i32 amount)  -> typename __extension_Int8_17_i8&
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_gt_gt_gt)(__this, amount)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getHashCode(__extension_Int8_17_i8 const& __this ) -> const Builtin::u64
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToBoolean(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const bool
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i8((signed char)0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt8(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt8(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt16(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt16(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u16>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u32>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u64>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToInt128(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUInt128(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::u128>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToIsize(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToUsize(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::usize>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat32(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::f32
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToFloat64(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::f64
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToByte(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char8
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::char8>(__this);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto ToChar(__extension_Int8_64_i8 const& __this LIFETIMEBOUND)  -> const Builtin::char16
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Cast<true, Builtin::char16>(__this);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MaxMagnitudeNumber(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_126_i8
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto MinMagnitudeNumber(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_126_i8
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt8(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt8(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt16(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt16(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt32(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt32(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt64(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt64(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToInt128(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUInt128(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::u128{__this}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToIsize(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto NarrowToUsize(__extension_Int8_126_i8 const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getOne() -> const __extension_Int8_308_i8
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getZero() -> const __extension_Int8_308_i8
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_126_i8> inline constexpr auto __static_getRadix() -> const Builtin::i32
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getAbs(__extension_Int8_126_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0 ? -__this : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsCanonical(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsComplexNumber(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsEvenInteger(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i8(1)) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsFinite(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInfinity(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsInteger(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNaN(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegative(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsNormal(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsOddInteger(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this & Builtin::i8(1)) != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositive(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsRealNumber(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsSubnormal(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsZero(__extension_Int8_126_i8 const& __this ) -> const bool
	{
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_238_i8> inline constexpr auto __static_getMinusOne() -> const __extension_Int8_308_i8
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(-1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Max(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_242_i8
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMax)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MaxNumber(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_242_i8
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto Min(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_242_i8
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultMin)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto MinNumber(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_242_i8
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto Clamp(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 min, __extension_Int8_308_i8 max)  -> const typename __extension_Int8_242_i8
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultClamp)(__this, min, max)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getSign(__extension_Int8_242_i8 const& __this ) -> const Builtin::i32
	{
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((INumber), DefaultSign)(__this)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_270_i8> inline constexpr auto __static_getAllBitsSet() -> const __extension_Int8_308_i8
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MinusOne, Builtin::i8)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getIsPow2(__extension_Int8_270_i8 const& __this ) -> const bool
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(false); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline auto getLog2(__extension_Int8_270_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) < 0) {
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto DivRem(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const std::tuple<__extension_Int8_308_i8, __extension_Int8_308_i8>
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(__this / rhs, __this % rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateLeft(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount)  -> const typename __extension_Int8_284_i8
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>((__this << (shiftAmount & Builtin::i8((signed char)7))) | (UnsafeCast<Builtin::u8>(__this) >> ((Builtin::i8((signed char)8) - shiftAmount) & Builtin::i8((signed char)7))))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto RotateRight(__extension_Int8_284_i8 const& __this LIFETIMEBOUND, Builtin::i32 shiftAmount)  -> const typename __extension_Int8_284_i8
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>((UnsafeCast<Builtin::u8>(__this) >> (shiftAmount & Builtin::i8((signed char)7))) | (__this << ((Builtin::i8((signed char)8) - shiftAmount) & Builtin::i8((signed char)7))))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getLeadingZeroCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getPopCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getTrailingZeroCount(__extension_Int8_284_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8(8)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getByteCount(__extension_Int8_284_i8 const& __this ) -> const Builtin::usize
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::usize(sizeof(__extension_Int8_308_i8))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getShortestBitLength(__extension_Int8_284_i8 const& __this ) -> const Builtin::usize
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((__this <=> Builtin::i8((signed char)0)) >= 0) {
			#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return (Builtin::usize(sizeof(__extension_Int8_308_i8)) * Builtin::i8((signed char)8)) - ADV_UPCS(LeadingZeroCount)(__this.__ref());
		}
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return (Builtin::usize(sizeof(__extension_Int8_308_i8)) * Builtin::i8((signed char)8)) + Builtin::i8((signed char)1) - ADV_UPCS(LeadingZeroCount)((ADV_UFCS(_operator_not)(__this)).__ref());
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	
} namespace __extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto IsGreaterThanAsUnsigned(__extension_Int8_308_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const bool
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt8)(__this.__ref()) <=> ADV_UFCS(NarrowToUInt8)(rhs.__ref())) > 0); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getIsSigned() -> const bool
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(true); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxDigitCount() -> const Builtin::i32
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8((signed char)3)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxHexDigitCount() -> const Builtin::i32
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(Builtin::i8((signed char)2)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class __TT> requires std::same_as<__TT, __extension_Int8_308_i8> inline constexpr auto __static_getMaxValueDiv10() -> const __extension_Int8_308_i8
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(MaxValue, Builtin::i8)() / Builtin::i8(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy10(__extension_Int8_308_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<__extension_Int8_308_i8>(Builtin::i32{__this} * Builtin::i8((signed char)10))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	inline constexpr auto getMultiplyBy16(__extension_Int8_308_i8 const& __this ) -> const __extension_Int8_308_i8
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<__extension_Int8_308_i8>(Builtin::i32{__this} * Builtin::i8((signed char)16))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	

}