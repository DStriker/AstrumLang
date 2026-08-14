#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdInstructionSet.h"
#include "System/IEquatable.h"
using namespace System;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __SimdVector_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, class Arch> class SimdVector;
template<class T, class Arch> class SimdMask;
} namespace __extensions {
template<class __TT> struct __static_Asinh;
template<class __TT> struct __static_getAsinh;
template<class __TT> struct __static_Pi;
template<class __TT> struct __static_getPi;
template<class __TT> struct __static_Acosh;
template<class __TT> struct __static_getAcosh;
template<class __TT> struct __static_Reciprocal;
template<class __TT> struct __static_getReciprocal;
template<class __TT> struct __static_Atanh;
template<class __TT> struct __static_getAtanh;
template<class __TT> struct __static_Acos;
template<class __TT> struct __static_getAcos;
template<class __TT> struct __static_PopCount;
template<class __TT> struct __static_getPopCount;
template<class __TT> struct __static_Atan;
template<class __TT> struct __static_getAtan;
template<class __TT> struct __static_Asin;
template<class __TT> struct __static_getAsin;
template<class __TT> struct __static_NegativeInfinity;
template<class __TT> struct __static_getNegativeInfinity;
template<class __TT> struct __static_PositiveInfinity;
template<class __TT> struct __static_getPositiveInfinity;
template<class __TT> struct __static_Zero;
template<class __TT> struct __static_getZero;
template<class __TT> struct __static_LeadingZeroCount;
template<class __TT> struct __static_getLeadingZeroCount;
template<class __TT> struct __static_TrailingZeroCount;
template<class __TT> struct __static_getTrailingZeroCount;
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, class Arch> class __Class_SimdVector;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdVector final : public Builtin::Struct {
		public: using __self = SimdVector<T, Arch>;
		public: using __class = __Class_SimdVector<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TMask = SimdMask<T, Arch>;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template Register<T>;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TNative = typename TRegister::TRegister;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TValue = T;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TArch = Arch;
		public: SimdVector() = default;
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getOne()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , One, getOne, __self);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getZero()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Zero, getZero, __self);
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAbs() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Abs, getAbs, __self);
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getMinElement() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, MinElement, getMinElement, T);
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getMaxElement() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, MaxElement, getMaxElement, T);
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSum() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sum, getSum, T);
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getProduct() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Product, getProduct, T);
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: auto getSign() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sign, getSign, __self);
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSqrt() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sqrt, getSqrt, __self);
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCbrt() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cbrt, getCbrt, __self);
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getReciprocalSqrt() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ReciprocalSqrt, getReciprocalSqrt, __self);
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getReciprocal() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Reciprocal, getReciprocal, __self);
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTruncate() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Truncate, getTruncate, __self);
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCeil() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Ceil, getCeil, __self);
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFloor() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Floor, getFloor, __self);
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getRound() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Round, getRound, __self);
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getRoundTiesEven() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, RoundTiesEven, getRoundTiesEven, __self);
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFractionalPart() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, FractionalPart, getFractionalPart, __self);
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getToRadians() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ToRadians, getToRadians, __self);
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getToDegrees() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ToDegrees, getToDegrees, __self);
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSin() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sin, getSin, __self);
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCos() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cos, getCos, __self);
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTan() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Tan, getTan, __self);
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCot() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cot, getCot, __self);
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSec() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sec, getSec, __self);
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCsc() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Csc, getCsc, __self);
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSinh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sinh, getSinh, __self);
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCosh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cosh, getCosh, __self);
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTanh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Tanh, getTanh, __self);
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCoth() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Coth, getCoth, __self);
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSech() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sech, getSech, __self);
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCsch() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Csch, getCsch, __self);
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsin() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asin, getAsin, __self);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcos() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acos, getAcos, __self);
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAtan() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Atan, getAtan, __self);
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcot() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acot, getAcot, __self);
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsec() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asec, getAsec, __self);
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcsc() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acsc, getAcsc, __self);
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsinh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asinh, getAsinh, __self);
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcosh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acosh, getAcosh, __self);
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAtanh() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Atanh, getAtanh, __self);
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcoth() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acoth, getAcoth, __self);
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsech() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asech, getAsech, __self);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcsch() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acsch, getAcsch, __self);
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLn() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Ln, getLn, __self);
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLnP1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, LnP1, getLnP1, __self);
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog2() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log2, getLog2, __self);
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog2P1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log2P1, getLog2P1, __self);
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog10() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log10, getLog10, __self);
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog10P1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log10P1, getLog10P1, __self);
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp, getExp, __self);
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExpM1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ExpM1, getExpM1, __self);
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp2() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp2, getExp2, __self);
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp2M1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp2M1, getExp2M1, __self);
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp10() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp10, getExp10, __self);
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp10M1() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp10M1, getExp10M1, __self);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  SimdVector(TNative reg) noexcept;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  operator TNative() const noexcept;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto ToNative() const  -> const TNative;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class U> inline static auto Create(U val)  -> const __self;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(T val0, T val1, Ts... tail)  -> const __self;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromMask(const TMask& b)  -> const __self;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self;
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const T& source)  -> const __self;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto Store(Builtin::Unsafe::__RawPtr<T> destination) const  -> decltype(auto);
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto StoreUnsafe(Builtin::MutableRef<T> __destination__) const  -> void;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class TOut> inline auto ConvertTo() const  -> const SimdVector<TOut, Arch>;
		public: inline const T getAt(Builtin::usize index);
		inline const T getAt(Builtin::usize index) const;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_subscript(Builtin::usize index)  -> const T;
		public: inline auto _operator_subscript(Builtin::usize index) const  -> const T;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<int32_t... Indexes> inline auto Swizzle() const  -> const __self;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(const __self& other) const noexcept -> const bool;
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const __self& other) const noexcept -> const bool;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(T other) const noexcept -> const bool;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(T other) const noexcept -> const bool;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAll(const __self& other) const noexcept -> const bool;
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAny(const __self& other) const noexcept -> const bool;
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(const __self& other) const noexcept -> const bool;
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(const __self& other) const noexcept -> const bool;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(T other) const noexcept -> const bool;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(T other) const noexcept -> const bool;
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(const __self& other) const noexcept -> const bool;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(const __self& other) const noexcept -> const bool;
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(T other) const noexcept -> const bool;
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(T other) const noexcept -> const bool;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(const __self& other) const noexcept -> const bool;
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(const __self& other) const noexcept -> const bool;
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(T other) const noexcept -> const bool;
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(T other) const noexcept -> const bool;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(const __self& other) const noexcept -> const bool;
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(const __self& other) const noexcept -> const bool;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(T other) const noexcept -> const bool;
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(T other) const noexcept -> const bool;
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+() const noexcept -> const __self;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-() const noexcept -> const __self;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const __self;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(T other)  LIFETIMEBOUND -> __self&;
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(T other)  LIFETIMEBOUND -> __self&;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(T other)  LIFETIMEBOUND -> __self&;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(T other)  LIFETIMEBOUND -> __self&;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(T other)  LIFETIMEBOUND -> __self&;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(T other)  LIFETIMEBOUND -> __self&;
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(T other)  LIFETIMEBOUND -> __self&;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(T other)  LIFETIMEBOUND -> __self&;
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(Builtin::i32 shift)  LIFETIMEBOUND -> __self&;
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(Builtin::i32 shift)  LIFETIMEBOUND -> __self&;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++(int)  -> SimdVector;
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--(int)  -> SimdVector;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(const __self& other) const  -> const __self;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(T other) const  -> const __self;
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(const __self& other) const  -> const __self;
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(T other) const  -> const __self;
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(const __self& other) const  -> const __self;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(T other) const  -> const __self;
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(const __self& other) const  -> const __self;
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(T other) const  -> const __self;
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(const __self& other) const  -> const __self;
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(T other) const  -> const __self;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const __self& other) const  -> const __self;
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(T other) const  -> const __self;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const __self& other) const  -> const __self;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(T other) const  -> const __self;
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const __self& other) const  -> const __self;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(T other) const  -> const __self;
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(const __self& other) const  -> const __self;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(Builtin::i32 shift) const  -> const __self;
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(const __self& other) const  -> const __self;
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(Builtin::i32 shift) const  -> const __self;
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>;
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_ne(const __self& other) const noexcept -> const bool;
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_ne(T other) const noexcept -> const bool;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(const __self& other) const noexcept -> const bool;
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(T other) const noexcept -> const bool;
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(const __self& other) const noexcept -> const bool;
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(T other) const noexcept -> const bool;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(const __self& other) const noexcept -> const bool;
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(T other) const noexcept -> const bool;
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(const __self& other) const noexcept -> const bool;
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(T other) const noexcept -> const bool;
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(const __self& other) const noexcept -> const bool;
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(T other) const noexcept -> const bool;
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(const __self& other) const noexcept -> const bool;
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(T other) const noexcept -> const bool;
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(const __self& other) const noexcept -> const bool;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(T other) const noexcept -> const bool;
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(const __self& other) const noexcept -> const bool;
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(T other) const noexcept -> const bool;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(const __self& other) const noexcept -> const bool;
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(T other) const noexcept -> const bool;
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(const __self& other) const noexcept -> const bool;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(T other) const noexcept -> const bool;
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(const __self& other) const noexcept -> const bool;
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(T other) const noexcept -> const bool;
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod() const noexcept -> const __self;
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne() const noexcept -> const __self;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst() const noexcept -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_eq(Builtin::i32 exp)  LIFETIMEBOUND -> __self&;
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_mod_eq(Builtin::i32 exp)  LIFETIMEBOUND -> __self&;
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_ne_eq(Builtin::i32 exp)  LIFETIMEBOUND -> __self&;
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(T other)  LIFETIMEBOUND -> __self&;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt_eq(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt_eq(Builtin::i32 shift)  LIFETIMEBOUND -> __self&;
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_mod()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_mod_postfix()  -> decltype(auto);
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_or()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_or_postfix()  -> decltype(auto);
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_ne()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_ne_postfix()  -> decltype(auto);
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_add_mod_qst()  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_mod()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_mod_postfix()  -> decltype(auto);
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_or()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_or_postfix()  -> decltype(auto);
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_ne()  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_ne_postfix()  -> decltype(auto);
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_sub_mod_qst()  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod(const __self& other) const  -> const __self;
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod(T other) const  -> const __self;
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or(const __self& other) const  -> const __self;
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or(T other) const  -> const __self;
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne(const __self& other) const  -> const __self;
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne(T other) const  -> const __self;
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod(const __self& other) const  -> const __self;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod(T other) const  -> const __self;
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or(const __self& other) const  -> const __self;
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or(T other) const  -> const __self;
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne(const __self& other) const  -> const __self;
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne(T other) const  -> const __self;
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod(const __self& other) const  -> const __self;
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod(T other) const  -> const __self;
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne(const __self& other) const  -> const __self;
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne(T other) const  -> const __self;
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod(const __self& other) const  -> const __self;
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod(T other) const  -> const __self;
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne(const __self& other) const  -> const __self;
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne(T other) const  -> const __self;
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod(const __self& other) const  -> const __self;
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod(T other) const  -> const __self;
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne(const __self& other) const  -> const __self;
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne(T other) const  -> const __self;
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>;
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul(const __self& other) const  -> const __self;
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul(T other) const  -> const __self;
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor(Builtin::i32 exp) const  -> const __self;
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_mod(Builtin::i32 exp) const  -> const __self;
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_ne(Builtin::i32 exp) const  -> const __self;
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(const __self& other) const  -> const __self;
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(T other) const  -> const __self;
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt(const __self& other) const  -> const __self;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt(Builtin::i32 shift) const  -> const __self;
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(const __self& y, const __self& z) const  -> const __self;
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(const __self& y, T z) const  -> const __self;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(T y, const __self& z) const  -> const __self;
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(T y, T z) const  -> const __self;
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(const __self& y, const __self& z) const  -> const __self;
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(const __self& y, T z) const  -> const __self;
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(T y, const __self& z) const  -> const __self;
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(T y, T z) const  -> const __self;
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(const __self& y, const __self& z) const  -> const __self;
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(const __self& y, T z) const  -> const __self;
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(T y, const __self& z) const  -> const __self;
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(T y, T z) const  -> const __self;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(const __self& y, const __self& z) const  -> const __self;
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(const __self& y, T z) const  -> const __self;
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(T y, const __self& z) const  -> const __self;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(T y, T z) const  -> const __self;
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Min(const __self& other) const  -> const __self;
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Max(const __self& other) const  -> const __self;
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Clamp(const __self& min, const __self& max) const  -> const __self;
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Lerp(const __self& end, const __self& amount) const  -> const __self;
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto ConditionalSelect(const TMask& condition, const __self& trueBranch, const __self& falseBranch)  -> const __self;
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: ASTRUMSTD_API auto CopySign(const __self& other) const  -> const __self;
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Midpoint(const __self& other) const  -> const __self;
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Hypot(const __self& other) const  -> const __self;
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Root(const __self& other) const  -> const __self;
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Root(Builtin::i32 exp) const  -> const __self;
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Atan2(const __self& denominator) const  -> const __self;
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Log(const __self& base) const  -> const __self;
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto All(T val) const  -> const bool;
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Any(T val) const  -> const bool;
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto None(T val) const  -> const bool;
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Count(T val) const  -> const Builtin::usize;
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto IndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>;
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LastIndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: TRegister _reg; ADV_CHECK_REF_STRUCT("TRegister", TRegister);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr Builtin::u32 Length = Builtin::u32{ADV_UFCS_NONLOCAL(_operator_bsl)(Builtin::usize(sizeof (TNative)), Builtin::usize(sizeof (T)))};
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(SimdInstructionSet::template IsSimdType<T>, "T must be a SIMD type");
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::TypeIs<Arch, SimdInstructionSet>(), "Arch must be a SIMD instruction set");
		template <size_t I, class T, class Arch> friend auto& get(SimdVector<T, Arch>&);
		template <size_t I, class T, class Arch> friend const auto& get(const SimdVector<T, Arch>&);
		
	};
	
		} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> using __extension_SimdVector_630_SimdVector = SimdVector<T, Arch>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt8(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i8, Arch>;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt16(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i16, Arch>;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i32, Arch>;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i64, Arch>;
	#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt8(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u8, Arch>;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt16(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u16, Arch>;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u32, Arch>;
	#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u64, Arch>;
	#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::f32, Arch>;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::f64, Arch>;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNaN(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsFinite(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositiveInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegativeInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositive(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegative(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsZero(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsEvenInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsOddInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getSinCos(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const std::tuple<__extension_SimdVector_630_SimdVector<T, Arch>, __extension_SimdVector_630_SimdVector<T, Arch>>;
	} namespace System::Runtime::Intrinsics{
using __extensions::getAsInt8;
using __extensions::getAsInt16;
using __extensions::getAsInt32;
using __extensions::getAsInt64;
using __extensions::getAsUInt8;
using __extensions::getAsUInt16;
using __extensions::getAsUInt32;
using __extensions::getAsUInt64;
using __extensions::getAsFloat32;
using __extensions::getAsFloat64;
using __extensions::getIsNaN;
using __extensions::getIsInfinity;
using __extensions::getIsFinite;
using __extensions::getIsPositiveInfinity;
using __extensions::getIsNegativeInfinity;
using __extensions::getIsPositive;
using __extensions::getIsNegative;
using __extensions::getIsZero;
using __extensions::getIsInteger;
using __extensions::getIsEvenInteger;
using __extensions::getIsOddInteger;
using __extensions::getSinCos;

	template<class T, class Arch> class __Class_SimdMask;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdMask final : public Builtin::Struct {
		public: using __self = SimdMask<T, Arch>;
		public: using __class = __Class_SimdMask<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TVector = SimdVector<T, Arch>;
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template BoolRegister<T>;
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TNative = typename TRegister::TRegister;
		public: SimdMask() = default;
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getScalarMask() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ScalarMask, getScalarMask, Builtin::u64);
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getTrue()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , True, getTrue, __self);
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getFalse()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , False, getFalse, __self);
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAll() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, All, getAll, bool);
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAny() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Any, getAny, bool);
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getNone() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, None, getNone, bool);
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCount() const  -> Builtin::usize;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Count, getCount, Builtin::usize);
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFirstSet() const  -> Builtin::Nullable<Builtin::usize>;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, FirstSet, getFirstSet, Builtin::Nullable<Builtin::usize>);
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLastSet() const  -> Builtin::Nullable<Builtin::usize>;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, LastSet, getLastSet, Builtin::Nullable<Builtin::usize>);
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  SimdMask(TNative reg) noexcept;
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  operator TNative() const noexcept;
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto ToNative() const  -> const TNative;
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: template<class U, class... V, size_t I, size_t... Is> inline static auto MakeRegister(typename Builtin::template IndexSequence<I, Is...> __var_681_68, U u, V... v) noexcept -> const TNative;
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: template<class... V> inline static auto MakeRegister(typename Builtin::template IndexSequence<> __var_685_41, V... v) noexcept -> const TNative;
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto Create(bool val)  -> const __self;
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(bool val0, bool val1, Ts... tail)  -> const __self;
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromScalarMask(Builtin::u64 mask)  -> const __self;
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self;
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const bool& source)  -> const __self;
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto Store(Builtin::Unsafe::__RawPtr<bool> destination) const  -> decltype(auto);
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto StoreUnsafe(Builtin::MutableRef<bool> __destination__) const  -> void;
		public: inline const T getAt(Builtin::usize index);
		inline const T getAt(Builtin::usize index) const;
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_subscript(Builtin::usize index)  -> const T;
		public: inline auto _operator_subscript(Builtin::usize index) const  -> const T;
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(const __self& other) const noexcept -> const bool;
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const __self& other) const noexcept -> const bool;
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_xor(const __self& other) const noexcept -> const __self;
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_xor(const __self& other) const noexcept -> const __self;
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const __self;
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const __self& other)  LIFETIMEBOUND -> __self&;
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const __self& other) const  -> const __self;
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const __self& other) const  -> const __self;
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const __self& other) const  -> const __self;
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: TRegister _reg; ADV_CHECK_REF_STRUCT("TRegister", TRegister);
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr Builtin::u32 Length = Builtin::u32{ADV_UFCS_NONLOCAL(_operator_bsl)(Builtin::usize(sizeof (TVector)), Builtin::usize(sizeof (T)))};
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto unusedBits = Builtin::usize(64U) - Length;
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto lowMask = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS_NONLOCAL(_operator_not)(Builtin::u64{Builtin::i32(0)});
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto stop = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL);
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(SimdInstructionSet::template IsSimdType<T>, "T must be a SIMD type");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::TypeIs<Arch, SimdInstructionSet>(), "Arch must be a SIMD instruction set");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert((Length <=> Builtin::i32(0)) > 0, "Invalid vector length");
		template <size_t I, class T, class Arch> friend auto& get(SimdMask<T, Arch>&);
		template <size_t I, class T, class Arch> friend const auto& get(const SimdMask<T, Arch>&);
		
	};
	
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class __Class_SimdVector final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using __underlying = SimdVector<T, Arch>; using __self = __underlying;
		__self __value;
		__Class_SimdVector(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TMask = SimdMask<T, Arch>;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template Register<T>;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TNative = typename TRegister::TRegister;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TValue = T;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TArch = Arch;
		auto getAbs() const -> __self { return __value.getAbs(); }
		auto getMinElement() const -> T { return __value.getMinElement(); }
		auto getMaxElement() const -> T { return __value.getMaxElement(); }
		auto getSum() const -> T { return __value.getSum(); }
		auto getProduct() const -> T { return __value.getProduct(); }
		auto getSign() const -> __self { return __value.getSign(); }
		auto getSqrt() const -> __self { return __value.getSqrt(); }
		auto getCbrt() const -> __self { return __value.getCbrt(); }
		auto getReciprocalSqrt() const -> __self { return __value.getReciprocalSqrt(); }
		auto getReciprocal() const -> __self { return __value.getReciprocal(); }
		auto getTruncate() const -> __self { return __value.getTruncate(); }
		auto getCeil() const -> __self { return __value.getCeil(); }
		auto getFloor() const -> __self { return __value.getFloor(); }
		auto getRound() const -> __self { return __value.getRound(); }
		auto getRoundTiesEven() const -> __self { return __value.getRoundTiesEven(); }
		auto getFractionalPart() const -> __self { return __value.getFractionalPart(); }
		auto getToRadians() const -> __self { return __value.getToRadians(); }
		auto getToDegrees() const -> __self { return __value.getToDegrees(); }
		auto getSin() const -> __self { return __value.getSin(); }
		auto getCos() const -> __self { return __value.getCos(); }
		auto getTan() const -> __self { return __value.getTan(); }
		auto getCot() const -> __self { return __value.getCot(); }
		auto getSec() const -> __self { return __value.getSec(); }
		auto getCsc() const -> __self { return __value.getCsc(); }
		auto getSinh() const -> __self { return __value.getSinh(); }
		auto getCosh() const -> __self { return __value.getCosh(); }
		auto getTanh() const -> __self { return __value.getTanh(); }
		auto getCoth() const -> __self { return __value.getCoth(); }
		auto getSech() const -> __self { return __value.getSech(); }
		auto getCsch() const -> __self { return __value.getCsch(); }
		auto getAsin() const -> __self { return __value.getAsin(); }
		auto getAcos() const -> __self { return __value.getAcos(); }
		auto getAtan() const -> __self { return __value.getAtan(); }
		auto getAcot() const -> __self { return __value.getAcot(); }
		auto getAsec() const -> __self { return __value.getAsec(); }
		auto getAcsc() const -> __self { return __value.getAcsc(); }
		auto getAsinh() const -> __self { return __value.getAsinh(); }
		auto getAcosh() const -> __self { return __value.getAcosh(); }
		auto getAtanh() const -> __self { return __value.getAtanh(); }
		auto getAcoth() const -> __self { return __value.getAcoth(); }
		auto getAsech() const -> __self { return __value.getAsech(); }
		auto getAcsch() const -> __self { return __value.getAcsch(); }
		auto getLn() const -> __self { return __value.getLn(); }
		auto getLnP1() const -> __self { return __value.getLnP1(); }
		auto getLog2() const -> __self { return __value.getLog2(); }
		auto getLog2P1() const -> __self { return __value.getLog2P1(); }
		auto getLog10() const -> __self { return __value.getLog10(); }
		auto getLog10P1() const -> __self { return __value.getLog10P1(); }
		auto getExp() const -> __self { return __value.getExp(); }
		auto getExpM1() const -> __self { return __value.getExpM1(); }
		auto getExp2() const -> __self { return __value.getExp2(); }
		auto getExp2M1() const -> __self { return __value.getExp2M1(); }
		auto getExp10() const -> __self { return __value.getExp10(); }
		auto getExp10M1() const -> __self { return __value.getExp10M1(); }
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto FromMask(const TMask& b) -> __self const { ADV_EXPRESSION_BODY(__self::FromMask(b)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const T> source) -> __self const { ADV_EXPRESSION_BODY(__self::Load(source)); }
		static auto LoadUnsafe(const T& source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadUnsafe(source)); }
		auto StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreAligned(destination)); }
		auto StoreUnsafe(Builtin::MutableRef<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto operator==(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto EqualsAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAll(other)); }
		auto EqualsAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAny(other)); }
		auto LessThanAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanOrEqualAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto LessThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto GreaterThanAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanOrEqualAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto GreaterThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto operator+() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator+()); }
		auto operator-() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator-()); }
		auto _operator_not() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator+=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator+=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator-=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator-=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator*=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator*=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator/=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator/=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator%=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator%=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator&=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator&=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator|=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator|=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator^=(T other) -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator>>=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator>>=(other)); }
		auto operator<<=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator<<=(other)); }
		auto operator>>=(Builtin::i32 shift) -> __self & { ADV_EXPRESSION_BODY(__value.operator>>=(shift)); }
		auto operator<<=(Builtin::i32 shift) -> __self & { ADV_EXPRESSION_BODY(__value.operator<<=(shift)); }
		auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		auto operator--() -> __self & { ADV_EXPRESSION_BODY(__value.operator--()); }
		auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator+(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator-(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator-(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator*(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator*(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator/(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator/(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator%(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator%(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator&(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator&(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator|(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator|(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator^(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator>>(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator>>(other)); }
		auto operator>>(Builtin::i32 shift) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator>>(shift)); }
		auto operator<<(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator<<(other)); }
		auto operator<<(Builtin::i32 shift) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator<<(shift)); }
		auto _operator_eq_eq_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_lt_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_xor(other)); }
		auto _operator_lt_eq_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_xor(other)); }
		auto _operator_gt_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_xor(other)); }
		auto _operator_gt_eq_xor(const __self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_xor(other)); }
		auto _operator_eq_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_lt_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_xor(other)); }
		auto _operator_lt_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_xor(other)); }
		auto _operator_gt_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_xor(other)); }
		auto _operator_gt_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_xor(other)); }
		auto _operator_eq_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_eq_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_ne_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_ne_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_eq_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_eq_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_ne_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_ne_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_lt_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_lt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_gt_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_gt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_lt_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_lt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_gt_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto _operator_gt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto _operator_sub_mod() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod()); }
		auto _operator_sub_ne() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne()); }
		auto _operator_sub_mod_qst() const noexcept -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst()); }
		auto _operator_add_mod_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_mod_eq(other)); }
		auto _operator_add_mod_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_mod_eq(other)); }
		auto _operator_add_or_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_or_eq(other)); }
		auto _operator_add_or_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_or_eq(other)); }
		auto _operator_add_ne_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_ne_eq(other)); }
		auto _operator_add_ne_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_ne_eq(other)); }
		auto _operator_sub_mod_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_mod_eq(other)); }
		auto _operator_sub_mod_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_mod_eq(other)); }
		auto _operator_sub_or_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_or_eq(other)); }
		auto _operator_sub_or_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_or_eq(other)); }
		auto _operator_sub_ne_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_ne_eq(other)); }
		auto _operator_sub_ne_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_ne_eq(other)); }
		auto _operator_mul_mod_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_mod_eq(other)); }
		auto _operator_mul_mod_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_mod_eq(other)); }
		auto _operator_mul_ne_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_ne_eq(other)); }
		auto _operator_mul_ne_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_ne_eq(other)); }
		auto _operator_bsl_mod_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_eq(other)); }
		auto _operator_bsl_mod_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_eq(other)); }
		auto _operator_bsl_ne_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_bsl_ne_eq(other)); }
		auto _operator_bsl_ne_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_bsl_ne_eq(other)); }
		auto _operator_xor_xor_eq(Builtin::i32 exp) -> __self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_eq(exp)); }
		auto _operator_xor_xor_mod_eq(Builtin::i32 exp) -> __self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_mod_eq(exp)); }
		auto _operator_xor_xor_ne_eq(Builtin::i32 exp) -> __self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_ne_eq(exp)); }
		auto _operator_mul_mul_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_mul_eq(other)); }
		auto _operator_mul_mul_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mul_mul_eq(other)); }
		auto _operator_mod_mod_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mod_mod_eq(other)); }
		auto _operator_mod_mod_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mod_mod_eq(other)); }
		auto _operator_mod_ne_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mod_ne_eq(other)); }
		auto _operator_mod_ne_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_mod_ne_eq(other)); }
		auto _operator_and_not_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto _operator_and_not_eq(T other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto _operator_gt_gt_gt_eq(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt_eq(other)); }
		auto _operator_gt_gt_gt_eq(Builtin::i32 shift) -> __self & { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt_eq(shift)); }
		auto _operator_add_add_mod() -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_add_mod()); }
		auto _operator_add_add_or() -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_add_or()); }
		auto _operator_add_add_ne() -> __self & { ADV_EXPRESSION_BODY(__value._operator_add_add_ne()); }
		auto _operator_add_add_mod_qst() -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_add_mod_qst()); }
		auto _operator_sub_sub_mod() -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_mod()); }
		auto _operator_sub_sub_or() -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_or()); }
		auto _operator_sub_sub_ne() -> __self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_ne()); }
		auto _operator_sub_sub_mod_qst() -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_sub_mod_qst()); }
		auto _operator_add_mod(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_mod(other)); }
		auto _operator_add_mod(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_mod(other)); }
		auto _operator_add_or(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_or(other)); }
		auto _operator_add_or(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_or(other)); }
		auto _operator_add_ne(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_ne(other)); }
		auto _operator_add_ne(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_add_ne(other)); }
		auto _operator_add_mod_qst(const __self& other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_mod_qst(other)); }
		auto _operator_add_mod_qst(T other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_mod_qst(other)); }
		auto _operator_sub_mod(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod(other)); }
		auto _operator_sub_mod(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod(other)); }
		auto _operator_sub_or(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_or(other)); }
		auto _operator_sub_or(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_or(other)); }
		auto _operator_sub_ne(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne(other)); }
		auto _operator_sub_ne(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne(other)); }
		auto _operator_sub_mod_qst(const __self& other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst(other)); }
		auto _operator_sub_mod_qst(T other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst(other)); }
		auto _operator_mul_mod(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_mod(other)); }
		auto _operator_mul_mod(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_mod(other)); }
		auto _operator_mul_ne(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_ne(other)); }
		auto _operator_mul_ne(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_ne(other)); }
		auto _operator_mul_mod_qst(const __self& other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mul_mod_qst(other)); }
		auto _operator_mul_mod_qst(T other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mul_mod_qst(other)); }
		auto _operator_bsl_mod(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod(other)); }
		auto _operator_bsl_mod(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod(other)); }
		auto _operator_bsl_ne(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_bsl_ne(other)); }
		auto _operator_bsl_ne(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_bsl_ne(other)); }
		auto _operator_bsl_mod_qst(const __self& other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_qst(other)); }
		auto _operator_bsl_mod_qst(T other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_qst(other)); }
		auto _operator_mod_mod(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mod_mod(other)); }
		auto _operator_mod_mod(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mod_mod(other)); }
		auto _operator_mod_ne(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mod_ne(other)); }
		auto _operator_mod_ne(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mod_ne(other)); }
		auto _operator_mod_mod_qst(const __self& other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mod_mod_qst(other)); }
		auto _operator_mod_mod_qst(T other) const  -> std::tuple<__self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mod_mod_qst(other)); }
		auto _operator_mul_mul(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_mul(other)); }
		auto _operator_mul_mul(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_mul_mul(other)); }
		auto _operator_xor_xor(Builtin::i32 exp) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor(exp)); }
		auto _operator_xor_xor_mod(Builtin::i32 exp) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor_mod(exp)); }
		auto _operator_xor_xor_ne(Builtin::i32 exp) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor_ne(exp)); }
		auto _operator_and_not(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto _operator_and_not(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto _operator_gt_gt_gt(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt(other)); }
		auto _operator_gt_gt_gt(Builtin::i32 shift) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt(shift)); }
		auto FusedMultiplyAdd(const __self& y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(const __self& y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(T y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(T y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(const __self& y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(const __self& y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(T y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(T y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedMultiplySub(const __self& y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(const __self& y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(T y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(T y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(const __self& y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(const __self& y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(T y, const __self& z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(T y, T z) const  -> __self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto Min(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.Min(other)); }
		auto Max(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.Max(other)); }
		auto Clamp(const __self& min, const __self& max) const  -> __self const { ADV_EXPRESSION_BODY(__value.Clamp(min, max)); }
		auto Lerp(const __self& end, const __self& amount) const  -> __self const { ADV_EXPRESSION_BODY(__value.Lerp(end, amount)); }
		static auto ConditionalSelect(const TMask& condition, const __self& trueBranch, const __self& falseBranch) -> __self const { ADV_EXPRESSION_BODY(__self::ConditionalSelect(condition, trueBranch, falseBranch)); }
		auto CopySign(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.CopySign(other)); }
		auto Midpoint(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.Midpoint(other)); }
		auto Hypot(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.Hypot(other)); }
		auto Root(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.Root(other)); }
		auto Root(Builtin::i32 exp) const  -> __self const { ADV_EXPRESSION_BODY(__value.Root(exp)); }
		auto Atan2(const __self& denominator) const  -> __self const { ADV_EXPRESSION_BODY(__value.Atan2(denominator)); }
		auto Log(const __self& base) const  -> __self const { ADV_EXPRESSION_BODY(__value.Log(base)); }
		auto All(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.All(val)); }
		auto Any(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.Any(val)); }
		auto None(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.None(val)); }
		auto Count(T val) const  -> Builtin::usize const { ADV_EXPRESSION_BODY(__value.Count(val)); }
		auto IndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.IndexOf(val)); }
		auto LastIndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.LastIndexOf(val)); }
		
	};
	

	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class __Class_SimdMask final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using __underlying = SimdMask<T, Arch>; using __self = __underlying;
		__self __value;
		__Class_SimdMask(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TVector = SimdVector<T, Arch>;
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template BoolRegister<T>;
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using TNative = typename TRegister::TRegister;
		auto getScalarMask() const -> Builtin::u64 { return __value.getScalarMask(); }
		auto getAll() const -> bool { return __value.getAll(); }
		auto getAny() const -> bool { return __value.getAny(); }
		auto getNone() const -> bool { return __value.getNone(); }
		auto getCount() const -> Builtin::usize { return __value.getCount(); }
		auto getFirstSet() const -> Builtin::Nullable<Builtin::usize> { return __value.getFirstSet(); }
		auto getLastSet() const -> Builtin::Nullable<Builtin::usize> { return __value.getLastSet(); }
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto Create(bool val) -> __self const { ADV_EXPRESSION_BODY(__self::Create(val)); }
		static auto FromScalarMask(Builtin::u64 mask) -> __self const { ADV_EXPRESSION_BODY(__self::FromScalarMask(mask)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const bool> source) -> __self const { ADV_EXPRESSION_BODY(__self::Load(source)); }
		static auto LoadUnsafe(const bool& source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadUnsafe(source)); }
		auto StoreUnsafe(Builtin::MutableRef<bool> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto _operator_eq_eq_xor(const __self& other) const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(const __self& other) const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_not() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator&=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator|=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const __self& other) -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator&(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator|(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		
	};
	
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdVector<T, Arch>::__Property_One<> SimdVector<T, Arch>::One;
#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdVector<T, Arch>::__Property_Zero<> SimdVector<T, Arch>::Zero;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdMask<T, Arch>::__Property_True<> SimdMask<T, Arch>::True;
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdMask<T, Arch>::__Property_False<> SimdMask<T, Arch>::False;
//###############################################################################
//# Function definitions
//###############################################################################

#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::SimdVector(typename SimdVector<T, Arch>::TNative reg) noexcept
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_UPCS(data)(_reg.__ref()) = reg;
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::operator typename SimdVector<T, Arch>::TNative() const noexcept
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::ToNative() const  -> const typename SimdVector<T, Arch>::TNative
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U> inline auto SimdVector<T, Arch>::Create(U val)  -> const __self
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Broadcast<T, Arch>(Builtin::Cast<true, T>(val))); 
	}
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdVector<T, Arch>::Create(T val0, T val1, Ts... tail)  -> const __self
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template CreateFrom<Arch>(val0, val1, T{tail}...);
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FromMask(const typename SimdVector<T, Arch>::TMask& b)  -> const __self
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template FromMask<T, Arch>(b)); 
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard40{};
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.__ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template LoadAligned<T, Arch>(source);
	}
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Load<T, Arch>(source)); 
	}
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadUnsafe(const T& source)  -> const __self
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard53{};
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return Arch::template Load<T, Arch>((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard60{};
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(destination.__ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		Arch::StoreAligned((*this), destination);
	}
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Store(Builtin::Unsafe::__RawPtr<T> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Store((*this), destination)); 
	}
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreUnsafe(Builtin::MutableRef<T> __destination__) const  -> void
	{
		T& destination = __destination__;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard73{};
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Arch::Store((*this), (__RawPtr(std::addressof(destination))));
		}
	}
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class TOut> inline auto SimdVector<T, Arch>::ConvertTo() const  -> const SimdVector<TOut, Arch>
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Convert<TOut>((*this))); 
	}
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_subscript(Builtin::usize index)  -> const T
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::GetElement((*this), index);
	}
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_subscript(Builtin::usize index)  const  -> const T
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::GetElement((*this), index);
	}
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAt(Builtin::usize index)  -> const T { return _operator_subscript(index); }
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAt(Builtin::usize index) const  -> const T { return _operator_subscript(index); }
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<int32_t... Indexes> inline auto SimdVector<T, Arch>::Swizzle() const  -> const __self
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Swizzle<Indexes...>((*this))); 
	}
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(const __self& other) const noexcept -> const bool
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), other).__ref())); 
	}
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(const __self& other) const noexcept -> const bool
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), other).__ref())); 
	}
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(T other) const noexcept -> const bool
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), Create(other)).__ref())); 
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(T other) const noexcept -> const bool
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), Create(other)).__ref())); 
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAll(const __self& other) const noexcept -> const bool
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), other); 
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAny(const __self& other) const noexcept -> const bool
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), other); 
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(const __self& other) const noexcept -> const bool
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_xor)((*this), other); 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(const __self& other) const noexcept -> const bool
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_xor)((*this), other); 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(T other) const noexcept -> const bool
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_xor)((*this), Create(other)); 
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(T other) const noexcept -> const bool
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_xor)((*this), Create(other)); 
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(const __self& other) const noexcept -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), other); 
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(const __self& other) const noexcept -> const bool
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), other); 
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)); 
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)); 
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(const __self& other) const noexcept -> const bool
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_xor)((*this), other); 
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(const __self& other) const noexcept -> const bool
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_xor)((*this), other); 
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(T other) const noexcept -> const bool
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_xor)((*this), Create(other)); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(T other) const noexcept -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_xor)((*this), Create(other)); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(const __self& other) const noexcept -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), other); 
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(const __self& other) const noexcept -> const bool
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), other); 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)); 
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)); 
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+() const noexcept -> const __self
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-() const noexcept -> const __self
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Negate((*this))); 
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_not() const noexcept -> const __self
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseNot((*this))); 
	}
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(const __self& other)  -> __self&
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), other)); 
	}
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(T other)  -> __self&
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), __self::Create(other))); 
	}
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(const __self& other)  -> __self&
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), other)); 
	}
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(T other)  -> __self&
	{
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), __self::Create(other))); 
	}
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(const __self& other)  -> __self&
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Multiply((*this), other)); 
	}
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(T other)  -> __self&
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Multiply((*this), __self::Create(other))); 
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(const __self& other)  -> __self&
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Divide((*this), other)); 
	}
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(T other)  -> __self&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Divide((*this), __self::Create(other))); 
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(const __self& other)  -> __self&
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Mod((*this), other);
	}
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(T other)  -> __self&
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Mod((*this), __self::Create(other));
	}
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(const __self& other)  -> __self&
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAnd((*this), other)); 
	}
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(T other)  -> __self&
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAnd((*this), __self::Create(other))); 
	}
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(const __self& other)  -> __self&
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseOr((*this), other)); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(T other)  -> __self&
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseOr((*this), __self::Create(other))); 
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(const __self& other)  -> __self&
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseXor((*this), other)); 
	}
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(T other)  -> __self&
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseXor((*this), __self::Create(other))); 
	}
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(const __self& other)  -> __self&
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::RightShift((*this), other);
	}
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(const __self& other)  -> __self&
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::LeftShift((*this), other);
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(Builtin::i32 shift)  -> __self&
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::RightShift((*this), shift);
	}
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(Builtin::i32 shift)  -> __self&
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::LeftShift((*this), shift);
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++()  -> __self&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator++(); return copy; }
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--()  -> __self&
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator--(); return copy; }
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(const __self& other) const  -> const __self
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} += other); 
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(T other) const  -> const __self
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} += other); 
	}
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(const __self& other) const  -> const __self
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} -= other); 
	}
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(T other) const  -> const __self
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} -= other); 
	}
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(const __self& other) const  -> const __self
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} *= other); 
	}
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(T other) const  -> const __self
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} *= other); 
	}
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(const __self& other) const  -> const __self
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} /= other); 
	}
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(T other) const  -> const __self
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} /= other); 
	}
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(const __self& other) const  -> const __self
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} %= other); 
	}
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(T other) const  -> const __self
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} %= other); 
	}
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(const __self& other) const  -> const __self
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(T other) const  -> const __self
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(const __self& other) const  -> const __self
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(T other) const  -> const __self
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(const __self& other) const  -> const __self
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(T other) const  -> const __self
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(const __self& other) const  -> const __self
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} >>= other); 
	}
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(Builtin::i32 shift) const  -> const __self
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} >>= shift); 
	}
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(const __self& other) const  -> const __self
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} <<= other); 
	}
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(Builtin::i32 shift) const  -> const __self
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} <<= shift); 
	}
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), other)); 
	}
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), other)); 
	}
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Less((*this), other)); 
	}
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::LessOrEqual((*this), other)); 
	}
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Greater((*this), other)); 
	}
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_xor(const __self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::GreaterOrEqual((*this), other)); 
	}
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), __self::Create(other))); 
	}
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), __self::Create(other))); 
	}
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Less((*this), __self::Create(other))); 
	}
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::LessOrEqual((*this), __self::Create(other))); 
	}
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Greater((*this), __self::Create(other))); 
	}
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::GreaterOrEqual((*this), __self::Create(other))); 
	}
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EqualsAll)((*this).__ref(), other)); 
	}
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(T other) const noexcept -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(All)((*this).__ref(), other)); 
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(EqualsAll)((*this).__ref(), other)); 
	}
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(T other) const noexcept -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(All)((*this).__ref(), other)); 
	}
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EqualsAny)((*this).__ref(), other)); 
	}
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(T other) const noexcept -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Any)((*this).__ref(), other)); 
	}
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(EqualsAny)((*this).__ref(), other)); 
	}
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(T other) const noexcept -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(Any)((*this).__ref(), other)); 
	}
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(const __self& other) const noexcept -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAll)((*this).__ref(), other)); 
	}
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(T other) const noexcept -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAll)((*this).__ref(), other)); 
	}
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(const __self& other) const noexcept -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAny)((*this).__ref(), other)); 
	}
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(T other) const noexcept -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAny)((*this).__ref(), other)); 
	}
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(const __self& other) const noexcept -> const bool
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAll)((*this).__ref(), other)); 
	}
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(T other) const noexcept -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAll)((*this).__ref(), other)); 
	}
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(const __self& other) const noexcept -> const bool
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAny)((*this).__ref(), other)); 
	}
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(T other) const noexcept -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAny)((*this).__ref(), other)); 
	}
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAll)((*this).__ref(), other)); 
	}
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(T other) const noexcept -> const bool
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAll)((*this).__ref(), other)); 
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAny)((*this).__ref(), other)); 
	}
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(T other) const noexcept -> const bool
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAny)((*this).__ref(), other)); 
	}
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAll)((*this).__ref(), other)); 
	}
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(T other) const noexcept -> const bool
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAll)((*this).__ref(), other)); 
	}
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAny)((*this).__ref(), other)); 
	}
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(T other) const noexcept -> const bool
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAny)((*this).__ref(), other)); 
	}
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod() const noexcept -> const __self
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingNegate((*this))); 
	}
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne() const noexcept -> const __self
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictNegate((*this))); 
	}
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst() const noexcept -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingNegate((*this))); 
	}
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_eq(const __self& other)  -> __self&
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), other)); 
	}
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_eq(T other)  -> __self&
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), __self::Create(other))); 
	}
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or_eq(const __self& other)  -> __self&
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), other)); 
	}
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or_eq(T other)  -> __self&
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), __self::Create(other))); 
	}
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne_eq(const __self& other)  -> __self&
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), other)); 
	}
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne_eq(T other)  -> __self&
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), __self::Create(other))); 
	}
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_eq(const __self& other)  -> __self&
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), other)); 
	}
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_eq(T other)  -> __self&
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), __self::Create(other))); 
	}
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or_eq(const __self& other)  -> __self&
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), other)); 
	}
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or_eq(T other)  -> __self&
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), __self::Create(other))); 
	}
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne_eq(const __self& other)  -> __self&
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), other)); 
	}
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne_eq(T other)  -> __self&
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), __self::Create(other))); 
	}
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_eq(const __self& other)  -> __self&
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingMultiply((*this), other)); 
	}
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_eq(T other)  -> __self&
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingMultiply((*this), __self::Create(other))); 
	}
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne_eq(const __self& other)  -> __self&
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictMultiply((*this), other)); 
	}
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne_eq(T other)  -> __self&
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictMultiply((*this), __self::Create(other))); 
	}
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_eq(const __self& other)  -> __self&
	{
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingDivide((*this), other)); 
	}
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_eq(T other)  -> __self&
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingDivide((*this), __self::Create(other))); 
	}
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne_eq(const __self& other)  -> __self&
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictDivide((*this), other)); 
	}
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne_eq(T other)  -> __self&
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictDivide((*this), __self::Create(other))); 
	}
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_eq(Builtin::i32 exp)  -> __self&
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::IPow((*this), exp)); 
	}
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_mod_eq(Builtin::i32 exp)  -> __self&
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingIPow((*this), exp)); 
	}
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_ne_eq(Builtin::i32 exp)  -> __self&
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictIPow((*this), exp)); 
	}
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul_eq(const __self& other)  -> __self&
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Real power operator is supported only for floating-point types");
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Pow((*this), other);
	}
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul_eq(T other)  -> __self&
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Real power operator is supported only for floating-point types");
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Pow((*this), __self::Create(other));
	}
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_eq(const __self& other)  -> __self&
	{
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::WrappingMod((*this), other);
	}
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_eq(T other)  -> __self&
	{
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::WrappingMod((*this), __self::Create(other));
	}
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne_eq(const __self& other)  -> __self&
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::StrictMod((*this), other);
	}
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne_eq(T other)  -> __self&
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::StrictMod((*this), __self::Create(other));
	}
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(const __self& other)  -> __self&
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAndNot((*this), other)); 
	}
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(T other)  -> __self&
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAndNot((*this), __self::Create(other))); 
	}
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt_eq(const __self& other)  -> __self&
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::UnsignedRightShift((*this), other);
	}
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt_eq(Builtin::i32 shift)  -> __self&
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::UnsignedRightShift((*this), shift);
	}
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod()  -> __self&
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_add_add_mod)(__ref()); return copy; }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_or()  -> __self&
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_or_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_add_add_or)(__ref()); return copy; }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_ne()  -> __self&
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_ne_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_add_add_ne)(__ref()); return copy; }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod_qst()  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod()  -> __self&
	{
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_sub_sub_mod)(__ref()); return copy; }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_or()  -> __self&
	{
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_or_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_sub_sub_or)(__ref()); return copy; }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_ne()  -> __self&
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_ne_postfix()  -> decltype(auto)  { auto copy = __ref(); ADV_UFCS(_operator_sub_sub_ne)(__ref()); return copy; }
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod_qst()  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), __self::Create(T{Builtin::i32(1)}))); 
	}
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod(const __self& other) const  -> const __self
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingAdd((*this), other)); 
	}
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod(T other) const  -> const __self
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingAdd((*this), __self::Create(other))); 
	}
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or(const __self& other) const  -> const __self
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingAdd((*this), other)); 
	}
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or(T other) const  -> const __self
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingAdd((*this), __self::Create(other))); 
	}
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne(const __self& other) const  -> const __self
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictAdd((*this), other)); 
	}
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne(T other) const  -> const __self
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictAdd((*this), __self::Create(other))); 
	}
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), other)); 
	}
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), __self::Create(other))); 
	}
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod(const __self& other) const  -> const __self
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingSubtract((*this), other)); 
	}
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod(T other) const  -> const __self
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingSubtract((*this), __self::Create(other))); 
	}
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or(const __self& other) const  -> const __self
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingSubtract((*this), other)); 
	}
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or(T other) const  -> const __self
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingSubtract((*this), __self::Create(other))); 
	}
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne(const __self& other) const  -> const __self
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictSubtract((*this), other)); 
	}
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne(T other) const  -> const __self
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictSubtract((*this), __self::Create(other))); 
	}
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), other)); 
	}
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), __self::Create(other))); 
	}
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod(const __self& other) const  -> const __self
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMultiply((*this), other)); 
	}
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod(T other) const  -> const __self
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMultiply((*this), __self::Create(other))); 
	}
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne(const __self& other) const  -> const __self
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMultiply((*this), other)); 
	}
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne(T other) const  -> const __self
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMultiply((*this), __self::Create(other))); 
	}
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMultiply((*this), other)); 
	}
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMultiply((*this), __self::Create(other))); 
	}
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod(const __self& other) const  -> const __self
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingDivide((*this), other)); 
	}
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod(T other) const  -> const __self
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingDivide((*this), __self::Create(other))); 
	}
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne(const __self& other) const  -> const __self
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictDivide((*this), other)); 
	}
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne(T other) const  -> const __self
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictDivide((*this), __self::Create(other))); 
	}
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingDivide((*this), other)); 
	}
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingDivide((*this), __self::Create(other))); 
	}
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod(const __self& other) const  -> const __self
	{
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMod((*this), other)); 
	}
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod(T other) const  -> const __self
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMod((*this), __self::Create(other))); 
	}
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne(const __self& other) const  -> const __self
	{
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMod((*this), other)); 
	}
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne(T other) const  -> const __self
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMod((*this), __self::Create(other))); 
	}
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_qst(const __self& other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMod((*this), other)); 
	}
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_qst(T other) const  -> const std::tuple<__self, SimdMask<T, Arch>>
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMod((*this), __self::Create(other))); 
	}
