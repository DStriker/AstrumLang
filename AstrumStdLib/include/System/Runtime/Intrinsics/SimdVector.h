#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdInstructionSet.h"
#include "System/IEquatable.h"
using namespace System;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __SimdVector$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, class Arch> class SimdVector;
template<class T, class Arch> class SimdMask;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, class Arch> class $Class_SimdVector;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdVector final : public Builtin::Struct {
		public: using $self = SimdVector<T, Arch>;
		public: using $class = $Class_SimdVector<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
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
		public: inline static auto getOne()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , One, getOne, $self);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getZero()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Zero, getZero, $self);
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAbs() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Abs, getAbs, $self);
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
		public: auto getSign() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sign, getSign, $self);
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSqrt() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sqrt, getSqrt, $self);
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCbrt() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cbrt, getCbrt, $self);
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getReciprocalSqrt() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ReciprocalSqrt, getReciprocalSqrt, $self);
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getReciprocal() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Reciprocal, getReciprocal, $self);
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTruncate() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Truncate, getTruncate, $self);
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCeil() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Ceil, getCeil, $self);
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFloor() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Floor, getFloor, $self);
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getRound() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Round, getRound, $self);
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getRoundTiesEven() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, RoundTiesEven, getRoundTiesEven, $self);
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFractionalPart() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, FractionalPart, getFractionalPart, $self);
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getToRadians() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ToRadians, getToRadians, $self);
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getToDegrees() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ToDegrees, getToDegrees, $self);
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSin() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sin, getSin, $self);
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCos() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cos, getCos, $self);
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTan() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Tan, getTan, $self);
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCot() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cot, getCot, $self);
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSec() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sec, getSec, $self);
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCsc() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Csc, getCsc, $self);
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSinh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sinh, getSinh, $self);
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCosh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Cosh, getCosh, $self);
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getTanh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Tanh, getTanh, $self);
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCoth() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Coth, getCoth, $self);
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getSech() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Sech, getSech, $self);
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCsch() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Csch, getCsch, $self);
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsin() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asin, getAsin, $self);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcos() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acos, getAcos, $self);
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAtan() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Atan, getAtan, $self);
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcot() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acot, getAcot, $self);
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsec() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asec, getAsec, $self);
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcsc() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acsc, getAcsc, $self);
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsinh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asinh, getAsinh, $self);
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcosh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acosh, getAcosh, $self);
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAtanh() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Atanh, getAtanh, $self);
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcoth() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acoth, getAcoth, $self);
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAsech() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Asech, getAsech, $self);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAcsch() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Acsch, getAcsch, $self);
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLn() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Ln, getLn, $self);
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLnP1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, LnP1, getLnP1, $self);
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog2() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log2, getLog2, $self);
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog2P1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log2P1, getLog2P1, $self);
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog10() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log10, getLog10, $self);
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLog10P1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Log10P1, getLog10P1, $self);
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp, getExp, $self);
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExpM1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ExpM1, getExpM1, $self);
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp2() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp2, getExp2, $self);
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp2M1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp2M1, getExp2M1, $self);
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp10() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp10, getExp10, $self);
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getExp10M1() const  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Exp10M1, getExp10M1, $self);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  SimdVector(TNative reg) noexcept;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  operator TNative() const noexcept;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto ToNative() const  -> const TNative;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class U> inline static auto Create(U val)  -> const $self;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(T val0, T val1, Ts... tail)  -> const $self;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromMask(const TMask& b)  -> const $self;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const $self;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const $self;
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const T& source)  -> const $self;
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
		public: template<int32_t... Indexes> inline auto Swizzle() const  -> const $self;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(const $self& other) const noexcept -> const bool;
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const $self& other) const noexcept -> const bool;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(T other) const noexcept -> const bool;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(T other) const noexcept -> const bool;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAll(const $self& other) const noexcept -> const bool;
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAny(const $self& other) const noexcept -> const bool;
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(const $self& other) const noexcept -> const bool;
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(const $self& other) const noexcept -> const bool;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(T other) const noexcept -> const bool;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(T other) const noexcept -> const bool;
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(const $self& other) const noexcept -> const bool;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(const $self& other) const noexcept -> const bool;
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(T other) const noexcept -> const bool;
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(T other) const noexcept -> const bool;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(const $self& other) const noexcept -> const bool;
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(const $self& other) const noexcept -> const bool;
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(T other) const noexcept -> const bool;
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(T other) const noexcept -> const bool;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(const $self& other) const noexcept -> const bool;
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(const $self& other) const noexcept -> const bool;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(T other) const noexcept -> const bool;
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(T other) const noexcept -> const bool;
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+() const noexcept -> const $self;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-() const noexcept -> const $self;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const $self;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(T other)  LIFETIMEBOUND -> $self&;
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(T other)  LIFETIMEBOUND -> $self&;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(T other)  LIFETIMEBOUND -> $self&;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(T other)  LIFETIMEBOUND -> $self&;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(T other)  LIFETIMEBOUND -> $self&;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(T other)  LIFETIMEBOUND -> $self&;
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(T other)  LIFETIMEBOUND -> $self&;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(T other)  LIFETIMEBOUND -> $self&;
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(Builtin::i32 shift)  LIFETIMEBOUND -> $self&;
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(Builtin::i32 shift)  LIFETIMEBOUND -> $self&;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++(int)  -> SimdVector;
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--(int)  -> SimdVector;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(const $self& other) const  -> const $self;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(T other) const  -> const $self;
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(const $self& other) const  -> const $self;
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(T other) const  -> const $self;
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(const $self& other) const  -> const $self;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(T other) const  -> const $self;
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(const $self& other) const  -> const $self;
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(T other) const  -> const $self;
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(const $self& other) const  -> const $self;
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(T other) const  -> const $self;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const $self& other) const  -> const $self;
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(T other) const  -> const $self;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const $self& other) const  -> const $self;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(T other) const  -> const $self;
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const $self& other) const  -> const $self;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(T other) const  -> const $self;
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(const $self& other) const  -> const $self;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(Builtin::i32 shift) const  -> const $self;
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(const $self& other) const  -> const $self;
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(Builtin::i32 shift) const  -> const $self;
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>;
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
		public: inline auto _operator_eq_eq_ne(const $self& other) const noexcept -> const bool;
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_ne(T other) const noexcept -> const bool;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(const $self& other) const noexcept -> const bool;
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(T other) const noexcept -> const bool;
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(const $self& other) const noexcept -> const bool;
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(T other) const noexcept -> const bool;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(const $self& other) const noexcept -> const bool;
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(T other) const noexcept -> const bool;
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(const $self& other) const noexcept -> const bool;
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(T other) const noexcept -> const bool;
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(const $self& other) const noexcept -> const bool;
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(T other) const noexcept -> const bool;
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(const $self& other) const noexcept -> const bool;
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(T other) const noexcept -> const bool;
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(const $self& other) const noexcept -> const bool;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(T other) const noexcept -> const bool;
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(const $self& other) const noexcept -> const bool;
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(T other) const noexcept -> const bool;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(const $self& other) const noexcept -> const bool;
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(T other) const noexcept -> const bool;
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(const $self& other) const noexcept -> const bool;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(T other) const noexcept -> const bool;
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(const $self& other) const noexcept -> const bool;
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(T other) const noexcept -> const bool;
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod() const noexcept -> const $self;
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne() const noexcept -> const $self;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst() const noexcept -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_eq(Builtin::i32 exp)  LIFETIMEBOUND -> $self&;
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_mod_eq(Builtin::i32 exp)  LIFETIMEBOUND -> $self&;
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_ne_eq(Builtin::i32 exp)  LIFETIMEBOUND -> $self&;
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(T other)  LIFETIMEBOUND -> $self&;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt_eq(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt_eq(Builtin::i32 shift)  LIFETIMEBOUND -> $self&;
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_mod()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_mod_postfix()  -> decltype(auto);
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_or()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_or_postfix()  -> decltype(auto);
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_ne()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_add_add_ne_postfix()  -> decltype(auto);
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_add_mod_qst()  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_mod()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_mod_postfix()  -> decltype(auto);
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_or()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_or_postfix()  -> decltype(auto);
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_ne()  LIFETIMEBOUND -> $self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto _operator_sub_sub_ne_postfix()  -> decltype(auto);
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_sub_mod_qst()  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod(const $self& other) const  -> const $self;
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod(T other) const  -> const $self;
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or(const $self& other) const  -> const $self;
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_or(T other) const  -> const $self;
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne(const $self& other) const  -> const $self;
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_ne(T other) const  -> const $self;
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_add_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod(const $self& other) const  -> const $self;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod(T other) const  -> const $self;
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or(const $self& other) const  -> const $self;
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_or(T other) const  -> const $self;
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne(const $self& other) const  -> const $self;
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_ne(T other) const  -> const $self;
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_sub_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod(const $self& other) const  -> const $self;
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod(T other) const  -> const $self;
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne(const $self& other) const  -> const $self;
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_ne(T other) const  -> const $self;
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod(const $self& other) const  -> const $self;
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod(T other) const  -> const $self;
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne(const $self& other) const  -> const $self;
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_ne(T other) const  -> const $self;
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_bsl_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod(const $self& other) const  -> const $self;
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod(T other) const  -> const $self;
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne(const $self& other) const  -> const $self;
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_ne(T other) const  -> const $self;
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mod_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>;
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul(const $self& other) const  -> const $self;
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_mul_mul(T other) const  -> const $self;
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor(Builtin::i32 exp) const  -> const $self;
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_mod(Builtin::i32 exp) const  -> const $self;
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_xor_xor_ne(Builtin::i32 exp) const  -> const $self;
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(const $self& other) const  -> const $self;
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(T other) const  -> const $self;
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt(const $self& other) const  -> const $self;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_gt_gt(Builtin::i32 shift) const  -> const $self;
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(const $self& y, const $self& z) const  -> const $self;
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(const $self& y, T z) const  -> const $self;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(T y, const $self& z) const  -> const $self;
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplyAdd(T y, T z) const  -> const $self;
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(const $self& y, const $self& z) const  -> const $self;
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(const $self& y, T z) const  -> const $self;
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(T y, const $self& z) const  -> const $self;
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplyAdd(T y, T z) const  -> const $self;
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(const $self& y, const $self& z) const  -> const $self;
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(const $self& y, T z) const  -> const $self;
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(T y, const $self& z) const  -> const $self;
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedMultiplySub(T y, T z) const  -> const $self;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(const $self& y, const $self& z) const  -> const $self;
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(const $self& y, T z) const  -> const $self;
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(T y, const $self& z) const  -> const $self;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto FusedNegatedMultiplySub(T y, T z) const  -> const $self;
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Min(const $self& other) const  -> const $self;
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Max(const $self& other) const  -> const $self;
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Clamp(const $self& min, const $self& max) const  -> const $self;
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Lerp(const $self& end, const $self& amount) const  -> const $self;
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto ConditionalSelect(const TMask& condition, const $self& trueBranch, const $self& falseBranch)  -> const $self;
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: ASTRUMSTD_API auto CopySign(const $self& other) const  -> const $self;
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Midpoint(const $self& other) const  -> const $self;
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Hypot(const $self& other) const  -> const $self;
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Root(const $self& other) const  -> const $self;
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Root(Builtin::i32 exp) const  -> const $self;
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Atan2(const $self& denominator) const  -> const $self;
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Log(const $self& base) const  -> const $self;
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
	
		} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> using $extension_SimdVector_630_SimdVector = SimdVector<T, Arch>;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt8($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i8, Arch>;
	#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt16($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i16, Arch>;
	#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i32, Arch>;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i64, Arch>;
	#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt8($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u8, Arch>;
	#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt16($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u16, Arch>;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u32, Arch>;
	#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u64, Arch>;
	#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::f32, Arch>;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::f64, Arch>;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNaN($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsFinite($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositiveInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegativeInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositive($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegative($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsZero($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsEvenInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsOddInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getSinCos($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const std::tuple<$extension_SimdVector_630_SimdVector<T, Arch>, $extension_SimdVector_630_SimdVector<T, Arch>>;
	} namespace System::Runtime::Intrinsics{
using $extensions::getAsInt8;
using $extensions::getAsInt16;
using $extensions::getAsInt32;
using $extensions::getAsInt64;
using $extensions::getAsUInt8;
using $extensions::getAsUInt16;
using $extensions::getAsUInt32;
using $extensions::getAsUInt64;
using $extensions::getAsFloat32;
using $extensions::getAsFloat64;
using $extensions::getIsNaN;
using $extensions::getIsInfinity;
using $extensions::getIsFinite;
using $extensions::getIsPositiveInfinity;
using $extensions::getIsNegativeInfinity;
using $extensions::getIsPositive;
using $extensions::getIsNegative;
using $extensions::getIsZero;
using $extensions::getIsInteger;
using $extensions::getIsEvenInteger;
using $extensions::getIsOddInteger;
using $extensions::getSinCos;

	template<class T, class Arch> class $Class_SimdMask;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdMask final : public Builtin::Struct {
		public: using $self = SimdMask<T, Arch>;
		public: using $class = $Class_SimdMask<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
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
		public: inline static auto getTrue()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , True, getTrue, $self);
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getFalse()  -> $self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , False, getFalse, $self);
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
		public: inline static auto Create(bool val)  -> const $self;
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(bool val0, bool val1, Ts... tail)  -> const $self;
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromScalarMask(Builtin::u64 mask)  -> const $self;
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const $self;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const $self;
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const bool& source)  -> const $self;
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
		public: inline auto operator==(const $self& other) const noexcept -> const bool;
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const $self& other) const noexcept -> const bool;
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_xor(const $self& other) const noexcept -> const $self;
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_xor(const $self& other) const noexcept -> const $self;
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const $self;
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const $self& other)  LIFETIMEBOUND -> $self&;
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const $self& other) const  -> const $self;
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const $self& other) const  -> const $self;
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const $self& other) const  -> const $self;
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: TRegister _reg; ADV_CHECK_REF_STRUCT("TRegister", TRegister);
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr Builtin::u32 Length = Builtin::u32{ADV_UFCS_NONLOCAL(_operator_bsl)(Builtin::usize(sizeof (TVector)), Builtin::usize(sizeof (T)))};
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(SimdInstructionSet::template IsSimdType<T>, "T must be a SIMD type");
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::TypeIs<Arch, SimdInstructionSet>(), "Arch must be a SIMD instruction set");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert((Length <=> Builtin::i32(0)) > 0, "Invalid vector length");
		template <size_t I, class T, class Arch> friend auto& get(SimdMask<T, Arch>&);
		template <size_t I, class T, class Arch> friend const auto& get(const SimdMask<T, Arch>&);
		
	};
	
		} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> using $extension_SimdVector_777_SimdMask = SimdMask<T, Arch>;
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getFirstSet($extension_SimdVector_777_SimdMask<T, Arch> const& $this ) -> const Builtin::Nullable<Builtin::usize>;
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getLastSet($extension_SimdVector_777_SimdMask<T, Arch> const& $this ) -> const Builtin::Nullable<Builtin::usize>;
	} namespace System::Runtime::Intrinsics{
using $extensions::getFirstSet;
using $extensions::getLastSet;

	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class $Class_SimdVector final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using $underlying = SimdVector<T, Arch>; using $self = $underlying;
		$self __value;
		$Class_SimdVector(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
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
		auto getAbs() const -> $self { return __value.getAbs(); }
		auto getMinElement() const -> T { return __value.getMinElement(); }
		auto getMaxElement() const -> T { return __value.getMaxElement(); }
		auto getSum() const -> T { return __value.getSum(); }
		auto getProduct() const -> T { return __value.getProduct(); }
		auto getSign() const -> $self { return __value.getSign(); }
		auto getSqrt() const -> $self { return __value.getSqrt(); }
		auto getCbrt() const -> $self { return __value.getCbrt(); }
		auto getReciprocalSqrt() const -> $self { return __value.getReciprocalSqrt(); }
		auto getReciprocal() const -> $self { return __value.getReciprocal(); }
		auto getTruncate() const -> $self { return __value.getTruncate(); }
		auto getCeil() const -> $self { return __value.getCeil(); }
		auto getFloor() const -> $self { return __value.getFloor(); }
		auto getRound() const -> $self { return __value.getRound(); }
		auto getRoundTiesEven() const -> $self { return __value.getRoundTiesEven(); }
		auto getFractionalPart() const -> $self { return __value.getFractionalPart(); }
		auto getToRadians() const -> $self { return __value.getToRadians(); }
		auto getToDegrees() const -> $self { return __value.getToDegrees(); }
		auto getSin() const -> $self { return __value.getSin(); }
		auto getCos() const -> $self { return __value.getCos(); }
		auto getTan() const -> $self { return __value.getTan(); }
		auto getCot() const -> $self { return __value.getCot(); }
		auto getSec() const -> $self { return __value.getSec(); }
		auto getCsc() const -> $self { return __value.getCsc(); }
		auto getSinh() const -> $self { return __value.getSinh(); }
		auto getCosh() const -> $self { return __value.getCosh(); }
		auto getTanh() const -> $self { return __value.getTanh(); }
		auto getCoth() const -> $self { return __value.getCoth(); }
		auto getSech() const -> $self { return __value.getSech(); }
		auto getCsch() const -> $self { return __value.getCsch(); }
		auto getAsin() const -> $self { return __value.getAsin(); }
		auto getAcos() const -> $self { return __value.getAcos(); }
		auto getAtan() const -> $self { return __value.getAtan(); }
		auto getAcot() const -> $self { return __value.getAcot(); }
		auto getAsec() const -> $self { return __value.getAsec(); }
		auto getAcsc() const -> $self { return __value.getAcsc(); }
		auto getAsinh() const -> $self { return __value.getAsinh(); }
		auto getAcosh() const -> $self { return __value.getAcosh(); }
		auto getAtanh() const -> $self { return __value.getAtanh(); }
		auto getAcoth() const -> $self { return __value.getAcoth(); }
		auto getAsech() const -> $self { return __value.getAsech(); }
		auto getAcsch() const -> $self { return __value.getAcsch(); }
		auto getLn() const -> $self { return __value.getLn(); }
		auto getLnP1() const -> $self { return __value.getLnP1(); }
		auto getLog2() const -> $self { return __value.getLog2(); }
		auto getLog2P1() const -> $self { return __value.getLog2P1(); }
		auto getLog10() const -> $self { return __value.getLog10(); }
		auto getLog10P1() const -> $self { return __value.getLog10P1(); }
		auto getExp() const -> $self { return __value.getExp(); }
		auto getExpM1() const -> $self { return __value.getExpM1(); }
		auto getExp2() const -> $self { return __value.getExp2(); }
		auto getExp2M1() const -> $self { return __value.getExp2M1(); }
		auto getExp10() const -> $self { return __value.getExp10(); }
		auto getExp10M1() const -> $self { return __value.getExp10M1(); }
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto FromMask(const TMask& b) -> $self const { ADV_EXPRESSION_BODY($self::FromMask(b)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source) -> $self const { ADV_EXPRESSION_BODY($self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const T> source) -> $self const { ADV_EXPRESSION_BODY($self::Load(source)); }
		static auto LoadUnsafe(const T& source) -> $self const { ADV_EXPRESSION_BODY($self::LoadUnsafe(source)); }
		auto StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreAligned(destination)); }
		auto StoreUnsafe(Builtin::MutableRef<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto operator==(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto EqualsAll(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAll(other)); }
		auto EqualsAny(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAny(other)); }
		auto LessThanAll(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanOrEqualAll(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto LessThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto GreaterThanAll(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanOrEqualAll(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto GreaterThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto operator+() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value.operator+()); }
		auto operator-() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value.operator-()); }
		auto _operator_not() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator+=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator+=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator-=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator-=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator*=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator*=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator/=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator/=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator%=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator%=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator&=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator&=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator|=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator|=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator^=(T other) -> $self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator>>=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator>>=(other)); }
		auto operator<<=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator<<=(other)); }
		auto operator>>=(Builtin::i32 shift) -> $self & { ADV_EXPRESSION_BODY(__value.operator>>=(shift)); }
		auto operator<<=(Builtin::i32 shift) -> $self & { ADV_EXPRESSION_BODY(__value.operator<<=(shift)); }
		auto operator++() -> $self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		auto operator--() -> $self & { ADV_EXPRESSION_BODY(__value.operator--()); }
		auto operator+(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator+(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator-(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator-(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator*(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator*(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator/(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator/(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator%(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator%(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator&(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator&(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator|(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator|(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator^(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator>>(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator>>(other)); }
		auto operator>>(Builtin::i32 shift) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator>>(shift)); }
		auto operator<<(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator<<(other)); }
		auto operator<<(Builtin::i32 shift) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator<<(shift)); }
		auto _operator_eq_eq_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_lt_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_xor(other)); }
		auto _operator_lt_eq_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_xor(other)); }
		auto _operator_gt_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_xor(other)); }
		auto _operator_gt_eq_xor(const $self& other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_xor(other)); }
		auto _operator_eq_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_lt_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_xor(other)); }
		auto _operator_lt_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_xor(other)); }
		auto _operator_gt_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_xor(other)); }
		auto _operator_gt_eq_xor(T other) const noexcept -> SimdMask<T, Arch> const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_xor(other)); }
		auto _operator_eq_eq_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_eq_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_ne_eq_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_ne_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_eq_eq_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_eq_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_ne_eq_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_ne_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_lt_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_lt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_gt_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_gt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_lt_eq_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_lt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_gt_eq_ne(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_qst(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto _operator_gt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto _operator_sub_mod() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod()); }
		auto _operator_sub_ne() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne()); }
		auto _operator_sub_mod_qst() const noexcept -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst()); }
		auto _operator_add_mod_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_mod_eq(other)); }
		auto _operator_add_mod_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_mod_eq(other)); }
		auto _operator_add_or_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_or_eq(other)); }
		auto _operator_add_or_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_or_eq(other)); }
		auto _operator_add_ne_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_ne_eq(other)); }
		auto _operator_add_ne_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_ne_eq(other)); }
		auto _operator_sub_mod_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_mod_eq(other)); }
		auto _operator_sub_mod_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_mod_eq(other)); }
		auto _operator_sub_or_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_or_eq(other)); }
		auto _operator_sub_or_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_or_eq(other)); }
		auto _operator_sub_ne_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_ne_eq(other)); }
		auto _operator_sub_ne_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_ne_eq(other)); }
		auto _operator_mul_mod_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_mod_eq(other)); }
		auto _operator_mul_mod_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_mod_eq(other)); }
		auto _operator_mul_ne_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_ne_eq(other)); }
		auto _operator_mul_ne_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_ne_eq(other)); }
		auto _operator_bsl_mod_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_eq(other)); }
		auto _operator_bsl_mod_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_eq(other)); }
		auto _operator_bsl_ne_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_bsl_ne_eq(other)); }
		auto _operator_bsl_ne_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_bsl_ne_eq(other)); }
		auto _operator_xor_xor_eq(Builtin::i32 exp) -> $self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_eq(exp)); }
		auto _operator_xor_xor_mod_eq(Builtin::i32 exp) -> $self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_mod_eq(exp)); }
		auto _operator_xor_xor_ne_eq(Builtin::i32 exp) -> $self & { ADV_EXPRESSION_BODY(__value._operator_xor_xor_ne_eq(exp)); }
		auto _operator_mul_mul_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_mul_eq(other)); }
		auto _operator_mul_mul_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mul_mul_eq(other)); }
		auto _operator_mod_mod_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mod_mod_eq(other)); }
		auto _operator_mod_mod_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mod_mod_eq(other)); }
		auto _operator_mod_ne_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mod_ne_eq(other)); }
		auto _operator_mod_ne_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_mod_ne_eq(other)); }
		auto _operator_and_not_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto _operator_and_not_eq(T other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto _operator_gt_gt_gt_eq(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt_eq(other)); }
		auto _operator_gt_gt_gt_eq(Builtin::i32 shift) -> $self & { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt_eq(shift)); }
		auto _operator_add_add_mod() -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_add_mod()); }
		auto _operator_add_add_or() -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_add_or()); }
		auto _operator_add_add_ne() -> $self & { ADV_EXPRESSION_BODY(__value._operator_add_add_ne()); }
		auto _operator_add_add_mod_qst() -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_add_mod_qst()); }
		auto _operator_sub_sub_mod() -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_mod()); }
		auto _operator_sub_sub_or() -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_or()); }
		auto _operator_sub_sub_ne() -> $self & { ADV_EXPRESSION_BODY(__value._operator_sub_sub_ne()); }
		auto _operator_sub_sub_mod_qst() -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_sub_mod_qst()); }
		auto _operator_add_mod(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_mod(other)); }
		auto _operator_add_mod(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_mod(other)); }
		auto _operator_add_or(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_or(other)); }
		auto _operator_add_or(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_or(other)); }
		auto _operator_add_ne(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_ne(other)); }
		auto _operator_add_ne(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_add_ne(other)); }
		auto _operator_add_mod_qst(const $self& other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_mod_qst(other)); }
		auto _operator_add_mod_qst(T other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_add_mod_qst(other)); }
		auto _operator_sub_mod(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod(other)); }
		auto _operator_sub_mod(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_mod(other)); }
		auto _operator_sub_or(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_or(other)); }
		auto _operator_sub_or(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_or(other)); }
		auto _operator_sub_ne(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne(other)); }
		auto _operator_sub_ne(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_sub_ne(other)); }
		auto _operator_sub_mod_qst(const $self& other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst(other)); }
		auto _operator_sub_mod_qst(T other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_sub_mod_qst(other)); }
		auto _operator_mul_mod(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_mod(other)); }
		auto _operator_mul_mod(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_mod(other)); }
		auto _operator_mul_ne(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_ne(other)); }
		auto _operator_mul_ne(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_ne(other)); }
		auto _operator_mul_mod_qst(const $self& other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mul_mod_qst(other)); }
		auto _operator_mul_mod_qst(T other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mul_mod_qst(other)); }
		auto _operator_bsl_mod(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod(other)); }
		auto _operator_bsl_mod(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod(other)); }
		auto _operator_bsl_ne(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_bsl_ne(other)); }
		auto _operator_bsl_ne(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_bsl_ne(other)); }
		auto _operator_bsl_mod_qst(const $self& other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_qst(other)); }
		auto _operator_bsl_mod_qst(T other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_bsl_mod_qst(other)); }
		auto _operator_mod_mod(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mod_mod(other)); }
		auto _operator_mod_mod(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mod_mod(other)); }
		auto _operator_mod_ne(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mod_ne(other)); }
		auto _operator_mod_ne(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mod_ne(other)); }
		auto _operator_mod_mod_qst(const $self& other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mod_mod_qst(other)); }
		auto _operator_mod_mod_qst(T other) const  -> std::tuple<$self, SimdMask<T, Arch>> const { ADV_EXPRESSION_BODY(__value._operator_mod_mod_qst(other)); }
		auto _operator_mul_mul(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_mul(other)); }
		auto _operator_mul_mul(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_mul_mul(other)); }
		auto _operator_xor_xor(Builtin::i32 exp) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor(exp)); }
		auto _operator_xor_xor_mod(Builtin::i32 exp) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor_mod(exp)); }
		auto _operator_xor_xor_ne(Builtin::i32 exp) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_xor_xor_ne(exp)); }
		auto _operator_and_not(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto _operator_and_not(T other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto _operator_gt_gt_gt(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt(other)); }
		auto _operator_gt_gt_gt(Builtin::i32 shift) const  -> $self const { ADV_EXPRESSION_BODY(__value._operator_gt_gt_gt(shift)); }
		auto FusedMultiplyAdd(const $self& y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(const $self& y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(T y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedMultiplyAdd(T y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(const $self& y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(const $self& y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(T y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedNegatedMultiplyAdd(T y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplyAdd(y, z)); }
		auto FusedMultiplySub(const $self& y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(const $self& y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(T y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedMultiplySub(T y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(const $self& y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(const $self& y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(T y, const $self& z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto FusedNegatedMultiplySub(T y, T z) const  -> $self const { ADV_EXPRESSION_BODY(__value.FusedNegatedMultiplySub(y, z)); }
		auto Min(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.Min(other)); }
		auto Max(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.Max(other)); }
		auto Clamp(const $self& min, const $self& max) const  -> $self const { ADV_EXPRESSION_BODY(__value.Clamp(min, max)); }
		auto Lerp(const $self& end, const $self& amount) const  -> $self const { ADV_EXPRESSION_BODY(__value.Lerp(end, amount)); }
		static auto ConditionalSelect(const TMask& condition, const $self& trueBranch, const $self& falseBranch) -> $self const { ADV_EXPRESSION_BODY($self::ConditionalSelect(condition, trueBranch, falseBranch)); }
		auto CopySign(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.CopySign(other)); }
		auto Midpoint(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.Midpoint(other)); }
		auto Hypot(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.Hypot(other)); }
		auto Root(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.Root(other)); }
		auto Root(Builtin::i32 exp) const  -> $self const { ADV_EXPRESSION_BODY(__value.Root(exp)); }
		auto Atan2(const $self& denominator) const  -> $self const { ADV_EXPRESSION_BODY(__value.Atan2(denominator)); }
		auto Log(const $self& base) const  -> $self const { ADV_EXPRESSION_BODY(__value.Log(base)); }
		auto All(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.All(val)); }
		auto Any(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.Any(val)); }
		auto None(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.None(val)); }
		auto Count(T val) const  -> Builtin::usize const { ADV_EXPRESSION_BODY(__value.Count(val)); }
		auto IndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.IndexOf(val)); }
		auto LastIndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.LastIndexOf(val)); }
		
	};
	

	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class $Class_SimdMask final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using $underlying = SimdMask<T, Arch>; using $self = $underlying;
		$self __value;
		$Class_SimdMask(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
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
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto Create(bool val) -> $self const { ADV_EXPRESSION_BODY($self::Create(val)); }
		static auto FromScalarMask(Builtin::u64 mask) -> $self const { ADV_EXPRESSION_BODY($self::FromScalarMask(mask)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source) -> $self const { ADV_EXPRESSION_BODY($self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const bool> source) -> $self const { ADV_EXPRESSION_BODY($self::Load(source)); }
		static auto LoadUnsafe(const bool& source) -> $self const { ADV_EXPRESSION_BODY($self::LoadUnsafe(source)); }
		auto StoreUnsafe(Builtin::MutableRef<bool> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const $self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto _operator_eq_eq_xor(const $self& other) const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_xor(other)); }
		auto _operator_ne_eq_xor(const $self& other) const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_xor(other)); }
		auto _operator_not() const noexcept -> $self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator&=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator|=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const $self& other) -> $self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator&(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator|(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const $self& other) const  -> $self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		
	};
	
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdVector<T, Arch>::$Property_One<> SimdVector<T, Arch>::One;
#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdVector<T, Arch>::$Property_Zero<> SimdVector<T, Arch>::Zero;
#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdMask<T, Arch>::$Property_True<> SimdMask<T, Arch>::True;
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
template<class T, class Arch> inline SimdMask<T, Arch>::$Property_False<> SimdMask<T, Arch>::False;
} namespace $extensions {
template<class __TT> struct $static_IsPositiveInfinity;
template<class __TT> struct $static_getIsPositiveInfinity;
template<class __TT> struct $static_Asinh;
template<class __TT> struct $static_getAsinh;
template<class __TT> struct $static_Pi;
template<class __TT> struct $static_getPi;
template<class __TT> struct $static_LessThanOrEqualAll;
template<class __TT> struct $static_getLessThanOrEqualAll;
template<class __TT> struct $static_Acosh;
template<class __TT> struct $static_getAcosh;
template<class __TT> struct $static_Reciprocal;
template<class __TT> struct $static_getReciprocal;
template<class __TT> struct $static_Atanh;
template<class __TT> struct $static_getAtanh;
template<class __TT> struct $static_Acos;
template<class __TT> struct $static_getAcos;
template<class __TT> struct $static_ToNative;
template<class __TT> struct $static_getToNative;
template<class __TT> struct $static_Ln;
template<class __TT> struct $static_getLn;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_Atan;
template<class __TT> struct $static_getAtan;
template<class __TT> struct $static_Asin;
template<class __TT> struct $static_getAsin;
template<class __TT> struct $static_NegativeInfinity;
template<class __TT> struct $static_getNegativeInfinity;
template<class __TT> struct $static_PositiveInfinity;
template<class __TT> struct $static_getPositiveInfinity;
template<class __TT> struct $static_Zero;
template<class __TT> struct $static_getZero;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_ScalarMask;
template<class __TT> struct $static_getScalarMask;
template<class __TT> struct $static_TrailingZeroCount;
template<class __TT> struct $static_getTrailingZeroCount;
template<class __TT> struct $static_data;
template<class __TT> struct $static_getdata;
template<class __TT> struct $static_UnsafeNarrowToInteger;
template<class __TT> struct $static_getUnsafeNarrowToInteger;
template<class __TT> struct $static_AccessViolationException;
template<class __TT> struct $static_getAccessViolationException;
template<class __TT> struct $static_LessThanAll;
template<class __TT> struct $static_getLessThanAll;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_All;
template<class __TT> struct $static_getAll;
template<class __TT> struct $static_Any;
template<class __TT> struct $static_getAny;
template<class __TT> struct $static_EqualsAll;
template<class __TT> struct $static_getEqualsAll;
template<class __TT> struct $static_EqualsAny;
template<class __TT> struct $static_getEqualsAny;
template<class __TT> struct $static_LessThanAny;
template<class __TT> struct $static_getLessThanAny;
template<class __TT> struct $static_GreaterThanAll;
template<class __TT> struct $static_getGreaterThanAll;
template<class __TT> struct $static_GreaterThanAny;
template<class __TT> struct $static_getGreaterThanAny;
template<class __TT> struct $static_LessThanOrEqualAny;
template<class __TT> struct $static_getLessThanOrEqualAny;
template<class __TT> struct $static_GreaterThanOrEqualAll;
template<class __TT> struct $static_getGreaterThanOrEqualAll;
template<class __TT> struct $static_GreaterThanOrEqualAny;
template<class __TT> struct $static_getGreaterThanOrEqualAny;
template<class __TT> struct $static_Create;
template<class __TT> struct $static_getCreate;
template<class __TT> struct $static_NaN;
template<class __TT> struct $static_getNaN;
template<class __TT> struct $static_IsZero;
template<class __TT> struct $static_getIsZero;
template<class __TT> struct $static_Count;
template<class __TT> struct $static_getCount;
template<class __TT> struct $static_FirstSet;
template<class __TT> struct $static_getFirstSet;
template<class __TT> struct $static_LastSet;
template<class __TT> struct $static_getLastSet;
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Function definitions
//###############################################################################

#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::SimdVector(typename SimdVector<T, Arch>::TNative reg) noexcept
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_UPCS(data)(_reg.$ref()) = reg;
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::operator typename SimdVector<T, Arch>::TNative() const noexcept
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.$ref())); 
	}
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::ToNative() const  -> const typename SimdVector<T, Arch>::TNative
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.$ref())); 
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U> inline auto SimdVector<T, Arch>::Create(U val)  -> const $self
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Broadcast<T, Arch>(Builtin::Cast<true, T>(val))); 
	}
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdVector<T, Arch>::Create(T val0, T val1, Ts... tail)  -> const $self
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template CreateFrom<Arch>(val0, val1, T{tail}...);
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FromMask(const typename SimdVector<T, Arch>::TMask& b)  -> const $self
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template FromMask<T, Arch>(b)); 
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const $self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard40{};
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.$ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template LoadAligned<T, Arch>(source);
	}
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const $self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Load<T, Arch>(source)); 
	}
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadUnsafe(const T& source)  -> const $self
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard53{};
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return Arch::template Load<T, Arch>((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard60{};
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(destination.$ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		Arch::StoreAligned((*this), destination);
	}
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Store(Builtin::Unsafe::__RawPtr<T> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Store((*this), destination)); 
	}
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreUnsafe(Builtin::MutableRef<T> __destination__) const  -> void
	{
		T& destination = __destination__;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard73{};
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
	template<class T, class Arch> template<int32_t... Indexes> inline auto SimdVector<T, Arch>::Swizzle() const  -> const $self
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template Swizzle<Indexes...>((*this))); 
	}
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(const $self& other) const noexcept -> const bool
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), other).$ref())); 
	}
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(const $self& other) const noexcept -> const bool
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), other).$ref())); 
	}
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(T other) const noexcept -> const bool
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), Create(other)).$ref())); 
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(T other) const noexcept -> const bool
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), Create(other)).$ref())); 
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAll(const $self& other) const noexcept -> const bool
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), other); 
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAny(const $self& other) const noexcept -> const bool
	{
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), other); 
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(const $self& other) const noexcept -> const bool
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_xor)((*this), other); 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(const $self& other) const noexcept -> const bool
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_xor)((*this), other); 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(T other) const noexcept -> const bool
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_xor)((*this), Create(other)); 
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(T other) const noexcept -> const bool
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_xor)((*this), Create(other)); 
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(const $self& other) const noexcept -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), other); 
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(const $self& other) const noexcept -> const bool
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), other); 
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)); 
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_lt_eq_xor)((*this), Create(other)); 
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(const $self& other) const noexcept -> const bool
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_xor)((*this), other); 
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(const $self& other) const noexcept -> const bool
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_xor)((*this), other); 
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(T other) const noexcept -> const bool
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_xor)((*this), Create(other)); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(T other) const noexcept -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_xor)((*this), Create(other)); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(const $self& other) const noexcept -> const bool
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), other); 
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(const $self& other) const noexcept -> const bool
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), other))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), other); 
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)); 
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.$ref());
	}
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)))> mask = ADV_UFCS(_operator_gt_eq_xor)((*this), Create(other)); 
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
	}
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+() const noexcept -> const $self
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-() const noexcept -> const $self
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Negate((*this))); 
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_not() const noexcept -> const $self
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseNot((*this))); 
	}
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(const $self& other)  -> $self&
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), other)); 
	}
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(T other)  -> $self&
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), $self::Create(other))); 
	}
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(const $self& other)  -> $self&
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), other)); 
	}
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(T other)  -> $self&
	{
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), $self::Create(other))); 
	}
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(const $self& other)  -> $self&
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Multiply((*this), other)); 
	}
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(T other)  -> $self&
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Multiply((*this), $self::Create(other))); 
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(const $self& other)  -> $self&
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Divide((*this), other)); 
	}
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(T other)  -> $self&
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Divide((*this), $self::Create(other))); 
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(const $self& other)  -> $self&
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Mod((*this), other);
	}
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(T other)  -> $self&
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Mod((*this), $self::Create(other));
	}
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(const $self& other)  -> $self&
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAnd((*this), other)); 
	}
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(T other)  -> $self&
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAnd((*this), $self::Create(other))); 
	}
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(const $self& other)  -> $self&
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseOr((*this), other)); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(T other)  -> $self&
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseOr((*this), $self::Create(other))); 
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(const $self& other)  -> $self&
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseXor((*this), other)); 
	}
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(T other)  -> $self&
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseXor((*this), $self::Create(other))); 
	}
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(const $self& other)  -> $self&
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::RightShift((*this), other);
	}
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(const $self& other)  -> $self&
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::LeftShift((*this), other);
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(Builtin::i32 shift)  -> $self&
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::RightShift((*this), shift);
	}
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(Builtin::i32 shift)  -> $self&
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::LeftShift((*this), shift);
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++()  -> $self&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Add((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++(int)  -> $self { auto copy = Builtin::New<$self>($self{*this}); operator++(); return copy; }
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--()  -> $self&
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::Subtract((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--(int)  -> $self { auto copy = Builtin::New<$self>($self{*this}); operator--(); return copy; }
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(const $self& other) const  -> const $self
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} += other); 
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(T other) const  -> const $self
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} += other); 
	}
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(const $self& other) const  -> const $self
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} -= other); 
	}
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(T other) const  -> const $self
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} -= other); 
	}
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(const $self& other) const  -> const $self
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} *= other); 
	}
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(T other) const  -> const $self
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} *= other); 
	}
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(const $self& other) const  -> const $self
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} /= other); 
	}
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(T other) const  -> const $self
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} /= other); 
	}
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(const $self& other) const  -> const $self
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} %= other); 
	}
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(T other) const  -> const $self
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} %= other); 
	}
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(const $self& other) const  -> const $self
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} &= other); 
	}
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(T other) const  -> const $self
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} &= other); 
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(const $self& other) const  -> const $self
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} |= other); 
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(T other) const  -> const $self
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} |= other); 
	}
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(const $self& other) const  -> const $self
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} ^= other); 
	}
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(T other) const  -> const $self
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} ^= other); 
	}
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(const $self& other) const  -> const $self
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} >>= other); 
	}
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(Builtin::i32 shift) const  -> const $self
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} >>= shift); 
	}
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(const $self& other) const  -> const $self
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} <<= other); 
	}
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(Builtin::i32 shift) const  -> const $self
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} <<= shift); 
	}
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), other)); 
	}
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), other)); 
	}
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Less((*this), other)); 
	}
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::LessOrEqual((*this), other)); 
	}
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Greater((*this), other)); 
	}
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_xor(const $self& other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::GreaterOrEqual((*this), other)); 
	}
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), $self::Create(other))); 
	}
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), $self::Create(other))); 
	}
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Less((*this), $self::Create(other))); 
	}
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::LessOrEqual((*this), $self::Create(other))); 
	}
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Greater((*this), $self::Create(other))); 
	}
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_xor(T other) const noexcept -> const SimdMask<T, Arch>
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::GreaterOrEqual((*this), $self::Create(other))); 
	}
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(const $self& other) const noexcept -> const bool
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EqualsAll)((*this).$ref(), other)); 
	}
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(T other) const noexcept -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(All)((*this).$ref(), other)); 
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(const $self& other) const noexcept -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(EqualsAll)((*this).$ref(), other)); 
	}
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(T other) const noexcept -> const bool
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(All)((*this).$ref(), other)); 
	}
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(const $self& other) const noexcept -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EqualsAny)((*this).$ref(), other)); 
	}
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(T other) const noexcept -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Any)((*this).$ref(), other)); 
	}
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(const $self& other) const noexcept -> const bool
	{
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(EqualsAny)((*this).$ref(), other)); 
	}
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(T other) const noexcept -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!ADV_UFCS(Any)((*this).$ref(), other)); 
	}
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(const $self& other) const noexcept -> const bool
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAll)((*this).$ref(), other)); 
	}
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(T other) const noexcept -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAll)((*this).$ref(), other)); 
	}
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(const $self& other) const noexcept -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAny)((*this).$ref(), other)); 
	}
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(T other) const noexcept -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanAny)((*this).$ref(), other)); 
	}
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(const $self& other) const noexcept -> const bool
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAll)((*this).$ref(), other)); 
	}
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(T other) const noexcept -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAll)((*this).$ref(), other)); 
	}
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(const $self& other) const noexcept -> const bool
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAny)((*this).$ref(), other)); 
	}
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(T other) const noexcept -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanAny)((*this).$ref(), other)); 
	}
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(const $self& other) const noexcept -> const bool
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAll)((*this).$ref(), other)); 
	}
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(T other) const noexcept -> const bool
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAll)((*this).$ref(), other)); 
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(const $self& other) const noexcept -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAny)((*this).$ref(), other)); 
	}
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(T other) const noexcept -> const bool
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LessThanOrEqualAny)((*this).$ref(), other)); 
	}
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(const $self& other) const noexcept -> const bool
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAll)((*this).$ref(), other)); 
	}
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(T other) const noexcept -> const bool
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAll)((*this).$ref(), other)); 
	}
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(const $self& other) const noexcept -> const bool
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAny)((*this).$ref(), other)); 
	}
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(T other) const noexcept -> const bool
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GreaterThanOrEqualAny)((*this).$ref(), other)); 
	}
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod() const noexcept -> const $self
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingNegate((*this))); 
	}
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne() const noexcept -> const $self
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictNegate((*this))); 
	}
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst() const noexcept -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingNegate((*this))); 
	}
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_eq(const $self& other)  -> $self&
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), other)); 
	}
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_eq(T other)  -> $self&
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), $self::Create(other))); 
	}
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or_eq(const $self& other)  -> $self&
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), other)); 
	}
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or_eq(T other)  -> $self&
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), $self::Create(other))); 
	}
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne_eq(const $self& other)  -> $self&
	{
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), other)); 
	}
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne_eq(T other)  -> $self&
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), $self::Create(other))); 
	}
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_eq(const $self& other)  -> $self&
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), other)); 
	}
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_eq(T other)  -> $self&
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), $self::Create(other))); 
	}
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or_eq(const $self& other)  -> $self&
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), other)); 
	}
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or_eq(T other)  -> $self&
	{
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), $self::Create(other))); 
	}
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne_eq(const $self& other)  -> $self&
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), other)); 
	}
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne_eq(T other)  -> $self&
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), $self::Create(other))); 
	}
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_eq(const $self& other)  -> $self&
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingMultiply((*this), other)); 
	}
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_eq(T other)  -> $self&
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingMultiply((*this), $self::Create(other))); 
	}
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne_eq(const $self& other)  -> $self&
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictMultiply((*this), other)); 
	}
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne_eq(T other)  -> $self&
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictMultiply((*this), $self::Create(other))); 
	}
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_eq(const $self& other)  -> $self&
	{
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingDivide((*this), other)); 
	}
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_eq(T other)  -> $self&
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingDivide((*this), $self::Create(other))); 
	}
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne_eq(const $self& other)  -> $self&
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictDivide((*this), other)); 
	}
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne_eq(T other)  -> $self&
	{
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictDivide((*this), $self::Create(other))); 
	}
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_eq(Builtin::i32 exp)  -> $self&
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::IPow((*this), exp)); 
	}
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_mod_eq(Builtin::i32 exp)  -> $self&
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingIPow((*this), exp)); 
	}
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_ne_eq(Builtin::i32 exp)  -> $self&
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictIPow((*this), exp)); 
	}
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul_eq(const $self& other)  -> $self&
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Real power operator is supported only for floating-point types");
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Pow((*this), other);
	}
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul_eq(T other)  -> $self&
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Real power operator is supported only for floating-point types");
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::Pow((*this), $self::Create(other));
	}
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_eq(const $self& other)  -> $self&
	{
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::WrappingMod((*this), other);
	}
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_eq(T other)  -> $self&
	{
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::WrappingMod((*this), $self::Create(other));
	}
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne_eq(const $self& other)  -> $self&
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::StrictMod((*this), other);
	}
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne_eq(T other)  -> $self&
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::StrictMod((*this), $self::Create(other));
	}
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(const $self& other)  -> $self&
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAndNot((*this), other)); 
	}
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(T other)  -> $self&
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::BitwiseAndNot((*this), $self::Create(other))); 
	}
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt_eq(const $self& other)  -> $self&
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::UnsignedRightShift((*this), other);
	}
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt_eq(Builtin::i32 shift)  -> $self&
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = Arch::UnsignedRightShift((*this), shift);
	}
