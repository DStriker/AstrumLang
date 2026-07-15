#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Decimal_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Decimal;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_Decimal;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	struct Decimal final : public Builtin::Struct {
		public: using __self = Decimal;
		public: using __class = __Class_Decimal;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using DivisibleArithmeticType = __self;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr auto getScale() const  -> Builtin::u32;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER(public, Scale, getScale, Builtin::u32);
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr auto getIsNegative() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER(public, IsNegative, getIsNegative, bool);
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr Decimal() noexcept = default;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr Decimal(Builtin::u32 low, Builtin::u32 mid, Builtin::u32 high, bool isNegative, Builtin::u8 scale) ;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: inline constexpr Decimal(Builtin::u64 low, Builtin::u32 high, Builtin::i32 flags) ;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr Decimal(Builtin::u128 mantissa, bool isNegative, Builtin::u8 scale) ;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr Decimal(__self other, Builtin::i32 flags) ;
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::i8 value) noexcept;
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::u8 value) noexcept;
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::i16 value) noexcept;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::u16 value) noexcept;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::i32 value) noexcept;
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::u32 value) noexcept;
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::i64 value) noexcept;
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr  Decimal(Builtin::u64 value) noexcept;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr explicit Decimal(Builtin::i128 value) ;
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr explicit Decimal(Builtin::u128 value) ;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit Decimal(Builtin::f32 value) ;
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit Decimal(Builtin::f64 value) ;
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit Decimal(Builtin::f128 value) ;
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit Decimal(Builtin::f16 value) ;
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::i8() const ;
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::u8() const ;
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::i16() const ;
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::u16() const ;
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::i32() const ;
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::u32() const ;
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::i64() const ;
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::u64() const ;
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::i128() const noexcept;
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::u128() const ;
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::f16() const noexcept;
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline explicit operator Builtin::f32() const noexcept;
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit operator Builtin::f64() const noexcept;
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API explicit operator Builtin::f128() const noexcept;
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr auto operator+() const noexcept -> const __self;
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr auto operator-() const noexcept -> const __self;
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator+(__self other) const  -> const __self;
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator+=(__self other)  LIFETIMEBOUND -> __self&;
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++(int)  -> Decimal;
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator-(__self other) const  -> const __self;
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator-=(__self other)  LIFETIMEBOUND -> __self&;
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--(int)  -> Decimal;
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator*(__self other) const  -> const __self;
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator*=(__self other)  LIFETIMEBOUND -> __self&;
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator/(__self other) const  -> const __self;
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator/=(__self other)  LIFETIMEBOUND -> __self&;
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator%(__self other) const  -> const __self;
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator%=(__self other)  LIFETIMEBOUND -> __self&;
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline auto operator==(__self other) const noexcept -> const bool;
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API auto operator<=>(__self other) const noexcept -> const Builtin::i32;
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: ASTRUMSTD_API auto AddSub(__self other, bool sign) const  -> const __self;
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: ASTRUMSTD_API auto Mul(__self other) const  -> const __self;
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: ASTRUMSTD_API auto Div(__self other) const  -> const __self;
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: ASTRUMSTD_API auto Mod(__self other) const  -> const __self;
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: ASTRUMSTD_API auto CmpSub(__self other) const  -> const Builtin::i32;
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_HIDDEN auto RoundInternal(Builtin::u32 scale, MidpointRounding mode) const noexcept -> const __self;
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr auto GetBits() const  -> const Builtin::InlineArray<Builtin::i32(4), Builtin::u32>;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: Builtin::i32 _flags; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: Builtin::u32 _hi; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: Builtin::u64 _lo; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto SignMask = ADV_USPCS(MinValue, Builtin::i32)();
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto ScaleMask = Builtin::i32(0x00FF0000);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto ScaleShift = Builtin::i32(16);
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto MaxScaleInt32 = Builtin::i32(9);
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto MaxScaleInt64 = Builtin::i32(19);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto SCALE_MAX = Builtin::i32(28);
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto TenToPowerNine = Builtin::u32(1000000000U);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: static constexpr auto TenToPowerEighteen = Builtin::u64(1000000000000000000ULL);
		template <size_t I> friend auto& get(Decimal&);
		template <size_t I> friend const auto& get(const Decimal&);
		
	};
	
		} namespace __extensions { using namespace System;
#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1602_decimal = System::Decimal;
	#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Decimal_1602_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1602_decimal; };
	#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Decimal_1602_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1602_decimal; };
	#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1602_decimal, IMinMaxValue, IMinMaxValue, __extension_Decimal_1602_decimal);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1613_decimal = System::Decimal;
	#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Decimal_1613_decimal const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Midpoint(__extension_Decimal_1613_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1613_decimal rhs) noexcept -> const typename __extension_Decimal_1613_decimal;
	#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto IsMultipleOf(__extension_Decimal_1613_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1613_decimal rhs) noexcept -> const bool;
	#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getBits(__extension_Decimal_1613_decimal const& __this ) -> const Builtin::InlineArray<Builtin::i32(4), Builtin::u32>;
	#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getHashCode(__extension_Decimal_1613_decimal const& __this ) -> const Builtin::u64;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::Midpoint;
using __extensions::IsMultipleOf;
using __extensions::getBits;
using __extensions::getHashCode;

		} namespace __extensions { using namespace System;
#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1679_decimal = System::Decimal;
	#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Decimal_1679_decimal const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1679_decimal, IAbstractComparable, IAbstractComparable, __extension_Decimal_1679_decimal);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1694_decimal = System::Decimal;
	#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToBoolean(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt8(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt8(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt16(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt16(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u32;
	#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u64;
	#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt128(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt128(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u128;
	#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToIsize(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUsize(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::usize;
	#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToFloat32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::f32;
	#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToFloat64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::f64;
	#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToByte(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToChar(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::char32;
	#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1694_decimal, IConvertible, IConvertible, __extension_Decimal_1694_decimal);
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
#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1716_decimal = System::Decimal;
	#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Decimal_1716_decimal, __extension_Decimal_1716_decimal>;
	#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal;
	#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&;
	#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal;
	#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&;
	#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal;
	#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&;
	#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1716_decimal, IDivisibleArithmetic, IDivisibleArithmetic, __extension_Decimal_1716_decimal);
	} namespace System{
using __extensions::_operator_div_mod;
using __extensions::_operator_div_not;
using __extensions::_operator_div_not_eq;
using __extensions::_operator_div_lt;
using __extensions::_operator_div_lt_eq;
using __extensions::_operator_div_gt;
using __extensions::_operator_div_gt_eq;

		} namespace __extensions { using namespace System;
#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1737_decimal = System::Decimal;
	#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_xor_xor(__extension_Decimal_1737_decimal const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Decimal_1737_decimal;
	#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Decimal_1737_decimal & __this , Builtin::i32 exp)  -> typename __extension_Decimal_1737_decimal&;
	#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1737_decimal, ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic, __extension_Decimal_1737_decimal);
	} namespace System{
using __extensions::_operator_xor_xor;
using __extensions::_operator_xor_xor_eq;

		} namespace __extensions { using namespace System;
#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1778_decimal = System::Decimal;
	#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxMagnitude(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal;
	#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxMagnitudeNumber(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal;
	#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinMagnitude(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal;
	#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinMagnitudeNumber(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal;
	#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto Parse(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Decimal_1778_decimal;
	#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto TryParse(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Decimal_1778_decimal>;
	#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt8(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8;
	#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt8(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8;
	#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt16(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16;
	#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt16(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16;
	#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt32(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32;
	#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt32(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt64(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt64(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt128(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt128(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToIsize(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize;
	#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUsize(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getOne; template<> struct __static_getOne<__extension_Decimal_1778_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1778_decimal; };
	#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getZero; template<> struct __static_getZero<__extension_Decimal_1778_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1778_decimal; };
	#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getRadix; template<> struct __static_getRadix<__extension_Decimal_1778_decimal> { static inline constexpr auto get() -> const Builtin::i32; };
	#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAbs(__extension_Decimal_1778_decimal const& __this ) -> const __extension_Decimal_1778_decimal;
	#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsCanonical(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsComplexNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsEvenInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsFinite(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNaN(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNegative(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNormal(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsOddInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsPositive(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsRealNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsSubnormal(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsZero(__extension_Decimal_1778_decimal const& __this ) -> const bool;
	#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1778_decimal, INumberBase, INumberBase, __extension_Decimal_1778_decimal);
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
#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1897_decimal = System::Decimal;
	#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getMinusOne; template<> struct __static_getMinusOne<__extension_Decimal_1897_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1897_decimal; };
	#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1897_decimal, ISignedNumber, ISignedNumber, __extension_Decimal_1897_decimal);
	} namespace System{
using __extensions::__static_getMinusOne;

		} namespace __extensions { using namespace System;
#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1901_decimal = System::Decimal;
	#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CopySign(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal sign) noexcept -> const typename __extension_Decimal_1901_decimal;
	#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Max(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal;
	#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxNumber(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal;
	#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Min(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal;
	#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinNumber(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal;
	#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Clamp(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal min, __extension_Decimal_1901_decimal max)  -> const typename __extension_Decimal_1901_decimal;
	#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSign(__extension_Decimal_1901_decimal const& __this ) -> const Builtin::i32;
	#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1901_decimal, INumber, INumber, __extension_Decimal_1901_decimal);
	} namespace System{
using __extensions::CopySign;
using __extensions::Max;
using __extensions::MaxNumber;
using __extensions::Min;
using __extensions::MinNumber;
using __extensions::Clamp;
using __extensions::getSign;

		} namespace __extensions { using namespace System;
#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1925_decimal = System::Decimal;
	#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getPi; template<> struct __static_getPi<__extension_Decimal_1925_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1925_decimal; };
	#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getE; template<> struct __static_getE<__extension_Decimal_1925_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1925_decimal; };
	#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class __TT> struct __static_getTau; template<> struct __static_getTau<__extension_Decimal_1925_decimal> { static inline constexpr auto get() -> const __extension_Decimal_1925_decimal; };
	#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1925_decimal, IFloatingPointConstants, IFloatingPointConstants, __extension_Decimal_1925_decimal);
	} namespace System{
using __extensions::__static_getPi;
using __extensions::__static_getE;
using __extensions::__static_getTau;

		} namespace __extensions { using namespace System;
#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_1932_decimal = System::Decimal;
	#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64;
	#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128;
	#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Round(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, Builtin::u32 decimals)  -> const typename __extension_Decimal_1932_decimal;
	#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEven(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, Builtin::u32 decimals)  -> const typename __extension_Decimal_1932_decimal;
	#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Round(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, MidpointRounding mode)  -> const typename __extension_Decimal_1932_decimal;
	#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto Round(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, Builtin::u32 decimals, MidpointRounding mode)  -> const typename __extension_Decimal_1932_decimal;
	#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getFractionalPart(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getTruncate(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getFloor(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getCeil(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getRound(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getRoundTiesEven(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal;
	#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getExponentByteCount(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32;
	#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32;
	#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getSignificandBitLength(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32;
	#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getSignificandByteCount(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32;
	#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_1932_decimal, IFloatingPoint, IFloatingPoint, __extension_Decimal_1932_decimal);
	} namespace System{
using __extensions::TruncateToInt32;
using __extensions::TruncateToInt64;
using __extensions::TruncateToInt128;
using __extensions::FloorToInt32;
using __extensions::FloorToInt64;
using __extensions::FloorToInt128;
using __extensions::CeilToInt32;
using __extensions::CeilToInt64;
using __extensions::CeilToInt128;
using __extensions::RoundToInt32;
using __extensions::RoundToInt64;
using __extensions::RoundToInt128;
using __extensions::RoundTiesEvenToInt32;
using __extensions::RoundTiesEvenToInt64;
using __extensions::RoundTiesEvenToInt128;
using __extensions::Round;
using __extensions::RoundTiesEven;
using __extensions::Round;
using __extensions::Round;
using __extensions::getFractionalPart;
using __extensions::getTruncate;
using __extensions::getFloor;
using __extensions::getCeil;
using __extensions::getRound;
using __extensions::getRoundTiesEven;
using __extensions::getExponentByteCount;
using __extensions::getExponentShortestBitLength;
using __extensions::getSignificandBitLength;
using __extensions::getSignificandByteCount;

		} namespace __extensions { using namespace System;
#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2024_decimal = System::Decimal;
	#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	#line 2025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto _operator_mul_mul(__extension_Decimal_2024_decimal const& __this LIFETIMEBOUND, __extension_Decimal_2024_decimal exp)  -> const typename __extension_Decimal_2024_decimal;
	#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto _operator_mul_mul_eq(__extension_Decimal_2024_decimal & __this , __extension_Decimal_2024_decimal exp)  -> typename __extension_Decimal_2024_decimal&;
	#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2024_decimal, IPowerArithmetic, IPowerArithmetic, __extension_Decimal_2024_decimal);
	} namespace System{
using __extensions::_operator_mul_mul;
using __extensions::_operator_mul_mul_eq;

		} namespace __extensions { using namespace System;
#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2072_decimal = System::Decimal;
	#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getExp(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp2(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp10(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExpM1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp2M1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp10M1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal;
	#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2072_decimal, IExponentialFunctions, IExponentialFunctions, __extension_Decimal_2072_decimal);
	} namespace System{
using __extensions::getExp;
using __extensions::getExp2;
using __extensions::getExp10;
using __extensions::getExpM1;
using __extensions::getExp2M1;
using __extensions::getExp10M1;

		} namespace __extensions { using namespace System;
#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2116_decimal = System::Decimal;
	#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Log(__extension_Decimal_2116_decimal const& __this LIFETIMEBOUND, __extension_Decimal_2116_decimal base) noexcept -> const typename __extension_Decimal_2116_decimal;
	#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getLn(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLnP1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog2(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog2P1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog10(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog10P1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal;
	#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2116_decimal, ILogarithmicFunctions, ILogarithmicFunctions, __extension_Decimal_2116_decimal);
	} namespace System{
using __extensions::Log;
using __extensions::getLn;
using __extensions::getLnP1;
using __extensions::getLog2;
using __extensions::getLog2P1;
using __extensions::getLog10;
using __extensions::getLog10P1;

		} namespace __extensions { using namespace System;
#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2180_decimal = System::Decimal;
	#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto Root(__extension_Decimal_2180_decimal const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Decimal_2180_decimal;
	#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto Hypot(__extension_Decimal_2180_decimal const& __this LIFETIMEBOUND, __extension_Decimal_2180_decimal y)  -> const typename __extension_Decimal_2180_decimal;
	#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getSqrt(__extension_Decimal_2180_decimal const& __this ) -> const __extension_Decimal_2180_decimal;
	#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCbrt(__extension_Decimal_2180_decimal const& __this ) -> const __extension_Decimal_2180_decimal;
	#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2180_decimal, IRootFunctions, IRootFunctions, __extension_Decimal_2180_decimal);
	} namespace System{
using __extensions::Root;
using __extensions::Hypot;
using __extensions::getSqrt;
using __extensions::getCbrt;

		} namespace __extensions { using namespace System;
#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2277_decimal = System::Decimal;
	#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToRadians(__extension_Decimal_2277_decimal const& __this LIFETIMEBOUND)  -> const typename __extension_Decimal_2277_decimal;
	#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToDegrees(__extension_Decimal_2277_decimal const& __this LIFETIMEBOUND)  -> const typename __extension_Decimal_2277_decimal;
	#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getSin(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getCos(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getTan(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCot(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSec(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCsc(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAsin(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAcos(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAtan(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcot(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsec(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcsc(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinCos(__extension_Decimal_2277_decimal const& __this ) -> const std::tuple<__extension_Decimal_2277_decimal, __extension_Decimal_2277_decimal>;
	#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCosPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinCosPi(__extension_Decimal_2277_decimal const& __this ) -> const std::tuple<__extension_Decimal_2277_decimal, __extension_Decimal_2277_decimal>;
	#line 2434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getTanPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCotPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSecPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCscPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsinPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcosPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAtanPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcotPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsecPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcscPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal;
	#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2277_decimal, ITrigonometricFunctions, ITrigonometricFunctions, __extension_Decimal_2277_decimal);
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
#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	using __extension_Decimal_2460_decimal = System::Decimal;
	#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAcosh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcoth(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcsch(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsech(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAsinh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getAtanh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getCosh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCoth(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCsch(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSech(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getSinh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ASTRUMSTD_API auto getTanh(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal;
	#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Decimal_2460_decimal, IHyperbolicFunctions, IHyperbolicFunctions, __extension_Decimal_2460_decimal);
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

	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class __Class_Decimal final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using __underlying = Decimal; using __self = __underlying;
		__self __value;
		__Class_Decimal(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getScale() const -> Builtin::u32 { return __value.getScale(); }
		auto getIsNegative() const -> bool { return __value.getIsNegative(); }
		operator Builtin::i8() const  { return static_cast<Builtin::i8>(__value); }
		operator Builtin::u8() const  { return static_cast<Builtin::u8>(__value); }
		operator Builtin::i16() const  { return static_cast<Builtin::i16>(__value); }
		operator Builtin::u16() const  { return static_cast<Builtin::u16>(__value); }
		operator Builtin::i32() const  { return static_cast<Builtin::i32>(__value); }
		operator Builtin::u32() const  { return static_cast<Builtin::u32>(__value); }
		operator Builtin::i64() const  { return static_cast<Builtin::i64>(__value); }
		operator Builtin::u64() const  { return static_cast<Builtin::u64>(__value); }
		operator Builtin::i128() const noexcept { return static_cast<Builtin::i128>(__value); }
		operator Builtin::u128() const  { return static_cast<Builtin::u128>(__value); }
		operator Builtin::f16() const noexcept { return static_cast<Builtin::f16>(__value); }
		operator Builtin::f32() const noexcept { return static_cast<Builtin::f32>(__value); }
		operator Builtin::f64() const noexcept { return static_cast<Builtin::f64>(__value); }
		operator Builtin::f128() const noexcept { return static_cast<Builtin::f128>(__value); }
		auto operator+() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator+()); }
		auto operator-() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator-()); }
		auto operator+(__self other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator+=(__self other) -> __self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		auto operator-(__self other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator-=(__self other) -> __self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator--() -> __self & { ADV_EXPRESSION_BODY(__value.operator--()); }
		auto operator*(__self other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator*=(__self other) -> __self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator/(__self other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator/=(__self other) -> __self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator%(__self other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator%=(__self other) -> __self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator==(__self other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator<=>(__self other) const noexcept -> Builtin::i32 const { ADV_EXPRESSION_BODY(__value.operator<=>(other)); }
		auto GetBits() const  -> Builtin::InlineArray<Builtin::i32(4), Builtin::u32> const { ADV_EXPRESSION_BODY(__value.GetBits()); }
		
	};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(Decimal);
	
//###############################################################################
//# Free function declarations
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
namespace __Decimal_Protected { inline constexpr auto ScaleMask = Builtin::i32(0x00FF0000); }
#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
namespace __Decimal_Protected { inline constexpr auto ScaleShift = Builtin::i32(16); }
#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
namespace __Decimal_Protected { inline constexpr auto SignMask = ADV_USPCS(MinValue, Builtin::i32)(); }
//###############################################################################
//# Global variable declarations
//###############################################################################
//###############################################################################
//# Function definitions
//###############################################################################

#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto Decimal::getScale() const  -> Builtin::u32 
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u32{(_flags & __Decimal_Protected::ScaleMask) >> __Decimal_Protected::ScaleShift}); 
	}
	
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u32 low, Builtin::u32 mid, Builtin::u32 high, bool isNegative, Builtin::u8 scale)  : 
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32{scale} << __Decimal_Protected::ScaleShift}, 
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{high}, 
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{(Builtin::u64{mid} << Builtin::i32(32)) | low}
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((scale <=> SCALE_MAX) > 0) {
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DecimalOverflowException{});
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (isNegative) {
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags |= __Decimal_Protected::SignMask;
		}
	}
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u64 low, Builtin::u32 high, Builtin::i32 flags)  : 
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{flags}, 
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{high}, 
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{low}
	{
	}
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u128 mantissa, bool isNegative, Builtin::u8 scale)  :
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal(ADV_UFCS(NarrowToUInt32)(ADV_UFCS(Low64)(mantissa.__ref()).__ref()), Builtin::u32{ADV_UFCS(Low64)(mantissa.__ref()) >> Builtin::i32(32)}, ADV_UFCS(ToUInt32)(ADV_UFCS(High64)(mantissa.__ref()).__ref()), isNegative, scale)
	{
	}
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(__self other, Builtin::i32 flags)  : 
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{flags}, 
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{ADV_UPCS(_hi)(other.__ref())}, 
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{ADV_UPCS(_lo)(other.__ref())}
	{
	}
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::i8 value) noexcept
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 ivalue = value; 
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::u32(0U);
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) >= 0) {
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags = Builtin::i32(0);
		} else {
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_flags = __Decimal_Protected::SignMask;
				#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ivalue = -ivalue;
			}
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_lo = Builtin::Cast<true, Builtin::u32>(ivalue);
	}
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u8 value) noexcept : 
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32(0)}, 
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{value}
	{
	}
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::i16 value) noexcept
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 ivalue = value; 
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::u32(0U);
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) >= 0) {
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags = Builtin::i32(0);
		} else {
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_flags = __Decimal_Protected::SignMask;
				#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ivalue = -ivalue;
			}
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_lo = Builtin::Cast<true, Builtin::u32>(ivalue);
	}
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u16 value) noexcept : 
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32(0)}, 
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{value}
	{
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::i32 value) noexcept
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i64 ivalue = value; 
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::u32(0U);
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) >= 0) {
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags = Builtin::i32(0);
		} else {
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_flags = __Decimal_Protected::SignMask;
				#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ivalue = -ivalue;
			}
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_lo = Builtin::Cast<true, Builtin::u64>(ivalue);
	}
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u32 value) noexcept : 
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32(0)}, 
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{value}
	{
	}
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::i64 value) noexcept
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i128 ivalue = value; 
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::u32(0U);
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) >= 0) {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags = Builtin::i32(0);
		} else {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_flags = __Decimal_Protected::SignMask;
				#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ivalue = -ivalue;
			}
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_lo = Builtin::Cast<true, Builtin::u64>(ivalue);
	}
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u64 value) noexcept : 
	#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32(0)}, 
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{value}
	{
	}
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::i128 value)  : 
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{ADV_UFCS(Low64)(value.__ref())}
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) >= 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			_flags = Builtin::i32(0);
		} else {
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_flags = __Decimal_Protected::SignMask;
				#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				value = -value;
			}
		}
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u64>(ADV_UFCS(High64)(value.__ref())))> high = Builtin::Cast<true, Builtin::u64>(ADV_UFCS(High64)(value.__ref())); 
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((high <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DecimalOverflowException{});
		}
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::Cast<true, Builtin::u32>(high);
	}
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr Decimal::Decimal(Builtin::u128 value)  : 
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_flags{Builtin::i32(0)}, 
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_hi{Builtin::u32(0U)}, 
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	_lo{ADV_UFCS(Low64)(value.__ref())}
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(High64)(value.__ref()))> high = ADV_UFCS(High64)(value.__ref()); 
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((high <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DecimalOverflowException{});
		}
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_hi = Builtin::Cast<true, Builtin::u32>(high);
	}
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::i8() const 
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>((*this)))> i = Builtin::Cast<true, Builtin::i32>((*this)); 
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (i != ADV_UFCS(NarrowToInt8)(i.__ref())) {
			#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::Cast<true, Builtin::i8>(i);
	}
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::u8() const 
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>((*this)))> i = Builtin::Cast<true, Builtin::u32>((*this)); 
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((i <=> ADV_USPCS(MaxValue, Builtin::u8)()) > 0) {
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::Cast<true, Builtin::u8>(i);
	}
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::i16() const 
	{
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>((*this)))> i = Builtin::Cast<true, Builtin::i32>((*this)); 
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (i != ADV_UFCS(NarrowToInt16)(i.__ref())) {
			#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::Cast<true, Builtin::i16>(i);
	}
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::u16() const 
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>((*this)))> i = Builtin::Cast<true, Builtin::u32>((*this)); 
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((i <=> ADV_USPCS(MaxValue, Builtin::u16)()) > 0) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::Cast<true, Builtin::u16>(i);
	}
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::i32() const 
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(_hi)(trunc.__ref()) | Builtin::u32{ADV_UPCS(_lo)(trunc.__ref()) >> Builtin::i32(32)}) == Builtin::i32(0)) {
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)(ADV_UPCS(_lo)(trunc.__ref()).__ref()))> i = ADV_UFCS(NarrowToInt32)(ADV_UPCS(_lo)(trunc.__ref()).__ref()); 
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0) {
				#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((i <=> Builtin::i32(0)) >= 0) {
					#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return i;
				}
			} else {
				#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					i = -i;
					#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((i <=> Builtin::i32(0)) <= 0) {
						#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return i;
					}
				}
			}
		}
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::u32() const 
	{
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(_hi)(trunc.__ref()) | Builtin::u32{ADV_UPCS(_lo)(trunc.__ref()) >> Builtin::i32(32)}) == Builtin::i32(0)) {
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(ADV_UPCS(_lo)(trunc.__ref())))> i = Builtin::Cast<true, Builtin::u32>(ADV_UPCS(_lo)(trunc.__ref())); 
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0 || i == Builtin::i32(0)) {
				#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return i;
			}
		}
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::i64() const 
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ADV_UPCS(_hi)(trunc.__ref()) == Builtin::i32(0)) {
			#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(NarrowToInt64)(ADV_UPCS(_lo)(trunc.__ref()).__ref()))> i = ADV_UFCS(NarrowToInt64)(ADV_UPCS(_lo)(trunc.__ref()).__ref()); 
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0) {
				#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((i <=> Builtin::i32(0)) >= 0) {
					#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return i;
				}
			} else {
				#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					i = -i;
					#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((i <=> Builtin::i32(0)) <= 0) {
						#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return i;
					}
				}
			}
		}
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::u64() const 
	{
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ADV_UPCS(_hi)(trunc.__ref()) == Builtin::i32(0)) {
			#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(_lo)(trunc.__ref()))> i = ADV_UPCS(_lo)(trunc.__ref()); 
			#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0 || i == Builtin::i32(0)) {
				#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return i;
			}
		}
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::i128() const noexcept
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::i64{ADV_UPCS(_hi)(trunc.__ref())})> high = Builtin::i64{ADV_UPCS(_hi)(trunc.__ref())}; 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::i128{(ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0 ? high : -high, ADV_UPCS(_lo)(trunc.__ref())};
	}
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::u128() const 
	{
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)((*this).__ref()))> trunc = ADV_UPCS(Truncate)((*this).__ref()); 
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(_flags)(trunc.__ref()) <=> Builtin::i32(0)) >= 0 || trunc == Builtin::i32(0)) {
			#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::u128{ADV_UPCS(_hi)(trunc.__ref()), ADV_UPCS(_lo)(trunc.__ref())};
		}
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Throw(Builtin::IntegerOverflowException{});
		return {};
	}