#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul(const __self& other) const  -> const __self
	{
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), other)); 
	}
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul(T other) const  -> const __self
	{
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), __self::Create(other))); 
	}
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor(Builtin::i32 exp) const  -> const __self
	{
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IPow((*this), exp)); 
	}
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_mod(Builtin::i32 exp) const  -> const __self
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingIPow((*this), exp)); 
	}
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_ne(Builtin::i32 exp) const  -> const __self
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictIPow((*this), exp)); 
	}
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(const __self& other) const  -> const __self
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseAndNot((*this), other)); 
	}
#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(T other) const  -> const __self
	{
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseAndNot((*this), __self::Create(other))); 
	}
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt(const __self& other) const  -> const __self
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::UnsignedRightShift((*this), other)); 
	}
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt(Builtin::i32 shift) const  -> const __self
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::UnsignedRightShift((*this), ADV_USFCS((SimdVector<Builtin::i32, Arch>), Create)(shift))); 
	}
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(const __self& y, const __self& z) const  -> const __self
	{
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), y, z)); 
	}
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(const __self& y, T z) const  -> const __self
	{
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), y, Create(z))); 
	}
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(T y, const __self& z) const  -> const __self
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), Create(y), z)); 
	}
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(T y, T z) const  -> const __self
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), Create(y), Create(z))); 
	}
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(const __self& y, const __self& z) const  -> const __self
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), y, z)); 
	}
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(const __self& y, T z) const  -> const __self
	{
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), y, Create(z))); 
	}