#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod()  -> $self&
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingAdd((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_add_add_mod)($ref()); return copy; }
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_or()  -> $self&
	{
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingAdd((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_or_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_add_add_or)($ref()); return copy; }
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_ne()  -> $self&
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictAdd((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_ne_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_add_add_ne)($ref()); return copy; }
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_add_mod_qst()  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod()  -> $self&
	{
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::WrappingSubtract((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_sub_sub_mod)($ref()); return copy; }
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_or()  -> $self&
	{
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::SaturatingSubtract((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_or_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_sub_sub_or)($ref()); return copy; }
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_ne()  -> $self&
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = Arch::StrictSubtract((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_ne_postfix()  -> decltype(auto)  { auto copy = $ref(); ADV_UFCS(_operator_sub_sub_ne)($ref()); return copy; }
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_sub_mod_qst()  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), $self::Create(T{Builtin::i32(1)}))); 
	}
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod(const $self& other) const  -> const $self
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingAdd((*this), other)); 
	}
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod(T other) const  -> const $self
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingAdd((*this), $self::Create(other))); 
	}
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or(const $self& other) const  -> const $self
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingAdd((*this), other)); 
	}
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_or(T other) const  -> const $self
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingAdd((*this), $self::Create(other))); 
	}
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne(const $self& other) const  -> const $self
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictAdd((*this), other)); 
	}
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_ne(T other) const  -> const $self
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictAdd((*this), $self::Create(other))); 
	}
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), other)); 
	}
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_add_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingAdd((*this), $self::Create(other))); 
	}
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod(const $self& other) const  -> const $self
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingSubtract((*this), other)); 
	}
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod(T other) const  -> const $self
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingSubtract((*this), $self::Create(other))); 
	}
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or(const $self& other) const  -> const $self
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingSubtract((*this), other)); 
	}
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_or(T other) const  -> const $self
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SaturatingSubtract((*this), $self::Create(other))); 
	}
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne(const $self& other) const  -> const $self
	{
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictSubtract((*this), other)); 
	}
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_ne(T other) const  -> const $self
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictSubtract((*this), $self::Create(other))); 
	}
