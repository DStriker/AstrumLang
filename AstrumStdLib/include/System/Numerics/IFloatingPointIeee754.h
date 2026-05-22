#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IFloatingPoint.h"
#include "IExponentialFunctions.h"
#include "IHyperbolicFunctions.h"
#include "ILogarithmicFunctions.h"
#include "ITrigonometricFunctions.h"
#include "IRootFunctions.h"
#include "IPowerOperators.h"
#include "System/FloatingPointCategory.h"
using namespace System;

namespace System::Numerics {
namespace __Unsafe {} namespace __IFloatingPointIeee754_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFloatingPointIeee754;
class IFloatingPointIeee754__Unowned;
class IFloatingPointIeee754__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFloatingPointIeee754> = false;

namespace System::Numerics {
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_54069e0b9838224d = requires(typename __AnyType::__class t) { {t.Atan2(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Atan2(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Atan2(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_859b3e0841e1f8c2 = requires(typename __AnyType::__class t) { {t.Atan2Pi(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Atan2Pi(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Atan2Pi(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_9b30cd1ef1295c83 = requires(typename __AnyType::__class t) { {t.FusedMultiplyAdd(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {FusedMultiplyAdd(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return FusedMultiplyAdd(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_ccab7a526383a874 = requires(typename __AnyType::__class t) { {t.Ieee754Remainder(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Ieee754Remainder(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Ieee754Remainder(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_073b7c871cff8bf4 = requires(typename __AnyType::__class t) { {t.Lerp(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Lerp(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Lerp(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_190460f8ad97c0ea = requires(typename __AnyType::__class t) { {t.ScaleB(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {ScaleB(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return ScaleB(std::declval<typename __AnyType::__self>(), std::declval<Builtin::i32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	} namespace __extensions { template<class _TT> struct __static_getEpsilon; } namespace System::Numerics {
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc4a5d8511d72768d = requires { __AnyType::__self::Epsilon; } || requires { [] { using namespace __extensions; __static_getEpsilon<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getNegativeInfinity; } namespace System::Numerics {
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_gete668a0a78e8c864a = requires { __AnyType::__self::NegativeInfinity; } || requires { [] { using namespace __extensions; __static_getNegativeInfinity<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getPositiveInfinity; } namespace System::Numerics {
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get473a091d72933e0a = requires { __AnyType::__self::PositiveInfinity; } || requires { [] { using namespace __extensions; __static_getPositiveInfinity<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getNaN; } namespace System::Numerics {
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get0ace6a81b87f44ca = requires { __AnyType::__self::NaN; } || requires { [] { using namespace __extensions; __static_getNaN<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getNegativeZero; } namespace System::Numerics {
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get30e49dbcbe73b118 = requires { __AnyType::__self::NegativeZero; } || requires { [] { using namespace __extensions; __static_getNegativeZero<typename __AnyType::__self>::get(); }(); };
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get89c0dabf5b64e81d = requires(typename __AnyType::__class t) { {t.getBitIncrement()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getBitIncrement(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get831b00d4fae60989 = requires(typename __AnyType::__class t) { {t.getBitDecrement()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getBitDecrement(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_getdda7b5921b2cefcc = requires(typename __AnyType::__class t) { {t.getILogB()} -> std::convertible_to<Builtin::i32>; } || requires(typename __AnyType::__self t) { {getILogB(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::i32>; };
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get5dcdea01ff7ff0b7 = requires(typename __AnyType::__class t) { {t.getReciprocalEstimate()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getReciprocalEstimate(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc344933e44b0ba95 = requires(typename __AnyType::__class t) { {t.getReciprocalSqrtEstimate()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getReciprocalSqrtEstimate(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_getba9fadde21e58f01 = requires(typename __AnyType::__class t) { {t.getCategory()} -> std::convertible_to<FloatingPointCategory>; } || requires(typename __AnyType::__self t) { {getCategory(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<FloatingPointCategory>; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get767f9fd9d3c9ac5a = requires(typename __AnyType::__class t) { {t.getGamma()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getGamma(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get91820912911f5114 = requires(typename __AnyType::__class t) { {t.getLnGamma()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getLnGamma(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_geta9a6bf8180efdd80 = requires(typename __AnyType::__class t) { {t.getErf()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getErf(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __HasMethodImplementation_get36354c0e179608b9 = requires(typename __AnyType::__class t) { {t.getErfc()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getErfc(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	namespace __vtables {
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		struct __vtable_IFloatingPointIeee754 : public IFloatingPoint::__vtable, public IExponentialFunctions::__vtable, public IHyperbolicFunctions::__vtable, public ILogarithmicFunctions::__vtable, public ITrigonometricFunctions::__vtable, public IRootFunctions::__vtable, public IPowerArithmetic::__vtable
		{
			using fn_54069e0b9838224d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> y);
			fn_54069e0b9838224d* fnptr_54069e0b9838224d;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_54069e0b9838224d(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> y) { ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(*static_cast<typename __AnyType::__class*>(obj), y)); }
			using fn_859b3e0841e1f8c2 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> y);
			fn_859b3e0841e1f8c2* fnptr_859b3e0841e1f8c2;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_859b3e0841e1f8c2(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> y) { ADV_EXPRESSION_BODY(ADV_UFCS(Atan2Pi)(*static_cast<typename __AnyType::__class*>(obj), y)); }
			using fn_9b30cd1ef1295c83 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend);
			fn_9b30cd1ef1295c83* fnptr_9b30cd1ef1295c83;
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9b30cd1ef1295c83(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend) { ADV_EXPRESSION_BODY(ADV_UFCS(FusedMultiplyAdd)(*static_cast<typename __AnyType::__class*>(obj), rhs, addend)); }
			using fn_ccab7a526383a874 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ccab7a526383a874* fnptr_ccab7a526383a874;
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ccab7a526383a874(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(Ieee754Remainder)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_073b7c871cff8bf4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount);
			fn_073b7c871cff8bf4* fnptr_073b7c871cff8bf4;
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_073b7c871cff8bf4(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount) { ADV_EXPRESSION_BODY(ADV_UFCS(Lerp)(*static_cast<typename __AnyType::__class*>(obj), rhs, amount)); }
			using fn_190460f8ad97c0ea = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 n);
			fn_190460f8ad97c0ea* fnptr_190460f8ad97c0ea;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_190460f8ad97c0ea(Builtin::Object* obj, Builtin::i32 n) { ADV_EXPRESSION_BODY(ADV_UFCS(ScaleB)(*static_cast<typename __AnyType::__class*>(obj), n)); }
			using fn_getBitIncrement = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBitIncrement* fnptr_getBitIncrement;
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBitIncrement(Builtin::Object* obj) { return ADV_UFCS(getBitIncrement)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getBitDecrement = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBitDecrement* fnptr_getBitDecrement;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBitDecrement(Builtin::Object* obj) { return ADV_UFCS(getBitDecrement)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getILogB = Builtin::i32(Builtin::Object*);
			fn_getILogB* fnptr_getILogB;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::i32 impl_getILogB(Builtin::Object* obj) { return ADV_UFCS(getILogB)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getReciprocalEstimate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReciprocalEstimate* fnptr_getReciprocalEstimate;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReciprocalEstimate(Builtin::Object* obj) { return ADV_UFCS(getReciprocalEstimate)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getReciprocalSqrtEstimate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReciprocalSqrtEstimate* fnptr_getReciprocalSqrtEstimate;
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReciprocalSqrtEstimate(Builtin::Object* obj) { return ADV_UFCS(getReciprocalSqrtEstimate)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCategory = FloatingPointCategory(Builtin::Object*);
			fn_getCategory* fnptr_getCategory;
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static FloatingPointCategory impl_getCategory(Builtin::Object* obj) { return ADV_UFCS(getCategory)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getGamma = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getGamma* fnptr_getGamma;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getGamma(Builtin::Object* obj) { return ADV_UFCS(getGamma)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getLnGamma = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLnGamma* fnptr_getLnGamma;
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLnGamma(Builtin::Object* obj) { return ADV_UFCS(getLnGamma)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getErf = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getErf* fnptr_getErf;
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getErf(Builtin::Object* obj) { return ADV_UFCS(getErf)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getErfc = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getErfc* fnptr_getErfc;
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getErfc(Builtin::Object* obj) { return ADV_UFCS(getErfc)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IFloatingPointIeee754 __vtable_IFloatingPointIeee754_for = {__vtable_IFloatingPoint_for<__AnyType>
		, __vtable_IExponentialFunctions_for<__AnyType>
		, __vtable_IHyperbolicFunctions_for<__AnyType>
		, __vtable_ILogarithmicFunctions_for<__AnyType>
		, __vtable_ITrigonometricFunctions_for<__AnyType>
		, __vtable_IRootFunctions_for<__AnyType>
		, __vtable_IPowerArithmetic_for<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_54069e0b9838224d<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_859b3e0841e1f8c2<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_9b30cd1ef1295c83<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_ccab7a526383a874<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_073b7c871cff8bf4<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_190460f8ad97c0ea<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getBitIncrement<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getBitDecrement<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getILogB<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getReciprocalEstimate<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getReciprocalSqrtEstimate<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getCategory<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getGamma<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getLnGamma<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getErf<__AnyType>
		, &__vtables::__vtable_IFloatingPointIeee754::template impl_getErfc<__AnyType>
		};
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept __ImplementsInterface_IFloatingPointIeee754 = __ImplementsInterface_IFloatingPoint<__AnyType> && __ImplementsInterface_IExponentialFunctions<__AnyType> && __ImplementsInterface_IHyperbolicFunctions<__AnyType> && __ImplementsInterface_ILogarithmicFunctions<__AnyType> && __ImplementsInterface_ITrigonometricFunctions<__AnyType> && __ImplementsInterface_IRootFunctions<__AnyType> && __ImplementsInterface_IPowerArithmetic<__AnyType> && __HasMethodImplementation_54069e0b9838224d<__AnyType> && __HasMethodImplementation_859b3e0841e1f8c2<__AnyType> && __HasMethodImplementation_9b30cd1ef1295c83<__AnyType> && __HasMethodImplementation_ccab7a526383a874<__AnyType> && __HasMethodImplementation_073b7c871cff8bf4<__AnyType> && __HasMethodImplementation_190460f8ad97c0ea<__AnyType> && __HasMethodImplementation_getc4a5d8511d72768d<__AnyType> && __HasMethodImplementation_gete668a0a78e8c864a<__AnyType> && __HasMethodImplementation_get473a091d72933e0a<__AnyType> && __HasMethodImplementation_get0ace6a81b87f44ca<__AnyType> && __HasMethodImplementation_get30e49dbcbe73b118<__AnyType> && __HasMethodImplementation_get89c0dabf5b64e81d<__AnyType> && __HasMethodImplementation_get831b00d4fae60989<__AnyType> && __HasMethodImplementation_getdda7b5921b2cefcc<__AnyType> && __HasMethodImplementation_get5dcdea01ff7ff0b7<__AnyType> && __HasMethodImplementation_getc344933e44b0ba95<__AnyType> && __HasMethodImplementation_getba9fadde21e58f01<__AnyType> && __HasMethodImplementation_get767f9fd9d3c9ac5a<__AnyType> && __HasMethodImplementation_get91820912911f5114<__AnyType> && __HasMethodImplementation_geta9a6bf8180efdd80<__AnyType> && __HasMethodImplementation_get36354c0e179608b9<__AnyType>;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	class IFloatingPointIeee754 final : public Builtin::InterfaceRef {
		public: using __self = IFloatingPointIeee754;
		public: using __vtable = __vtables::__vtable_IFloatingPointIeee754;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IFloatingPointIeee754__Unowned;
		friend class IFloatingPointIeee754__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IFloatingPointIeee754__Unowned;
		public: using __weak_ref = IFloatingPointIeee754__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IFloatingPointIeee754<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFloatingPointIeee754);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointIeee754(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointIeee754& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFloatingPointIeee754(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointIeee754(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IFloatingPointIeee754_for<__FixedType> } { static_assert(__ImplementsInterface_IFloatingPointIeee754<__FixedType>, "Cannot initialize interface IFloatingPointIeee754 from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFloatingPointIeee754& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointIeee754& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IFloatingPointIeee754<__FixedType>, "Cannot initialize interface IFloatingPointIeee754 from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IFloatingPointIeee754_for<__FixedType>; return *this; }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2(Builtin::OptionalStrongRef<Builtin::ObjectRef> y) const { ADV_EXPRESSION_BODY(_vtable->fnptr_54069e0b9838224d(_obj, y)); }
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2Pi(Builtin::OptionalStrongRef<Builtin::ObjectRef> y) const { ADV_EXPRESSION_BODY(_vtable->fnptr_859b3e0841e1f8c2(_obj, y)); }
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> FusedMultiplyAdd(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend) const { ADV_EXPRESSION_BODY(_vtable->fnptr_9b30cd1ef1295c83(_obj, rhs, addend)); }
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Ieee754Remainder(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ccab7a526383a874(_obj, rhs)); }
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Lerp(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_073b7c871cff8bf4(_obj, rhs, amount)); }
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ScaleB(Builtin::i32 n) const { ADV_EXPRESSION_BODY(_vtable->fnptr_190460f8ad97c0ea(_obj, n)); }
		
	};
	class IFloatingPointIeee754__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IFloatingPointIeee754__Unowned;
		public: using __vtable = __vtables::__vtable_IFloatingPointIeee754;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IFloatingPointIeee754;
		public: using __strong_ref = IFloatingPointIeee754;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IFloatingPointIeee754__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFloatingPointIeee754__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFloatingPointIeee754__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IFloatingPointIeee754__Weak;
		public: using __vtable = __vtables::__vtable_IFloatingPointIeee754;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IFloatingPointIeee754;
		public: using __strong_ref = IFloatingPointIeee754;
		public: using __unowned_ref = IFloatingPointIeee754__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFloatingPointIeee754__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointIeee754__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> y)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_54069e0b9838224d(Builtin::GetObjectReferenceFromInterface(&iface), y)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2Pi(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> y)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_859b3e0841e1f8c2(Builtin::GetObjectReferenceFromInterface(&iface), y)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> FusedMultiplyAdd(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9b30cd1ef1295c83(Builtin::GetObjectReferenceFromInterface(&iface), rhs, addend)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Ieee754Remainder(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ccab7a526383a874(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Lerp(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_073b7c871cff8bf4(Builtin::GetObjectReferenceFromInterface(&iface), rhs, amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ScaleB(const __AnyInterface& iface, Builtin::i32 n)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_190460f8ad97c0ea(Builtin::GetObjectReferenceFromInterface(&iface), n)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBitIncrement(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBitIncrement(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBitDecrement(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBitDecrement(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::i32 getILogB(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getILogB(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReciprocalEstimate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReciprocalEstimate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReciprocalSqrtEstimate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReciprocalSqrtEstimate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const FloatingPointCategory getCategory(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCategory(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getGamma(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getGamma(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLnGamma(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLnGamma(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getErf(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getErf(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPointIeee754::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getErfc(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getErfc(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	

}