#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(T y, const __self& z) const  -> const __self
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), Create(y), z)); 
	}
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(T y, T z) const  -> const __self
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), Create(y), Create(z))); 
	}
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(const __self& y, const __self& z) const  -> const __self
	{
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), y, z)); 
	}
#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(const __self& y, T z) const  -> const __self
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), y, Create(z))); 
	}
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(T y, const __self& z) const  -> const __self
	{
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), Create(y), z)); 
	}
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(T y, T z) const  -> const __self
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), Create(y), Create(z))); 
	}
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(const __self& y, const __self& z) const  -> const __self
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), y, z)); 
	}
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(const __self& y, T z) const  -> const __self
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), y, Create(z))); 
	}
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(T y, const __self& z) const  -> const __self
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), Create(y), z)); 
	}
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(T y, T z) const  -> const __self
	{
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), Create(y), Create(z))); 
	}
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getOne()  -> __self 
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(1)})); 
	}
	
#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getZero()  -> __self 
	{
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(0)})); 
	}
	
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAbs() const  -> __self 
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Abs((*this))); 
	}
	
#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Min(const __self& other) const  -> const __self
	{
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Min((*this), other)); 
	}
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Max(const __self& other) const  -> const __self
	{
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Max((*this), other)); 
	}
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getMinElement() const  -> T 
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::MinElement((*this))); 
	}
	