#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), other)); 
	}
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_sub_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingSubtract((*this), $self::Create(other))); 
	}
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod(const $self& other) const  -> const $self
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMultiply((*this), other)); 
	}
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod(T other) const  -> const $self
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMultiply((*this), $self::Create(other))); 
	}
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne(const $self& other) const  -> const $self
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMultiply((*this), other)); 
	}
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_ne(T other) const  -> const $self
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMultiply((*this), $self::Create(other))); 
	}
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMultiply((*this), other)); 
	}
#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMultiply((*this), $self::Create(other))); 
	}
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod(const $self& other) const  -> const $self
	{
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingDivide((*this), other)); 
	}
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod(T other) const  -> const $self
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingDivide((*this), $self::Create(other))); 
	}
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne(const $self& other) const  -> const $self
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictDivide((*this), other)); 
	}
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_ne(T other) const  -> const $self
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictDivide((*this), $self::Create(other))); 
	}
#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingDivide((*this), other)); 
	}
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_bsl_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingDivide((*this), $self::Create(other))); 
	}
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod(const $self& other) const  -> const $self
	{
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMod((*this), other)); 
	}
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod(T other) const  -> const $self
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingMod((*this), $self::Create(other))); 
	}
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne(const $self& other) const  -> const $self
	{
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMod((*this), other)); 
	}
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_ne(T other) const  -> const $self
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictMod((*this), $self::Create(other))); 
	}
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_qst(const $self& other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMod((*this), other)); 
	}
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mod_mod_qst(T other) const  -> const std::tuple<$self, SimdMask<T, Arch>>
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::OverflowingMod((*this), $self::Create(other))); 
	}