#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::f16() const noexcept
	{
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f16>((Builtin::Cast<true, Builtin::f64>((*this))))); 
	}
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline Decimal::operator Builtin::f32() const noexcept
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f32>((Builtin::Cast<true, Builtin::f64>((*this))))); 
	}
#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto Decimal::getIsNegative() const  -> bool 
	{
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((_flags <=> Builtin::i32(0)) < 0); 
	}
	
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto Decimal::operator+() const noexcept -> const __self
	{
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto Decimal::operator-() const noexcept -> const __self
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__self{ADV_UPCS(_lo)((*this).__ref()), ADV_UPCS(_hi)((*this).__ref()), ADV_UPCS(_flags)((*this).__ref()) ^ __Decimal_Protected::SignMask}); 
	}
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator+(__self other) const  -> const __self
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(AddSub(other, Builtin::Boolean(false))); 
	}
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator+=(__self other)  -> __self&
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) + other); 
	}
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator++()  -> __self&
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) + Builtin::i32(1)); 
	}
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator++(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator++(); return copy; }
#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator-(__self other) const  -> const __self
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(AddSub(other, Builtin::Boolean(true))); 
	}
#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator-=(__self other)  -> __self&
	{
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) - other); 
	}
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator--()  -> __self&
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) - Builtin::i32(1)); 
	}
	#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator--(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator--(); return copy; }
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator*(__self other) const  -> const __self
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Mul(other)); 
	}
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator*=(__self other)  -> __self&
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) * other); 
	}
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator/(__self other) const  -> const __self
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Div(other)); 
	}
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator/=(__self other)  -> __self&
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) / other); 
	}
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator%(__self other) const  -> const __self
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Mod(other)); 
	}
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator%=(__self other)  -> __self&
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((*this) = (*this) % other); 
	}
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Decimal::operator==(__self other) const noexcept -> const bool
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(((*this) <=> other) == Builtin::i32(0)); 
	}