#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getMaxElement() const  -> T 
	{
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::MaxElement((*this))); 
	}
	
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSum() const  -> T 
	{
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Sum((*this))); 
	}
	
#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getProduct() const  -> T 
	{
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Product((*this))); 
	}
	
#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Clamp(const __self& min, const __self& max) const  -> const __self
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Clamp((*this), min, max)); 
	}
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Lerp(const __self& end, const __self& amount) const  -> const __self
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Lerp((*this), end, amount)); 
	}
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::ConditionalSelect(const typename SimdVector<T, Arch>::TMask& condition, const __self& trueBranch, const __self& falseBranch)  -> const __self
	{
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Select(condition, trueBranch, falseBranch)); 
	}
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> auto SimdVector<T, Arch>::getSign() const  -> __self 
	{
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ConditionalSelect(ADV_UFCS(_operator_gt_xor)((*this), Zero), One, Zero) - ConditionalSelect(ADV_UFCS(_operator_lt_xor)((*this), Zero), One, Zero);
	}
	
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> auto SimdVector<T, Arch>::CopySign(const __self& other) const  -> const __self
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "CopySign is only available for floating point types");
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Abs | Arch::BitOfSign(other);
	}
#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Midpoint(const __self& other) const  -> const __self
	{
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Average((*this), other)); 
	}
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSqrt() const  -> __self 
	{
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Sqrt is only available for floating point types");
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::Sqrt((*this));
	}
	
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCbrt() const  -> __self 
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cbrt((*this))); 
	}
	
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Hypot(const __self& other) const  -> const __self
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Hypot((*this), other)); 
	}
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Root(const __self& other) const  -> const __self
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), ADV_UPCS(Reciprocal)(other.__ref()))); 
	}
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Root(Builtin::i32 exp) const  -> const __self
	{
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return [&]() -> __self 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			auto __tmp__valid_516 = Builtin::Cast<false, std::decay_t<decltype(exp)>::__self>(exp);
			#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			if(__tmp__valid_516.IsValid() && Builtin::Is(*__tmp__valid_516, Builtin::i32(2))) {
				#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
				const auto& exp = *__tmp__valid_516;
				return Sqrt;
			}
			else {
				#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
				if(__tmp__valid_516.IsValid() && Builtin::Is(*__tmp__valid_516, Builtin::i32(3))) {
					#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
					const auto& exp = *__tmp__valid_516;
					return Cbrt;
				}
				else {
					#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
					if(__tmp__valid_516.IsValid() && Builtin::Is(*__tmp__valid_516, Builtin::i32(0))) {
						#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
						const auto& exp = *__tmp__valid_516;
						return Create(ADV_USPCS(NaN, T)());
					}
					else {
						return ADV_UFCS(_operator_mul_mul)((*this), (T{Builtin::i32(1)} / exp));
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getReciprocalSqrt() const  -> __self 
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "ReciprocalSqrt is only available for floating point types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::ReciprocalSqrt((*this));
	}
	
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getReciprocal() const  -> __self 
	{
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Reciprocal is only available for floating point types");
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::Reciprocal((*this));
	}
	
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTruncate() const  -> __self 
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Truncate((*this))); 
	}
	
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCeil() const  -> __self 
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ceil((*this))); 
	}
	
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getFloor() const  -> __self 
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Floor((*this))); 
	}
	
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getRound() const  -> __self 
	{
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Round((*this))); 
	}
	
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getRoundTiesEven() const  -> __self 
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::RoundTiesEven((*this))); 
	}
	
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getFractionalPart() const  -> __self 
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod)((*this), Truncate)); 
	}
	
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getToRadians() const  -> __self 
	{
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) * (ADV_USPCS(Pi, T)() / T{Builtin::i32(180)})); 
	}
	