#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul(const $self& other) const  -> const $self
	{
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), other)); 
	}
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_mul_mul(T other) const  -> const $self
	{
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), $self::Create(other))); 
	}
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor(Builtin::i32 exp) const  -> const $self
	{
		#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IPow((*this), exp)); 
	}
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_mod(Builtin::i32 exp) const  -> const $self
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::WrappingIPow((*this), exp)); 
	}
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_xor_xor_ne(Builtin::i32 exp) const  -> const $self
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::StrictIPow((*this), exp)); 
	}
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(const $self& other) const  -> const $self
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseAndNot((*this), other)); 
	}
#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(T other) const  -> const $self
	{
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseAndNot((*this), $self::Create(other))); 
	}
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt(const $self& other) const  -> const $self
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::UnsignedRightShift((*this), other)); 
	}
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_gt_gt(Builtin::i32 shift) const  -> const $self
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::UnsignedRightShift((*this), ADV_USFCS((SimdVector<Builtin::i32, Arch>), Create)(shift))); 
	}
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(const $self& y, const $self& z) const  -> const $self
	{
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), y, z)); 
	}
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(const $self& y, T z) const  -> const $self
	{
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), y, Create(z))); 
	}
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(T y, const $self& z) const  -> const $self
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), Create(y), z)); 
	}
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplyAdd(T y, T z) const  -> const $self
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplyAdd((*this), Create(y), Create(z))); 
	}
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(const $self& y, const $self& z) const  -> const $self
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), y, z)); 
	}
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(const $self& y, T z) const  -> const $self
	{
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), y, Create(z))); 
	}
