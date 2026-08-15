#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IFloatingPointMath.h"
#include "System/FloatingPointCategory.h"
using namespace System;

namespace System::Numerics {
namespace __Unsafe {} namespace __IFloatingPointIeee754$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFloatingPointIeee754;
class IFloatingPointIeee754$Unowned;
class IFloatingPointIeee754$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFloatingPointIeee754> = false;

namespace System::Numerics {
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_54069e0b9838224d = requires(typename __AnyType::$class t) { {t.Atan2(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Atan2($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_859b3e0841e1f8c2 = requires(typename __AnyType::$class t) { {t.Atan2Pi(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Atan2Pi($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_9b30cd1ef1295c83 = requires(typename __AnyType::$class t) { {t.FusedMultiplyAdd(std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {FusedMultiplyAdd($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_ccab7a526383a874 = requires(typename __AnyType::$class t) { {t.Ieee754Remainder(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Ieee754Remainder($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_073b7c871cff8bf4 = requires(typename __AnyType::$class t) { {t.Lerp(std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Lerp($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>(), std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_190460f8ad97c0ea = requires(typename __AnyType::$class t) { {t.ScaleB(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {ScaleB($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_Epsilon
} namespace $extensions { template<class _TT> struct $static_getEpsilon{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_Epsilon
#endif
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_getc4a5d8511d72768d = requires { __AnyType::$self::Epsilon; } || requires { { [] { using namespace $extensions; return $static_getEpsilon<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NegativeInfinity
} namespace $extensions { template<class _TT> struct $static_getNegativeInfinity{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NegativeInfinity
#endif
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_gete668a0a78e8c864a = requires { __AnyType::$self::NegativeInfinity; } || requires { { [] { using namespace $extensions; return $static_getNegativeInfinity<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_PositiveInfinity
} namespace $extensions { template<class _TT> struct $static_getPositiveInfinity{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_PositiveInfinity
#endif
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get473a091d72933e0a = requires { __AnyType::$self::PositiveInfinity; } || requires { { [] { using namespace $extensions; return $static_getPositiveInfinity<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NaN
} namespace $extensions { template<class _TT> struct $static_getNaN{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NaN
#endif
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get0ace6a81b87f44ca = requires { __AnyType::$self::NaN; } || requires { { [] { using namespace $extensions; return $static_getNaN<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NegativeZero
} namespace $extensions { template<class _TT> struct $static_getNegativeZero{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NegativeZero
#endif
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get30e49dbcbe73b118 = requires { __AnyType::$self::NegativeZero; } || requires { { [] { using namespace $extensions; return $static_getNegativeZero<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get89c0dabf5b64e81d = requires(typename __AnyType::$class t) { {t.getBitIncrement()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getBitIncrement($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get831b00d4fae60989 = requires(typename __AnyType::$class t) { {t.getBitDecrement()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getBitDecrement($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_getdda7b5921b2cefcc = requires(typename __AnyType::$class t) { {t.getILogB()} -> std::convertible_to<Builtin::i32>; } || requires(typename __AnyType::$self t) { {getILogB($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i32>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get5dcdea01ff7ff0b7 = requires(typename __AnyType::$class t) { {t.getReciprocalEstimate()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getReciprocalEstimate($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_getc344933e44b0ba95 = requires(typename __AnyType::$class t) { {t.getReciprocalSqrtEstimate()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getReciprocalSqrtEstimate($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_getba9fadde21e58f01 = requires(typename __AnyType::$class t) { {t.getCategory()} -> std::convertible_to<FloatingPointCategory>; } || requires(typename __AnyType::$self t) { {getCategory($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<FloatingPointCategory>; };
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get767f9fd9d3c9ac5a = requires(typename __AnyType::$class t) { {t.getGamma()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getGamma($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get91820912911f5114 = requires(typename __AnyType::$class t) { {t.getLnGamma()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLnGamma($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_geta9a6bf8180efdd80 = requires(typename __AnyType::$class t) { {t.getErf()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getErf($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $HasMethodImplementation_get36354c0e179608b9 = requires(typename __AnyType::$class t) { {t.getErfc()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getErfc($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	ADV_CHECK_INTERFACE(IFloatingPointMath, IFloatingPointMath);
	namespace $vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		struct $vtable_IFloatingPointIeee754 : public IFloatingPointMath::$vtable
		{
			using fn_54069e0b9838224d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> y);
			fn_54069e0b9838224d* fnptr_54069e0b9838224d;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_54069e0b9838224d(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> y) { ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(*static_cast<typename __AnyType::$class*>(obj), y)); }
			using fn_859b3e0841e1f8c2 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> y);
			fn_859b3e0841e1f8c2* fnptr_859b3e0841e1f8c2;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_859b3e0841e1f8c2(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> y) { ADV_EXPRESSION_BODY(ADV_UFCS(Atan2Pi)(*static_cast<typename __AnyType::$class*>(obj), y)); }
			using fn_9b30cd1ef1295c83 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend);
			fn_9b30cd1ef1295c83* fnptr_9b30cd1ef1295c83;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9b30cd1ef1295c83(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend) { ADV_EXPRESSION_BODY(ADV_UFCS(FusedMultiplyAdd)(*static_cast<typename __AnyType::$class*>(obj), rhs, addend)); }
			using fn_ccab7a526383a874 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ccab7a526383a874* fnptr_ccab7a526383a874;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ccab7a526383a874(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(Ieee754Remainder)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_073b7c871cff8bf4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount);
			fn_073b7c871cff8bf4* fnptr_073b7c871cff8bf4;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_073b7c871cff8bf4(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount) { ADV_EXPRESSION_BODY(ADV_UFCS(Lerp)(*static_cast<typename __AnyType::$class*>(obj), rhs, amount)); }
			using fn_190460f8ad97c0ea = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 n);
			fn_190460f8ad97c0ea* fnptr_190460f8ad97c0ea;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_190460f8ad97c0ea(Builtin::Object* obj, Builtin::i32 n) { ADV_EXPRESSION_BODY(ADV_UFCS(ScaleB)(*static_cast<typename __AnyType::$class*>(obj), n)); }
			using fn_getBitIncrement = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBitIncrement* fnptr_getBitIncrement;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBitIncrement(Builtin::Object* obj) { return ADV_UFCS(getBitIncrement)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getBitDecrement = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBitDecrement* fnptr_getBitDecrement;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBitDecrement(Builtin::Object* obj) { return ADV_UFCS(getBitDecrement)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getILogB = Builtin::i32(Builtin::Object*);
			fn_getILogB* fnptr_getILogB;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::i32 impl_getILogB(Builtin::Object* obj) { return ADV_UFCS(getILogB)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getReciprocalEstimate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReciprocalEstimate* fnptr_getReciprocalEstimate;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReciprocalEstimate(Builtin::Object* obj) { return ADV_UFCS(getReciprocalEstimate)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getReciprocalSqrtEstimate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReciprocalSqrtEstimate* fnptr_getReciprocalSqrtEstimate;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReciprocalSqrtEstimate(Builtin::Object* obj) { return ADV_UFCS(getReciprocalSqrtEstimate)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getCategory = FloatingPointCategory(Builtin::Object*);
			fn_getCategory* fnptr_getCategory;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static FloatingPointCategory impl_getCategory(Builtin::Object* obj) { return ADV_UFCS(getCategory)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getGamma = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getGamma* fnptr_getGamma;
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getGamma(Builtin::Object* obj) { return ADV_UFCS(getGamma)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLnGamma = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLnGamma* fnptr_getLnGamma;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLnGamma(Builtin::Object* obj) { return ADV_UFCS(getLnGamma)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getErf = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getErf* fnptr_getErf;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getErf(Builtin::Object* obj) { return ADV_UFCS(getErf)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getErfc = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getErfc* fnptr_getErfc;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getErfc(Builtin::Object* obj) { return ADV_UFCS(getErfc)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IFloatingPointIeee754 $vtable_IFloatingPointIeee754_for = {$vtable_IFloatingPointMath_for<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_54069e0b9838224d<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_859b3e0841e1f8c2<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_9b30cd1ef1295c83<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_ccab7a526383a874<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_073b7c871cff8bf4<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_190460f8ad97c0ea<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getBitIncrement<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getBitDecrement<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getILogB<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getReciprocalEstimate<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getReciprocalSqrtEstimate<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getCategory<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getGamma<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getLnGamma<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getErf<__AnyType>
		, &$vtables::$vtable_IFloatingPointIeee754::template impl_getErfc<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	template<class __AnyType> concept $ImplementsInterface_IFloatingPointIeee754 = $ImplementsInterface_IFloatingPointMath<__AnyType> && $HasMethodImplementation_54069e0b9838224d<__AnyType> && $HasMethodImplementation_859b3e0841e1f8c2<__AnyType> && $HasMethodImplementation_9b30cd1ef1295c83<__AnyType> && $HasMethodImplementation_ccab7a526383a874<__AnyType> && $HasMethodImplementation_073b7c871cff8bf4<__AnyType> && $HasMethodImplementation_190460f8ad97c0ea<__AnyType> && $HasMethodImplementation_getc4a5d8511d72768d<__AnyType> && $HasMethodImplementation_gete668a0a78e8c864a<__AnyType> && $HasMethodImplementation_get473a091d72933e0a<__AnyType> && $HasMethodImplementation_get0ace6a81b87f44ca<__AnyType> && $HasMethodImplementation_get30e49dbcbe73b118<__AnyType> && $HasMethodImplementation_get89c0dabf5b64e81d<__AnyType> && $HasMethodImplementation_get831b00d4fae60989<__AnyType> && $HasMethodImplementation_getdda7b5921b2cefcc<__AnyType> && $HasMethodImplementation_get5dcdea01ff7ff0b7<__AnyType> && $HasMethodImplementation_getc344933e44b0ba95<__AnyType> && $HasMethodImplementation_getba9fadde21e58f01<__AnyType> && $HasMethodImplementation_get767f9fd9d3c9ac5a<__AnyType> && $HasMethodImplementation_get91820912911f5114<__AnyType> && $HasMethodImplementation_geta9a6bf8180efdd80<__AnyType> && $HasMethodImplementation_get36354c0e179608b9<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	class IFloatingPointIeee754 final : public Builtin::InterfaceRef {
		public: using $self = IFloatingPointIeee754;
		public: using $vtable = $vtables::$vtable_IFloatingPointIeee754;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IFloatingPointIeee754$Unowned;
		friend class IFloatingPointIeee754$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IFloatingPointIeee754$Unowned;
		public: using $weak_ref = IFloatingPointIeee754$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IFloatingPointIeee754<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFloatingPointIeee754);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointIeee754(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointIeee754& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFloatingPointIeee754(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointIeee754(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IFloatingPointIeee754_for<__FixedType> } { static_assert($ImplementsInterface_IFloatingPointIeee754<__FixedType>, "Cannot initialize interface IFloatingPointIeee754 from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFloatingPointIeee754& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IFloatingPointIeee754<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointIeee754 from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPointIeee754_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointIeee754& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IFloatingPointIeee754<__FixedType>, "Cannot initialize interface IFloatingPointIeee754 from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IFloatingPointIeee754_for<__FixedType>; return *this; }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2(Builtin::OptionalStrongRef<Builtin::ObjectRef> y) const { ADV_EXPRESSION_BODY(_vtable->fnptr_54069e0b9838224d(_obj, y)); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2Pi(Builtin::OptionalStrongRef<Builtin::ObjectRef> y) const { ADV_EXPRESSION_BODY(_vtable->fnptr_859b3e0841e1f8c2(_obj, y)); }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> FusedMultiplyAdd(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend) const { ADV_EXPRESSION_BODY(_vtable->fnptr_9b30cd1ef1295c83(_obj, rhs, addend)); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Ieee754Remainder(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ccab7a526383a874(_obj, rhs)); }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Lerp(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_073b7c871cff8bf4(_obj, rhs, amount)); }
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ScaleB(Builtin::i32 n) const { ADV_EXPRESSION_BODY(_vtable->fnptr_190460f8ad97c0ea(_obj, n)); }
		
	};
	class IFloatingPointIeee754$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IFloatingPointIeee754$Unowned;
		public: using $vtable = $vtables::$vtable_IFloatingPointIeee754;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IFloatingPointIeee754;
		public: using $strong_ref = IFloatingPointIeee754;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IFloatingPointIeee754$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFloatingPointIeee754$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointIeee754$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFloatingPointIeee754$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IFloatingPointIeee754$Weak;
		public: using $vtable = $vtables::$vtable_IFloatingPointIeee754;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IFloatingPointIeee754;
		public: using $strong_ref = IFloatingPointIeee754;
		public: using $unowned_ref = IFloatingPointIeee754$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFloatingPointIeee754$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPointIeee754$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPointIeee754<__AnyType> IFloatingPointIeee754$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFloatingPointIeee754_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> y)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_54069e0b9838224d(Builtin::GetObjectReferenceFromInterface(&iface), y)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Atan2Pi(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> y)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_859b3e0841e1f8c2(Builtin::GetObjectReferenceFromInterface(&iface), y)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> FusedMultiplyAdd(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> addend)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9b30cd1ef1295c83(Builtin::GetObjectReferenceFromInterface(&iface), rhs, addend)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Ieee754Remainder(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ccab7a526383a874(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Lerp(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs, Builtin::OptionalStrongRef<Builtin::ObjectRef> amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_073b7c871cff8bf4(Builtin::GetObjectReferenceFromInterface(&iface), rhs, amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ScaleB(const __AnyInterface& iface, Builtin::i32 n)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_190460f8ad97c0ea(Builtin::GetObjectReferenceFromInterface(&iface), n)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBitIncrement(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBitIncrement(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBitDecrement(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBitDecrement(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::i32 getILogB(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getILogB(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReciprocalEstimate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReciprocalEstimate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReciprocalSqrtEstimate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReciprocalSqrtEstimate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const FloatingPointCategory getCategory(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCategory(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getGamma(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getGamma(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLnGamma(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLnGamma(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getErf(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getErf(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPointIeee754::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getErfc(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getErfc(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointIeee754.ast"
	

}