#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getToDegrees() const  -> __self 
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) * (T{Builtin::i32(180)} / ADV_USPCS(Pi, T)())); 
	}
	
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSin() const  -> __self 
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Sin((*this))); 
	}
	
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCos() const  -> __self 
	{
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cos((*this))); 
	}
	
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTan() const  -> __self 
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Tan((*this))); 
	}
	
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCot() const  -> __self 
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Tan.__ref())); 
	}
	
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSec() const  -> __self 
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Cos.__ref())); 
	}
	
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCsc() const  -> __self 
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Sin.__ref())); 
	}
	
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSinh() const  -> __self 
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Sinh((*this))); 
	}
	
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCosh() const  -> __self 
	{
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cosh((*this))); 
	}
	
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTanh() const  -> __self 
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Tanh((*this))); 
	}
	
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCoth() const  -> __self 
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Tanh.__ref())); 
	}
	
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSech() const  -> __self 
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Cosh.__ref())); 
	}
	
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCsch() const  -> __self 
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Sinh.__ref())); 
	}
	
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsin() const  -> __self 
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Asin((*this))); 
	}
	
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcos() const  -> __self 
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Acos((*this))); 
	}
	
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAtan() const  -> __self 
	{
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atan((*this))); 
	}
	
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Atan2(const __self& denominator) const  -> const __self
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atan2((*this), denominator)); 
	}
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcot() const  -> __self 
	{
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(Reciprocal.__ref())); 
	}
	
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsec() const  -> __self 
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(Reciprocal.__ref())); 
	}
	