#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(T y, const $self& z) const  -> const $self
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), Create(y), z)); 
	}
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplyAdd(T y, T z) const  -> const $self
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplyAdd((*this), Create(y), Create(z))); 
	}
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(const $self& y, const $self& z) const  -> const $self
	{
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), y, z)); 
	}
#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(const $self& y, T z) const  -> const $self
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), y, Create(z))); 
	}
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(T y, const $self& z) const  -> const $self
	{
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), Create(y), z)); 
	}
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedMultiplySub(T y, T z) const  -> const $self
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedMultiplySub((*this), Create(y), Create(z))); 
	}
#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(const $self& y, const $self& z) const  -> const $self
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), y, z)); 
	}
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(const $self& y, T z) const  -> const $self
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), y, Create(z))); 
	}
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(T y, const $self& z) const  -> const $self
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), Create(y), z)); 
	}
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FusedNegatedMultiplySub(T y, T z) const  -> const $self
	{
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::FusedNegatedMultiplySub((*this), Create(y), Create(z))); 
	}
#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getOne()  -> $self 
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(1)})); 
	}
	
#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getZero()  -> $self 
	{
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(0)})); 
	}
	
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAbs() const  -> $self 
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Abs((*this))); 
	}
	
#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Min(const $self& other) const  -> const $self
	{
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Min((*this), other)); 
	}
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Max(const $self& other) const  -> const $self
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
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Clamp(const $self& min, const $self& max) const  -> const $self
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Clamp((*this), min, max)); 
	}
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Lerp(const $self& end, const $self& amount) const  -> const $self
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Lerp((*this), end, amount)); 
	}
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::ConditionalSelect(const typename SimdVector<T, Arch>::TMask& condition, const $self& trueBranch, const $self& falseBranch)  -> const $self
	{
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Select(condition, trueBranch, falseBranch)); 
	}
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> auto SimdVector<T, Arch>::getSign() const  -> $self 
	{
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ConditionalSelect(ADV_UFCS(_operator_gt_xor)((*this), Zero), One, Zero) - ConditionalSelect(ADV_UFCS(_operator_lt_xor)((*this), Zero), One, Zero);
	}
	
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> auto SimdVector<T, Arch>::CopySign(const $self& other) const  -> const $self
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "CopySign is only available for floating point types");
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Abs | Arch::BitOfSign(other);
	}