#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto Decimal::GetBits() const  -> const Builtin::InlineArray<Builtin::i32(4), Builtin::u32>
	{
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return {ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)((*this).__ref()).__ref()), Builtin::u32{ADV_UPCS(_lo)((*this).__ref()) >> Builtin::i32(32)}, ADV_UPCS(_hi)((*this).__ref()), ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)((*this).__ref()).__ref())}; 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getMinValue<__extension_Decimal_1602_decimal>::get() -> const __extension_Decimal_1602_decimal
	{
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal{Builtin::ParseInt128("-79228162514264337593543950335")}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getMaxValue<__extension_Decimal_1602_decimal>::get() -> const __extension_Decimal_1602_decimal
	{
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal{+Builtin::ParseInt128("79228162514264337593543950335")}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Midpoint(__extension_Decimal_1613_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1613_decimal rhs) noexcept -> const typename __extension_Decimal_1613_decimal
	{
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		constexpr Builtin::Auto<decltype(System::Decimal{Builtin::ParseInt128("39614081257132168796771975167")})> riskValue = System::Decimal{Builtin::ParseInt128("39614081257132168796771975167")};
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(Abs)(__this.__ref()) <=> riskValue) <= 0 && (ADV_UPCS(Abs)(rhs.__ref()) <=> riskValue) <= 0) {
			#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return (__this + rhs) / Builtin::i32(2);
		} else {
			#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return (__this / Builtin::i32(2)) + (rhs / Builtin::i32(2));
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto IsMultipleOf(__extension_Decimal_1613_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1613_decimal rhs) noexcept -> const bool
	{
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (rhs == Builtin::i32(0)) {
			#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return __this == Builtin::i32(0);
		}
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (rhs == Builtin::i32(-1)) {
			#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::Boolean(true);
		}
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return __this % rhs == Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getBits(__extension_Decimal_1613_decimal const& __this ) -> const Builtin::InlineArray<Builtin::i32(4), Builtin::u32>
	{
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetBits)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToBoolean(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt8(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt8(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt16(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt16(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u32
	{
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u64
	{
		#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToInt128(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUInt128(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u128
	{
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u128>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToIsize(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::isize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToUsize(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::usize
	{
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::usize>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToFloat32(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::f32
	{
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f32>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToFloat64(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::f64
	{
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::f64>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToByte(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u8>(__this)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToChar(__extension_Decimal_1694_decimal const& __this LIFETIMEBOUND)  -> const Builtin::char32
	{
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u16>(__this)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_mod(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Decimal_1716_decimal, __extension_Decimal_1716_decimal>
	{
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return std::make_tuple(__this / System::Decimal{rhs}, __this % System::Decimal{rhs}); ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "(self,self)", std::tuple<__extension_Decimal_1716_decimal, __extension_Decimal_1716_decimal>);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_not(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal
	{
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_not_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&
	{
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_not)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_lt(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal
	{
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_lt_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&
	{
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_lt)(__this, rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	template<class T> inline constexpr auto _operator_div_gt(__extension_Decimal_1716_decimal const& __this LIFETIMEBOUND, T rhs)  -> const typename __extension_Decimal_1716_decimal
	{
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)((__this / rhs).__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_div_gt_eq(__extension_Decimal_1716_decimal & __this , auto rhs)  -> typename __extension_Decimal_1716_decimal&
	{
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_div_gt)(__this, rhs)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_xor_xor(__extension_Decimal_1737_decimal const& __this LIFETIMEBOUND, Builtin::i32 exp)  -> const typename __extension_Decimal_1737_decimal
	{
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (exp == Builtin::i32(0)) [[unlikely]] {
			#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(One, __extension_Decimal_1737_decimal)();
		}
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((exp <=> Builtin::i32(0)) < 0) {
			#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(One, __extension_Decimal_1737_decimal)() / ADV_UFCS(_operator_xor_xor)(__this, (-exp));
		}
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(__this)> base = __this; 
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, __extension_Decimal_1737_decimal)())> result = ADV_USPCS(One, __extension_Decimal_1737_decimal)(); 
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (std::is_constant_evaluated()) {
			#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while ((exp <=> Builtin::i32(1)) > 0) 
			{
				#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
					#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result *= base;
				}
				#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
				#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				base *= base;
			}
			#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return result * base;
		} else {
			#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				for (;;) 
				{
					#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((exp & Builtin::i32(1)) == Builtin::i32(1)) {
						#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						result *= base;
						#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (exp == Builtin::i32(1)) {
							#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return result; ADV_CHECK_REF_STRUCT_LOCAL_RETURN("self", __extension_Decimal_1737_decimal);
						}
					}
					#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_bsl_eq)(exp, Builtin::i32(2));
					#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					base *= base;
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto _operator_xor_xor_eq(__extension_Decimal_1737_decimal & __this , Builtin::i32 exp)  -> typename __extension_Decimal_1737_decimal&
	{
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_xor_xor)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxMagnitude(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal
	{
		#line 1834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 1837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ax <=> ay) > 0) {
			#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return __this;
		}
		#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ax == ay) {
			#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Decimal_1778_decimal);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxMagnitudeNumber(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal
	{
		#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinMagnitude(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal
	{
		#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(__this.__ref()))> ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(rhs.__ref()))> ay = ADV_UPCS(Abs)(rhs.__ref()); 
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ax <=> ay) < 0) {
			#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return __this;
		}
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ax == ay) {
			#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return rhs; ADV_CHECK_REF_STRUCT_PARAM_RETURN(rhs, "self", __extension_Decimal_1778_decimal);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinMagnitudeNumber(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1778_decimal rhs) noexcept -> const typename __extension_Decimal_1778_decimal
	{
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt8(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i8
	{
		#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i8>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt8(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u8
	{
		#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u8>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt16(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i16
	{
		#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i16>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt16(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u16
	{
		#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u16>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt32(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i32
	{
		#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i32>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt32(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u32>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt64(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i64>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt64(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u64>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToInt128(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::i128>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUInt128(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::u128>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToIsize(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::isize
	{
		#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::isize>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto NarrowToUsize(__extension_Decimal_1778_decimal const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(UnsafeCast<Builtin::usize>(Builtin::Cast<true, Builtin::f64>(__this))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getOne<__extension_Decimal_1778_decimal>::get() -> const __extension_Decimal_1778_decimal
	{
		#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal{Builtin::i32(1)}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getZero<__extension_Decimal_1778_decimal>::get() -> const __extension_Decimal_1778_decimal
	{
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal{}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getRadix<__extension_Decimal_1778_decimal>::get() -> const Builtin::i32
	{
		#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(10)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAbs(__extension_Decimal_1778_decimal const& __this ) -> const __extension_Decimal_1778_decimal
	{
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(__this)> val = __this; 
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((val <=> Builtin::i32(0)) < 0) {
			#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			val = -val;
		}
		#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return val;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsCanonical(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)(__this.__ref()))> scale = ADV_UPCS(Scale)(__this.__ref()); 
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale == Builtin::i32(0)) {
			#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::Boolean(true);
		}
		#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(2U)))> high = ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(2U)); 
		#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype((Builtin::u64{ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(1U))} << Builtin::i32(32)) | ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(0U)))> low64 = (Builtin::u64{ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(1U))} << Builtin::i32(32)) | ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(0U)); 
		#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (high == Builtin::u32(0U)) {
			#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return !ADV_UFCS(IsMultipleOf)(low64.__ref(), Builtin::u32(10U));
		}
		#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return !ADV_UFCS(IsMultipleOf)(Builtin::u128{high, low64}.__ref(), Builtin::u32(10U));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsComplexNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsEvenInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(__this.__ref()))> truncated = ADV_UPCS(Truncate)(__this.__ref()); 
		#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return __this == truncated && ADV_UPCS(IsEvenInteger)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(__this.__ref()).__ref(), Builtin::u32(0U)).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsFinite(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsImaginaryNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this == ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNaN(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNegative(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToInt32)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(__this.__ref()).__ref(), Builtin::u32(3U)).__ref()) <=> Builtin::i32(0)) < 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNegativeInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsNormal(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::i32(0)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsOddInteger(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(__this.__ref()))> truncated = ADV_UPCS(Truncate)(__this.__ref()); 
		#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return __this == truncated && ADV_UPCS(IsOddInteger)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(__this.__ref()).__ref(), Builtin::u32(0U)).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsPositive(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToInt32)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(__this.__ref()).__ref(), Builtin::u32(3U)).__ref()) <=> Builtin::i32(0)) >= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsPositiveInfinity(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsRealNumber(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getIsSubnormal(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getIsZero(__extension_Decimal_1778_decimal const& __this ) -> const bool
	{
		#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getMinusOne<__extension_Decimal_1897_decimal>::get() -> const __extension_Decimal_1897_decimal
	{
		#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal{Builtin::i32(-1)}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CopySign(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal sign) noexcept -> const typename __extension_Decimal_1901_decimal
	{
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__extension_Decimal_1901_decimal{__this, ADV_UFCS(NarrowToInt32)(((ADV_UFCS(_operator_and_not)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(__this.__ref()).__ref(), Builtin::u32(3U)), __Decimal_Protected::SignMask)) | (ADV_UFCS(_operator_subscript)(ADV_UPCS(Bits)(sign.__ref()).__ref(), Builtin::u32(3U)) & __Decimal_Protected::SignMask)).__ref())}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Max(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal
	{
		#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) >= 0 ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MaxNumber(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal
	{
		#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Max)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Min(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal
	{
		#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((__this <=> rhs) < 0 ? __this : rhs); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto MinNumber(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal rhs) noexcept -> const typename __extension_Decimal_1901_decimal
	{
		#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Min)(__this.__ref(), rhs)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Clamp(__extension_Decimal_1901_decimal const& __this LIFETIMEBOUND, __extension_Decimal_1901_decimal min, __extension_Decimal_1901_decimal max)  -> const typename __extension_Decimal_1901_decimal
	{
		#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((min <=> max) > 0) {
			#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (__this <=> min) < 0 ? min : (__this <=> max) > 0 ? max : __this;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSign(__extension_Decimal_1901_decimal const& __this ) -> const Builtin::i32
	{
		#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(__this.__ref()))> bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(0U)) | ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(1U)) | ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(2U))) == Builtin::u32(0U) ? Builtin::i32(0) : (ADV_UFCS(NarrowToInt32)(ADV_UFCS(_operator_subscript)(bits.__ref(), Builtin::u32(3U)).__ref()) >> Builtin::i32(31)) | Builtin::i32(1);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getPi<__extension_Decimal_1925_decimal>::get() -> const __extension_Decimal_1925_decimal
	{
		#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal(Builtin::ParseUInt128("31415926535897932384626433833"), false, (uint8_t) 28)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getE<__extension_Decimal_1925_decimal>::get() -> const __extension_Decimal_1925_decimal
	{
		#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal(Builtin::ParseUInt128("27182818284590452353602874714"), false, (uint8_t) 28)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto __static_getTau<__extension_Decimal_1925_decimal>::get() -> const __extension_Decimal_1925_decimal
	{
		#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(System::Decimal(Builtin::ParseUInt128("62831853071795864769252867666"), false, (uint8_t) 28)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto TruncateToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Truncate)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto FloorToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Floor)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto CeilToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Ceil)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(Round)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt32(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt64(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i64
	{
		#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i64>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEvenToInt128(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND)  -> const Builtin::i128
	{
		#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::i128>(ADV_UPCS(RoundTiesEven)(__this.__ref()))); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Round(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, Builtin::u32 decimals)  -> const typename __extension_Decimal_1932_decimal
	{
		#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), decimals, ADV_USPCS(AwayFromZero, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto RoundTiesEven(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, Builtin::u32 decimals)  -> const typename __extension_Decimal_1932_decimal
	{
		#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), decimals, ADV_USPCS(ToEven, MidpointRounding)())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Round(__extension_Decimal_1932_decimal const& __this LIFETIMEBOUND, MidpointRounding mode)  -> const typename __extension_Decimal_1932_decimal
	{
		#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Round)(__this.__ref(), Builtin::u32(0U), mode)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getFractionalPart(__extension_Decimal_1932_decimal const& __this ) -> const __extension_Decimal_1932_decimal
	{
		#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this - ADV_UPCS(Truncate)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getExponentByteCount(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32
	{
		#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(Builtin::usize(sizeof(Builtin::i8)))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getExponentShortestBitLength(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32
	{
		#line 2017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_USPCS(BitWidth, Builtin::i8)() - ADV_UPCS(LeadingZeroCount)((Builtin::i8(95) - ADV_UFCS(NarrowToInt8)(ADV_UPCS(Scale)(__this.__ref()).__ref())).__ref());
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getSignificandBitLength(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32
	{
		#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(96U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr auto getSignificandByteCount(__extension_Decimal_1932_decimal const& __this ) -> const Builtin::u32
	{
		#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(12U)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto _operator_mul_mul_eq(__extension_Decimal_2024_decimal & __this , __extension_Decimal_2024_decimal exp)  -> typename __extension_Decimal_2024_decimal&
	{
		#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(__this = ADV_UFCS(_operator_mul_mul)(__this, exp)); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp2(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal
	{
		#line 2105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(System::Decimal{Builtin::i32(2)}, __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp10(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal
	{
		#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(System::Decimal{Builtin::i32(10)}, __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExpM1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal
	{
		#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp)(__this.__ref()) - Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp2M1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal
	{
		#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp2)(__this.__ref()) - Builtin::i32(1)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getExp10M1(__extension_Decimal_2072_decimal const& __this ) -> const __extension_Decimal_2072_decimal
	{
		#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(__this.__ref()) - Builtin::i32(1)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Log(__extension_Decimal_2116_decimal const& __this LIFETIMEBOUND, __extension_Decimal_2116_decimal base) noexcept -> const typename __extension_Decimal_2116_decimal
	{
		#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (base == Builtin::i32(1)) {
			#line 2170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (__this != Builtin::i32(1) && base == Builtin::i32(0)) {
			#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(base.__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLnP1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal
	{
		#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ln)((__this + Builtin::i32(1)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog2(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal
	{
		#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ln)(__this.__ref()) / ADV_UPCS(Ln)(System::Decimal{Builtin::i32(2)}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog2P1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal
	{
		#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log2)((__this + Builtin::i32(1)).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog10(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal
	{
		#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ln)(__this.__ref()) * System::Decimal(Builtin::ParseUInt128("04342944819032518276511289189"), false, (uint8_t) 28)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getLog10P1(__extension_Decimal_2116_decimal const& __this ) -> const __extension_Decimal_2116_decimal
	{
		#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log10)((__this + Builtin::i32(1)).__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCbrt(__extension_Decimal_2180_decimal const& __this ) -> const __extension_Decimal_2180_decimal
	{
		#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(__this, System::Decimal(Builtin::ParseUInt128("03333333333333333333333333333"), false, (uint8_t) 28))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToRadians(__extension_Decimal_2277_decimal const& __this LIFETIMEBOUND)  -> const typename __extension_Decimal_2277_decimal
	{
		#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((__this * ADV_USPCS(Pi, System::Decimal)()) / Builtin::i32(180)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto ToDegrees(__extension_Decimal_2277_decimal const& __this LIFETIMEBOUND)  -> const typename __extension_Decimal_2277_decimal
	{
		#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY((__this * Builtin::i32(180)) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCot(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(Tan)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSec(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(Cos)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCsc(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(Sin)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcot(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)((ADV_USPCS(One, __extension_Decimal_2277_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsec(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)((ADV_USPCS(One, __extension_Decimal_2277_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcsc(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)((ADV_USPCS(One, __extension_Decimal_2277_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinCos(__extension_Decimal_2277_decimal const& __this ) -> const std::tuple<__extension_Decimal_2277_decimal, __extension_Decimal_2277_decimal>
	{
		#line 2426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(Sin)(__this.__ref()), ADV_UPCS(Cos)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sin)((ADV_USPCS(Pi, System::Decimal)() * __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCosPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Cos)((ADV_USPCS(Pi, System::Decimal)() * __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSinCosPi(__extension_Decimal_2277_decimal const& __this ) -> const std::tuple<__extension_Decimal_2277_decimal, __extension_Decimal_2277_decimal>
	{
		#line 2432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(SinPi)(__this.__ref()), ADV_UPCS(CosPi)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getTanPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Tan)((ADV_USPCS(Pi, System::Decimal)() * __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCotPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(TanPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSecPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(CosPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCscPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2277_decimal)() / ADV_UPCS(SinPi)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsinPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcosPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAtanPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcotPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsecPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcscPi(__extension_Decimal_2277_decimal const& __this ) -> const __extension_Decimal_2277_decimal
	{
		#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(__this.__ref()) / ADV_USPCS(Pi, System::Decimal)()); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
} namespace __extensions { using namespace System;
#line 2471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcoth(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)((ADV_USPCS(One, __extension_Decimal_2460_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAcsch(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)((ADV_USPCS(One, __extension_Decimal_2460_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getAsech(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)((ADV_USPCS(One, __extension_Decimal_2460_decimal)() / __this).__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCoth(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2460_decimal)() / ADV_UPCS(Tanh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getCsch(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2460_decimal)() / ADV_UPCS(Sinh)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 2500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto getSech(__extension_Decimal_2460_decimal const& __this ) -> const __extension_Decimal_2460_decimal
	{
		#line 2500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, __extension_Decimal_2460_decimal)() / ADV_UPCS(Cosh)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	

}