#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcsc() const  -> __self 
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(Reciprocal.__ref())); 
	}
	
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsinh() const  -> __self 
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Asinh((*this))); 
	}
	
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcosh() const  -> __self 
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Acosh((*this))); 
	}
	
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAtanh() const  -> __self 
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atanh((*this))); 
	}
	
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcoth() const  -> __self 
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)(Reciprocal.__ref())); 
	}
	
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsech() const  -> __self 
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)(Reciprocal.__ref())); 
	}
	
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcsch() const  -> __self 
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)(Reciprocal.__ref())); 
	}
	
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLn() const  -> __self 
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ln((*this))); 
	}
	
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLnP1() const  -> __self 
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ln1P((*this))); 
	}
	
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog2() const  -> __self 
	{
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log2((*this))); 
	}
	
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog2P1() const  -> __self 
	{
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log2((*this) + One)); 
	}
	
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog10() const  -> __self 
	{
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log10((*this))); 
	}
	
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog10P1() const  -> __self 
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log10((*this) + One)); 
	}
	
#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Log(const __self& base) const  -> const __self
	{
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		Builtin::Auto<decltype(Ln / ADV_UPCS(Ln)(base.__ref()))> z = Ln / ADV_UPCS(Ln)(base.__ref()); 
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		z = ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(base, One), Create(ADV_USPCS(NaN, T)()), z);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		z = ConditionalSelect((ADV_UFCS(_operator_ne_eq_xor)((*this), One)) & (ADV_UPCS(IsZero)(base.__ref()) | ADV_UPCS(IsPositiveInfinity)(base.__ref())), Create(ADV_USPCS(NaN, T)()), z);
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return z;
	}
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp() const  -> __self 
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp((*this))); 
	}
	
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExpM1() const  -> __self 
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::ExpM1((*this))); 
	}
	
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp2() const  -> __self 
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp2((*this))); 
	}
	
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp2M1() const  -> __self 
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp2((*this)) - One); 
	}
	
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp10() const  -> __self 
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp10((*this))); 
	}
	
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp10M1() const  -> __self 
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp10((*this)) - One); 
	}
	
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::All(T val) const  -> const bool
	{
		#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Any(T val) const  -> const bool
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::None(T val) const  -> const bool
	{
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!Any(val)); 
	}
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Count(T val) const  -> const Builtin::usize
	{
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Count)(mask.__ref());
	}
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::IndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(FirstSet)(mask.__ref());
	}
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LastIndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(LastSet)(mask.__ref());
	}