#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Midpoint(const $self& other) const  -> const $self
	{
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Average((*this), other)); 
	}
#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSqrt() const  -> $self 
	{
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Sqrt is only available for floating point types");
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::Sqrt((*this));
	}
	
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCbrt() const  -> $self 
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cbrt((*this))); 
	}
	
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Hypot(const $self& other) const  -> const $self
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Hypot((*this), other)); 
	}
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Root(const $self& other) const  -> const $self
	{
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Pow((*this), ADV_UPCS(Reciprocal)(other.$ref()))); 
	}
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Root(Builtin::i32 exp) const  -> const $self
	{
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return [&]() -> $self 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			auto __tmp__valid_516 = Builtin::Cast<false, std::decay_t<decltype(exp)>::$self>(exp);
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
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getReciprocalSqrt() const  -> $self 
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "ReciprocalSqrt is only available for floating point types");
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::ReciprocalSqrt((*this));
	}
	
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getReciprocal() const  -> $self 
	{
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Reciprocal is only available for floating point types");
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::Reciprocal((*this));
	}
	
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTruncate() const  -> $self 
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Truncate((*this))); 
	}
	
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCeil() const  -> $self 
	{
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ceil((*this))); 
	}
	
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getFloor() const  -> $self 
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Floor((*this))); 
	}
	
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getRound() const  -> $self 
	{
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Round((*this))); 
	}
	
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getRoundTiesEven() const  -> $self 
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::RoundTiesEven((*this))); 
	}
	
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getFractionalPart() const  -> $self 
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod)((*this), Truncate)); 
	}
	
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getToRadians() const  -> $self 
	{
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) * (ADV_USPCS(Pi, T)() / T{Builtin::i32(180)})); 
	}
	
#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getToDegrees() const  -> $self 
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) * (T{Builtin::i32(180)} / ADV_USPCS(Pi, T)())); 
	}
	
#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSin() const  -> $self 
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Sin((*this))); 
	}
	
#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCos() const  -> $self 
	{
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cos((*this))); 
	}
	
#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTan() const  -> $self 
	{
		#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Tan((*this))); 
	}
	
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCot() const  -> $self 
	{
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Tan.$ref())); 
	}
	
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSec() const  -> $self 
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Cos.$ref())); 
	}
	
#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCsc() const  -> $self 
	{
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Sin.$ref())); 
	}
	
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSinh() const  -> $self 
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Sinh((*this))); 
	}
	
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCosh() const  -> $self 
	{
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Cosh((*this))); 
	}
	
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getTanh() const  -> $self 
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Tanh((*this))); 
	}
	
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCoth() const  -> $self 
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Tanh.$ref())); 
	}
	
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getSech() const  -> $self 
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Cosh.$ref())); 
	}
	
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getCsch() const  -> $self 
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Reciprocal)(Sinh.$ref())); 
	}
	
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsin() const  -> $self 
	{
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Asin((*this))); 
	}
	
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcos() const  -> $self 
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Acos((*this))); 
	}
	
#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAtan() const  -> $self 
	{
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atan((*this))); 
	}
	
#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Atan2(const $self& denominator) const  -> const $self
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atan2((*this), denominator)); 
	}
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcot() const  -> $self 
	{
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(Reciprocal.$ref())); 
	}
	
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsec() const  -> $self 
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(Reciprocal.$ref())); 
	}
	