#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::SimdMask(typename SimdMask<T, Arch>::TNative reg) noexcept
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_UPCS(data)(_reg.__ref()) = reg;
	}
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::operator typename SimdMask<T, Arch>::TNative() const noexcept
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::ToNative() const  -> const typename SimdMask<T, Arch>::TNative
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U, class... V, size_t $tparam$I, size_t... Is> inline auto SimdMask<T, Arch>::MakeRegister(typename Builtin::template IndexSequence<$tparam$I, Is...> __var_681_68, U u, V... v) noexcept -> const typename SimdMask<T, Arch>::TNative
	{
		constexpr Builtin::usize I = $tparam$I;
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return MakeRegister(Builtin::template IndexSequence<Is...>(), u, u, v...);
	}
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... V> inline auto SimdMask<T, Arch>::MakeRegister(typename Builtin::template IndexSequence<> __var_685_41, V... v) noexcept -> const typename SimdMask<T, Arch>::TNative
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template CreateMaskFrom<T, Arch, V...>(v...).__ref().ToNative();
	}
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Create(bool val)  -> const __self
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return MakeRegister(Builtin::MakeIndexSequence<Length - Builtin::u32(1U)>(), val);
	}
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdMask<T, Arch>::Create(bool val0, bool val1, Ts... tail)  -> const __self
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template CreateMaskFrom<T, Arch, Ts...>(val0, val1, bool{tail}...);
	}
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::FromScalarMask(Builtin::u64 mask)  -> const __self
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template MaskFromScalar<T, Arch>(mask)); 
	}