#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcsc() const  -> $self 
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(Reciprocal.$ref())); 
	}
	
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsinh() const  -> $self 
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Asinh((*this))); 
	}
	
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcosh() const  -> $self 
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Acosh((*this))); 
	}
	
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAtanh() const  -> $self 
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Atanh((*this))); 
	}
	
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcoth() const  -> $self 
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)(Reciprocal.$ref())); 
	}
	
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAsech() const  -> $self 
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)(Reciprocal.$ref())); 
	}
	
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAcsch() const  -> $self 
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)(Reciprocal.$ref())); 
	}
	
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLn() const  -> $self 
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ln((*this))); 
	}
	
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLnP1() const  -> $self 
	{
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Ln1P((*this))); 
	}
	
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog2() const  -> $self 
	{
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log2((*this))); 
	}
	
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog2P1() const  -> $self 
	{
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log2((*this) + One)); 
	}
	
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog10() const  -> $self 
	{
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log10((*this))); 
	}
	
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getLog10P1() const  -> $self 
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Log10((*this) + One)); 
	}
	
#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Log(const $self& base) const  -> const $self
	{
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		Builtin::Auto<decltype(Ln / ADV_UPCS(Ln)(base.$ref()))> z = Ln / ADV_UPCS(Ln)(base.$ref()); 
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		z = ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(base, One), Create(ADV_USPCS(NaN, T)()), z);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		z = ConditionalSelect((ADV_UFCS(_operator_ne_eq_xor)((*this), One)) & (ADV_UPCS(IsZero)(base.$ref()) | ADV_UPCS(IsPositiveInfinity)(base.$ref())), Create(ADV_USPCS(NaN, T)()), z);
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return z;
	}
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp() const  -> $self 
	{
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp((*this))); 
	}
	
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExpM1() const  -> $self 
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::ExpM1((*this))); 
	}
	
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp2() const  -> $self 
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp2((*this))); 
	}
	
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp2M1() const  -> $self 
	{
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp2((*this)) - One); 
	}
	
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp10() const  -> $self 
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Exp10((*this))); 
	}
	
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getExp10M1() const  -> $self 
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
		return ADV_UPCS(All)(mask.$ref());
	}
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Any(T val) const  -> const bool
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.$ref());
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
		return ADV_UPCS(Count)(mask.$ref());
	}
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::IndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(FirstSet)(mask.$ref());
	}
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LastIndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)((*this), val))> mask = ADV_UFCS(_operator_eq_eq_xor)((*this), val); 
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(LastSet)(mask.$ref());
	}
#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::SimdMask(typename SimdMask<T, Arch>::TNative reg) noexcept
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_UPCS(data)(_reg.$ref()) = reg;
	}
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::operator typename SimdMask<T, Arch>::TNative() const noexcept
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.$ref())); 
	}
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::ToNative() const  -> const typename SimdMask<T, Arch>::TNative
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.$ref())); 
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
		return Arch::template CreateMaskFrom<T, Arch, V...>(v...).$ref().ToNative();
	}
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Create(bool val)  -> const $self
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return MakeRegister(Builtin::MakeIndexSequence<Length - Builtin::u32(1U)>(), val);
	}
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdMask<T, Arch>::Create(bool val0, bool val1, Ts... tail)  -> const $self
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template CreateMaskFrom<T, Arch, Ts...>(val0, val1, bool{tail}...);
	}
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::FromScalarMask(Builtin::u64 mask)  -> const $self
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
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const $self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard706{};
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.$ref()) % Arch::Alignment != Builtin::i32(0)) [[unlikely]] {
			#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Arch::template LoadMask<T, Arch>(source);
	}
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const $self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template LoadMask<T, Arch>(source)); 
	}
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadUnsafe(const bool& source)  -> const $self
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard719{};
			#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return Arch::template LoadMask<T, Arch>((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Store(Builtin::Unsafe::__RawPtr<bool> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector$Protected__Unsafe;
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Store((*this), destination)); 
	}
#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::StoreUnsafe(Builtin::MutableRef<bool> __destination__) const  -> void
	{
		bool& destination = __destination__;
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard729{};
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
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getTrue()  -> $self 
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(true))); 
	}
	
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getFalse()  -> $self 
	{
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(false))); 
	}
	
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator==(const $self& other) const noexcept -> const bool
	{
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(All)(Arch::Equal((*this), other).$ref())); 
	}
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator!=(const $self& other) const noexcept -> const bool
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Any)(Arch::NotEqual((*this), other).$ref())); 
	}
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_eq_eq_xor(const $self& other) const noexcept -> const $self
	{
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::Equal((*this), other)); 
	}
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_ne_eq_xor(const $self& other) const noexcept -> const $self
	{
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::NotEqual((*this), other)); 
	}
#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_not() const noexcept -> const $self
	{
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::BitwiseNot((*this))); 
	}
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&=(const $self& other)  -> $self&
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseAnd((*this), other).$ref())); 
	}
#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|=(const $self& other)  -> $self&
	{
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseOr((*this), other).$ref())); 
	}
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^=(const $self& other)  -> $self&
	{
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(Arch::BitwiseXor((*this), other).$ref())); 
	}
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&(const $self& other) const  -> const $self
	{
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} &= other); 
	}
#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|(const $self& other) const  -> const $self
	{
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} |= other); 
	}
#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^(const $self& other) const  -> const $self
	{
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY($self{(*this)} ^= other); 
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
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt8($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i8, Arch>
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i8>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt16($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i16, Arch>
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i16>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i32, Arch>
	{
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i32>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsInt64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::i64, Arch>
	{
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::i64>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt8($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u8, Arch>
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u8>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt16($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u16, Arch>
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u16>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u32, Arch>
	{
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u32>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsUInt64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::u64, Arch>
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::u64>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat32($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::f32, Arch>
	{
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::f32>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getAsFloat64($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdVector<Builtin::f64, Arch>
	{
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::template BitwiseCast<Builtin::f64>($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNaN($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsNaN($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsInfinity($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsFinite($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsFinite($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositiveInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)($this, ADV_USPCS(PositiveInfinity, T)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegativeInfinity($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)($this, ADV_USPCS(NegativeInfinity, T)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsPositive($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_eq_xor)($this, ADV_USPCS(Zero, $extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsNegative($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_xor)($this, ADV_USPCS(Zero, $extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsZero($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_eq_eq_xor)($this, ADV_USPCS(Zero, $extension_SimdVector_630_SimdVector<T, Arch>)())); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsInteger($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsEvenInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsEvenInteger($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getIsOddInteger($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const SimdMask<T, Arch>
	{
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::IsOddInteger($this)); 
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getSinCos($extension_SimdVector_630_SimdVector<T, Arch> const& $this ) -> const std::tuple<$extension_SimdVector_630_SimdVector<T, Arch>, $extension_SimdVector_630_SimdVector<T, Arch>>
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Arch::SinCos($this)); 
	}
	} namespace System::Runtime::Intrinsics{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getFirstSet($extension_SimdVector_777_SimdMask<T, Arch> const& $this ) -> const Builtin::Nullable<Builtin::usize>
	{
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype($extension_SimdVector_777_SimdMask<T, Arch>::Length)> length = $extension_SimdVector_777_SimdMask<T, Arch>::Length;
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype(Builtin::usize(64U) - length)> unusedBits = Builtin::usize(64U) - length;
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)}))> lowMask = (length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)});
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::LeadingZeroCount(Builtin::u64{ADV_UPCS(ScalarMask)($this.$ref())}))> index = Builtin::LeadingZeroCount(Builtin::u64{ADV_UPCS(ScalarMask)($this.$ref())}); 
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Builtin::i32(64)) >= 0) {
			#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return index - unusedBits;
	}
	} namespace System::Runtime::Intrinsics{
} namespace $extensions { using namespace System::Runtime::Intrinsics;
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto getLastSet($extension_SimdVector_777_SimdMask<T, Arch> const& $this ) -> const Builtin::Nullable<Builtin::usize>
	{
		#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype($extension_SimdVector_777_SimdMask<T, Arch>::Length)> length = $extension_SimdVector_777_SimdMask<T, Arch>::Length;
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{length % Builtin::i32(64)}) : Builtin::u64(0ULL))> stop = (length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{length % Builtin::i32(64)}) : Builtin::u64(0ULL);
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::TrailingZeroCount(Builtin::u64{ADV_UPCS(ScalarMask)($this.$ref())} | stop))> index = Builtin::TrailingZeroCount(Builtin::u64{ADV_UPCS(ScalarMask)($this.$ref())} | stop); 
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> length) >= 0) {
			#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return length - Builtin::i32(1) - index;
	}
	} namespace System::Runtime::Intrinsics{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	

}