#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getScalarMask() const  -> Builtin::u64 
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::MaskToScalar((*this))); 
	}
	
#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard706{};
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.__ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template LoadMask<T, Arch>(source);
	}
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template LoadMask<T, Arch>(source)); 
	}
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadUnsafe(const bool& source)  -> const __self
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard719{};
			#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return Arch::template LoadMask<T, Arch>((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Store(Builtin::Unsafe::__RawPtr<bool> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Store((*this), destination)); 
	}
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::StoreUnsafe(Builtin::MutableRef<bool> __destination__) const  -> void
	{
		bool& destination = __destination__;
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard729{};
			#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Arch::Store((*this), (__RawPtr(std::addressof(destination))));
		}
	}
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_subscript(Builtin::usize index)  -> const T
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::GetMaskElement((*this), index);
	}
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_subscript(Builtin::usize index)  const  -> const T
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::GetMaskElement((*this), index);
	}
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAt(Builtin::usize index)  -> const T { return _operator_subscript(index); }
	#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAt(Builtin::usize index) const  -> const T { return _operator_subscript(index); }
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getTrue()  -> __self 
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(true))); 
	}
	
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getFalse()  -> __self 
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(false))); 
	}
	
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator==(const __self& other) const noexcept -> const bool
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), other).__ref())); 
	}
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator!=(const __self& other) const noexcept -> const bool
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), other).__ref())); 
	}
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_eq_eq_xor(const __self& other) const noexcept -> const __self
	{
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), other)); 
	}
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_ne_eq_xor(const __self& other) const noexcept -> const __self
	{
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), other)); 
	}
#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_not() const noexcept -> const __self
	{
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseNot((*this))); 
	}
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&=(const __self& other)  -> __self&
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseAnd((*this), other).__ref())); 
	}
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|=(const __self& other)  -> __self&
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseOr((*this), other).__ref())); 
	}
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^=(const __self& other)  -> __self&
	{
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseXor((*this), other).__ref())); 
	}
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&(const __self& other) const  -> const __self
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|(const __self& other) const  -> const __self
	{
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^(const __self& other) const  -> const __self
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAll() const  -> bool 
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::All((*this))); 
	}
	
#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAny() const  -> bool 
	{
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Any((*this))); 
	}
	
#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getNone() const  -> bool 
	{
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!Any); 
	}
	
#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getCount() const  -> Builtin::usize 
	{
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(Builtin::Cast<true, Builtin::u64>(ScalarMask))); 
	}
	
#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getFirstSet() const  -> Builtin::Nullable<Builtin::usize> 
	{
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype(Builtin::usize(64U) - Length)> unusedBits = Builtin::usize(64U) - Length;
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)}))> lowMask = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)});
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::LeadingZeroCount(Builtin::u64{ScalarMask}))> index = Builtin::LeadingZeroCount(Builtin::u64{ScalarMask}); 
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Builtin::i32(64)) >= 0) {
			#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return index - unusedBits;
	}
	
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getLastSet() const  -> Builtin::Nullable<Builtin::usize> 
	{
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL))> stop = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL);
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::TrailingZeroCount(Builtin::u64{ScalarMask} | stop))> index = Builtin::TrailingZeroCount(Builtin::u64{ScalarMask} | stop); 
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Length - Builtin::i32(1) - index;
	}
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt8(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i8, Arch>
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i8>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt16(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i16, Arch>
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i16>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i32, Arch>
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i32>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::i64, Arch>
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i64>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt8(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u8, Arch>
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u8>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt16(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u16, Arch>
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u16>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u32, Arch>
	{
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u32>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::u64, Arch>
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u64>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat32(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::f32, Arch>
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::f32>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat64(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdVector<Builtin::f64, Arch>
	{
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::f64>(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNaN(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsNaN(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsInfinity(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsFinite(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsFinite(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositiveInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)(__this, ADV_USPCS(PositiveInfinity, T)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegativeInfinity(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)(__this, ADV_USPCS(NegativeInfinity, T)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositive(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_eq_xor)(__this, ADV_USPCS(Zero, __extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegative(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_xor)(__this, ADV_USPCS(Zero, __extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsZero(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)(__this, ADV_USPCS(Zero, __extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsInteger(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsEvenInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsEvenInteger(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsOddInteger(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const SimdMask<T, Arch>
	{
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsOddInteger(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace __extensions { using namespace System::Runtime::Intrinsics;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getSinCos(__extension_SimdVector_630_SimdVector<T, Arch> const& __this ) -> const std::tuple<__extension_SimdVector_630_SimdVector<T, Arch>, __extension_SimdVector_630_SimdVector<T, Arch>>
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SinCos(__this)); 
	}
	} namespace System::Runtime::Intrinsics{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	

}