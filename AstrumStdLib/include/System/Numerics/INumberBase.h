#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IAdditionOperators.h"
#include "IDecrementOperators.h"
#include "IDivisionOperators.h"
#include "System/IEquatable.h"
using namespace System;
#include "IIncrementOperators.h"
#include "IMultiplyOperators.h"
#include "ISubtractionOperators.h"
#include "IUnaryNegationOperators.h"
#include "IUnaryPlusOperators.h"
#include "System/Optional.h"
using namespace System;

namespace System::Numerics {
namespace __Unsafe {} namespace __INumberBase$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class INumberBase;
class INumberBase$Unowned;
class INumberBase$Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::INumberBase> = false;

namespace System::Numerics {
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_978f7f16e01f3d1b = requires(typename __AnyType::$class t) { {t.MaxMagnitude(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {MaxMagnitude($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_62e609ec66705d6a = requires(typename __AnyType::$class t) { {t.MaxMagnitudeNumber(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {MaxMagnitudeNumber($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_20ecc3e0351506a9 = requires(typename __AnyType::$class t) { {t.MinMagnitude(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {MinMagnitude($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_1aeabe4df53d9254 = requires(typename __AnyType::$class t) { {t.MinMagnitudeNumber(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {MinMagnitudeNumber($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_1d33091c10dbf9c6 = requires(typename __AnyType::$class t) { {t.Parse(std::declval<Builtin::Str>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Parse($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::Str>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_acffb75bb6826f81 = requires(typename __AnyType::$class t) { {t.TryParse(std::declval<Builtin::Str>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; }  || requires(typename __AnyType::$self t) { {TryParse($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::Str>())} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_c86de6bd6861da68 = requires(typename __AnyType::$class t) { {t.NarrowToInt8()} -> std::convertible_to<Builtin::i8>; }  || requires(typename __AnyType::$self t) { {NarrowToInt8($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i8>; };
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_32513b9225e74ea5 = requires(typename __AnyType::$class t) { {t.NarrowToUInt8()} -> std::convertible_to<Builtin::u8>; }  || requires(typename __AnyType::$self t) { {NarrowToUInt8($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u8>; };
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_f481e3d85e323d8f = requires(typename __AnyType::$class t) { {t.NarrowToInt16()} -> std::convertible_to<Builtin::i16>; }  || requires(typename __AnyType::$self t) { {NarrowToInt16($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i16>; };
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_676eda56681f2d74 = requires(typename __AnyType::$class t) { {t.NarrowToUInt16()} -> std::convertible_to<Builtin::u16>; }  || requires(typename __AnyType::$self t) { {NarrowToUInt16($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u16>; };
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_f4886fd85e379721 = requires(typename __AnyType::$class t) { {t.NarrowToInt32()} -> std::convertible_to<Builtin::i32>; }  || requires(typename __AnyType::$self t) { {NarrowToInt32($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i32>; };
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_6767ce566818fa62 = requires(typename __AnyType::$class t) { {t.NarrowToUInt32()} -> std::convertible_to<Builtin::u32>; }  || requires(typename __AnyType::$self t) { {NarrowToUInt32($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_f492e3d85e40b0c2 = requires(typename __AnyType::$class t) { {t.NarrowToInt64()} -> std::convertible_to<Builtin::i64>; }  || requires(typename __AnyType::$self t) { {NarrowToInt64($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i64>; };
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_675dde566810c10d = requires(typename __AnyType::$class t) { {t.NarrowToUInt64()} -> std::convertible_to<Builtin::u64>; }  || requires(typename __AnyType::$self t) { {NarrowToUInt64($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u64>; };
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_aae657a80f536c81 = requires(typename __AnyType::$class t) { {t.NarrowToInt128()} -> std::convertible_to<Builtin::i128>; }  || requires(typename __AnyType::$self t) { {NarrowToInt128($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i128>; };
	#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_e07cc4d2ecee86b0 = requires(typename __AnyType::$class t) { {t.NarrowToUInt128()} -> std::convertible_to<Builtin::u128>; }  || requires(typename __AnyType::$self t) { {NarrowToUInt128($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u128>; };
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_d54740f69198dc1b = requires(typename __AnyType::$class t) { {t.NarrowToIsize()} -> std::convertible_to<Builtin::isize>; }  || requires(typename __AnyType::$self t) { {NarrowToIsize($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::isize>; };
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_a634c951e7138c4f = requires(typename __AnyType::$class t) { {t.NarrowToUsize()} -> std::convertible_to<Builtin::usize>; }  || requires(typename __AnyType::$self t) { {NarrowToUsize($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::usize>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_One
} namespace $extensions { template<class _TT> struct $static_getOne{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_One
#endif
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd663e12ebc1938df = requires { __AnyType::$self::One; } || requires { { [] { using namespace $extensions; return $static_getOne<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_Zero
} namespace $extensions { template<class _TT> struct $static_getZero{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_Zero
#endif
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get7e8f710ba2db3d53 = requires { __AnyType::$self::Zero; } || requires { { [] { using namespace $extensions; return $static_getZero<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_Radix
} namespace $extensions { template<class _TT> struct $static_getRadix{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_Radix
#endif
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get42650a92badb6a61 = requires { __AnyType::$self::Radix; } || requires { { [] { using namespace $extensions; return $static_getRadix<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_geta0ee092e9d654ccb = requires(typename __AnyType::$class t) { {t.getAbs()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getAbs($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get9438e628f2cb3b45 = requires(typename __AnyType::$class t) { {t.getIsCanonical()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsCanonical($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get230d886f608c02b6 = requires(typename __AnyType::$class t) { {t.getIsComplexNumber()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsComplexNumber($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get73721e0ed901c121 = requires(typename __AnyType::$class t) { {t.getIsEvenInteger()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsEvenInteger($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_geta8117ec6e1fe32c6 = requires(typename __AnyType::$class t) { {t.getIsFinite()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsFinite($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get60e3b567547e9853 = requires(typename __AnyType::$class t) { {t.getIsImaginaryNumber()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsImaginaryNumber($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get38f9dd49333f21b9 = requires(typename __AnyType::$class t) { {t.getIsInfinity()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsInfinity($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get0ea146504dcbfa05 = requires(typename __AnyType::$class t) { {t.getIsInteger()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsInteger($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get5f408aeda8497f1a = requires(typename __AnyType::$class t) { {t.getIsNaN()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsNaN($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd9dc0da056c5aa5a = requires(typename __AnyType::$class t) { {t.getIsNegative()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsNegative($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get96918d89f42ea67a = requires(typename __AnyType::$class t) { {t.getIsNegativeInfinity()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsNegativeInfinity($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get9ff5231a679c8272 = requires(typename __AnyType::$class t) { {t.getIsNormal()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsNormal($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_getf9571e8ebfbeaed8 = requires(typename __AnyType::$class t) { {t.getIsOddInteger()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsOddInteger($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get76ef051a24f6905a = requires(typename __AnyType::$class t) { {t.getIsPositive()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsPositive($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_getfcd4287a64f84c7a = requires(typename __AnyType::$class t) { {t.getIsPositiveInfinity()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsPositiveInfinity($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get803cad5313c9a5d8 = requires(typename __AnyType::$class t) { {t.getIsRealNumber()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsRealNumber($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_geta4b6c9b686c19122 = requires(typename __AnyType::$class t) { {t.getIsSubnormal()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsSubnormal($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $HasMethodImplementation_get81289b7b9d81d383 = requires(typename __AnyType::$class t) { {t.getIsZero()} -> std::convertible_to<bool>; } || requires(typename __AnyType::$self t) { {getIsZero($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IAdditiveArithmetic, IAdditiveArithmetic);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IDecrementable, IDecrementable);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IDivisibleArithmetic, IDivisibleArithmetic);
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IIncrementable, IIncrementable);
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IMultiplicativeArithmetic, IMultiplicativeArithmetic);
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(ISubtractableArithmetic, ISubtractableArithmetic);
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IUnaryPlus, IUnaryPlus);
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	ADV_CHECK_INTERFACE(IUnaryNegatable, IUnaryNegatable);
	namespace $vtables {
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		struct $vtable_INumberBase : public IAdditiveArithmetic::$vtable, public IDecrementable::$vtable, public IDivisibleArithmetic::$vtable, public ISelfEquatable::$vtable, public IIncrementable::$vtable, public IMultiplicativeArithmetic::$vtable, public ISubtractableArithmetic::$vtable, public IUnaryPlus::$vtable, public IUnaryNegatable::$vtable
		{
			using fn_978f7f16e01f3d1b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_978f7f16e01f3d1b* fnptr_978f7f16e01f3d1b;
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_978f7f16e01f3d1b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitude)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_62e609ec66705d6a = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_62e609ec66705d6a* fnptr_62e609ec66705d6a;
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_62e609ec66705d6a(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MaxMagnitudeNumber)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_20ecc3e0351506a9 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_20ecc3e0351506a9* fnptr_20ecc3e0351506a9;
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_20ecc3e0351506a9(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitude)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_1aeabe4df53d9254 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_1aeabe4df53d9254* fnptr_1aeabe4df53d9254;
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_1aeabe4df53d9254(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MinMagnitudeNumber)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_1d33091c10dbf9c6 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::Str input);
			fn_1d33091c10dbf9c6* fnptr_1d33091c10dbf9c6;
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_1d33091c10dbf9c6(Builtin::Object* obj, Builtin::Str input) { ADV_EXPRESSION_BODY(ADV_UFCS(Parse)(*static_cast<typename __AnyType::$class*>(obj), input)); }
			using fn_acffb75bb6826f81 = const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::Str input);
			fn_acffb75bb6826f81* fnptr_acffb75bb6826f81;
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_acffb75bb6826f81(Builtin::Object* obj, Builtin::Str input) { ADV_EXPRESSION_BODY(ADV_UFCS(TryParse)(*static_cast<typename __AnyType::$class*>(obj), input)); }
			using fn_c86de6bd6861da68 = const Builtin::i8(Builtin::Object*);
			fn_c86de6bd6861da68* fnptr_c86de6bd6861da68;
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::i8 impl_c86de6bd6861da68(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToInt8)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_32513b9225e74ea5 = const Builtin::u8(Builtin::Object*);
			fn_32513b9225e74ea5* fnptr_32513b9225e74ea5;
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::u8 impl_32513b9225e74ea5(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUInt8)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_f481e3d85e323d8f = const Builtin::i16(Builtin::Object*);
			fn_f481e3d85e323d8f* fnptr_f481e3d85e323d8f;
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::i16 impl_f481e3d85e323d8f(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToInt16)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_676eda56681f2d74 = const Builtin::u16(Builtin::Object*);
			fn_676eda56681f2d74* fnptr_676eda56681f2d74;
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::u16 impl_676eda56681f2d74(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUInt16)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_f4886fd85e379721 = const Builtin::i32(Builtin::Object*);
			fn_f4886fd85e379721* fnptr_f4886fd85e379721;
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::i32 impl_f4886fd85e379721(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToInt32)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_6767ce566818fa62 = const Builtin::u32(Builtin::Object*);
			fn_6767ce566818fa62* fnptr_6767ce566818fa62;
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::u32 impl_6767ce566818fa62(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUInt32)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_f492e3d85e40b0c2 = const Builtin::i64(Builtin::Object*);
			fn_f492e3d85e40b0c2* fnptr_f492e3d85e40b0c2;
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::i64 impl_f492e3d85e40b0c2(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToInt64)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_675dde566810c10d = const Builtin::u64(Builtin::Object*);
			fn_675dde566810c10d* fnptr_675dde566810c10d;
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::u64 impl_675dde566810c10d(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUInt64)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_aae657a80f536c81 = const Builtin::i128(Builtin::Object*);
			fn_aae657a80f536c81* fnptr_aae657a80f536c81;
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::i128 impl_aae657a80f536c81(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToInt128)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_e07cc4d2ecee86b0 = const Builtin::u128(Builtin::Object*);
			fn_e07cc4d2ecee86b0* fnptr_e07cc4d2ecee86b0;
			#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::u128 impl_e07cc4d2ecee86b0(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUInt128)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_d54740f69198dc1b = const Builtin::isize(Builtin::Object*);
			fn_d54740f69198dc1b* fnptr_d54740f69198dc1b;
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::isize impl_d54740f69198dc1b(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToIsize)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_a634c951e7138c4f = const Builtin::usize(Builtin::Object*);
			fn_a634c951e7138c4f* fnptr_a634c951e7138c4f;
			#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static const Builtin::usize impl_a634c951e7138c4f(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(NarrowToUsize)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_getAbs = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAbs* fnptr_getAbs;
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAbs(Builtin::Object* obj) { return ADV_UFCS(getAbs)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsCanonical = bool(Builtin::Object*);
			fn_getIsCanonical* fnptr_getIsCanonical;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsCanonical(Builtin::Object* obj) { return ADV_UFCS(getIsCanonical)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsComplexNumber = bool(Builtin::Object*);
			fn_getIsComplexNumber* fnptr_getIsComplexNumber;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsComplexNumber(Builtin::Object* obj) { return ADV_UFCS(getIsComplexNumber)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsEvenInteger = bool(Builtin::Object*);
			fn_getIsEvenInteger* fnptr_getIsEvenInteger;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsEvenInteger(Builtin::Object* obj) { return ADV_UFCS(getIsEvenInteger)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsFinite = bool(Builtin::Object*);
			fn_getIsFinite* fnptr_getIsFinite;
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsFinite(Builtin::Object* obj) { return ADV_UFCS(getIsFinite)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsImaginaryNumber = bool(Builtin::Object*);
			fn_getIsImaginaryNumber* fnptr_getIsImaginaryNumber;
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsImaginaryNumber(Builtin::Object* obj) { return ADV_UFCS(getIsImaginaryNumber)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsInfinity = bool(Builtin::Object*);
			fn_getIsInfinity* fnptr_getIsInfinity;
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsInfinity(Builtin::Object* obj) { return ADV_UFCS(getIsInfinity)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsInteger = bool(Builtin::Object*);
			fn_getIsInteger* fnptr_getIsInteger;
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsInteger(Builtin::Object* obj) { return ADV_UFCS(getIsInteger)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsNaN = bool(Builtin::Object*);
			fn_getIsNaN* fnptr_getIsNaN;
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsNaN(Builtin::Object* obj) { return ADV_UFCS(getIsNaN)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsNegative = bool(Builtin::Object*);
			fn_getIsNegative* fnptr_getIsNegative;
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsNegative(Builtin::Object* obj) { return ADV_UFCS(getIsNegative)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsNegativeInfinity = bool(Builtin::Object*);
			fn_getIsNegativeInfinity* fnptr_getIsNegativeInfinity;
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsNegativeInfinity(Builtin::Object* obj) { return ADV_UFCS(getIsNegativeInfinity)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsNormal = bool(Builtin::Object*);
			fn_getIsNormal* fnptr_getIsNormal;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsNormal(Builtin::Object* obj) { return ADV_UFCS(getIsNormal)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsOddInteger = bool(Builtin::Object*);
			fn_getIsOddInteger* fnptr_getIsOddInteger;
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsOddInteger(Builtin::Object* obj) { return ADV_UFCS(getIsOddInteger)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsPositive = bool(Builtin::Object*);
			fn_getIsPositive* fnptr_getIsPositive;
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsPositive(Builtin::Object* obj) { return ADV_UFCS(getIsPositive)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsPositiveInfinity = bool(Builtin::Object*);
			fn_getIsPositiveInfinity* fnptr_getIsPositiveInfinity;
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsPositiveInfinity(Builtin::Object* obj) { return ADV_UFCS(getIsPositiveInfinity)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsRealNumber = bool(Builtin::Object*);
			fn_getIsRealNumber* fnptr_getIsRealNumber;
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsRealNumber(Builtin::Object* obj) { return ADV_UFCS(getIsRealNumber)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsSubnormal = bool(Builtin::Object*);
			fn_getIsSubnormal* fnptr_getIsSubnormal;
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsSubnormal(Builtin::Object* obj) { return ADV_UFCS(getIsSubnormal)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsZero = bool(Builtin::Object*);
			fn_getIsZero* fnptr_getIsZero;
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
			template<class __AnyType> static bool impl_getIsZero(Builtin::Object* obj) { return ADV_UFCS(getIsZero)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_INumberBase $vtable_INumberBase_for = {$vtable_IAdditiveArithmetic_for<__AnyType>
		, $vtable_IDecrementable_for<__AnyType>
		, $vtable_IDivisibleArithmetic_for<__AnyType>
		, $vtable_ISelfEquatable_for<__AnyType>
		, $vtable_IIncrementable_for<__AnyType>
		, $vtable_IMultiplicativeArithmetic_for<__AnyType>
		, $vtable_ISubtractableArithmetic_for<__AnyType>
		, $vtable_IUnaryPlus_for<__AnyType>
		, $vtable_IUnaryNegatable_for<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_978f7f16e01f3d1b<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_62e609ec66705d6a<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_20ecc3e0351506a9<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_1aeabe4df53d9254<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_1d33091c10dbf9c6<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_acffb75bb6826f81<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_c86de6bd6861da68<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_32513b9225e74ea5<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_f481e3d85e323d8f<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_676eda56681f2d74<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_f4886fd85e379721<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_6767ce566818fa62<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_f492e3d85e40b0c2<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_675dde566810c10d<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_aae657a80f536c81<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_e07cc4d2ecee86b0<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_d54740f69198dc1b<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_a634c951e7138c4f<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getAbs<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsCanonical<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsComplexNumber<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsEvenInteger<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsFinite<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsImaginaryNumber<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsInfinity<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsInteger<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsNaN<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsNegative<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsNegativeInfinity<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsNormal<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsOddInteger<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsPositive<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsPositiveInfinity<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsRealNumber<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsSubnormal<__AnyType>
		, &$vtables::$vtable_INumberBase::template impl_getIsZero<__AnyType>
		};
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	template<class __AnyType> concept $ImplementsInterface_INumberBase = $ImplementsInterface_IAdditiveArithmetic<__AnyType> && $ImplementsInterface_IDecrementable<__AnyType> && $ImplementsInterface_IDivisibleArithmetic<__AnyType> && $ImplementsInterface_ISelfEquatable<__AnyType> && $ImplementsInterface_IIncrementable<__AnyType> && $ImplementsInterface_IMultiplicativeArithmetic<__AnyType> && $ImplementsInterface_ISubtractableArithmetic<__AnyType> && $ImplementsInterface_IUnaryPlus<__AnyType> && $ImplementsInterface_IUnaryNegatable<__AnyType> && $HasMethodImplementation_978f7f16e01f3d1b<__AnyType> && $HasMethodImplementation_62e609ec66705d6a<__AnyType> && $HasMethodImplementation_20ecc3e0351506a9<__AnyType> && $HasMethodImplementation_1aeabe4df53d9254<__AnyType> && $HasMethodImplementation_1d33091c10dbf9c6<__AnyType> && $HasMethodImplementation_acffb75bb6826f81<__AnyType> && $HasMethodImplementation_c86de6bd6861da68<__AnyType> && $HasMethodImplementation_32513b9225e74ea5<__AnyType> && $HasMethodImplementation_f481e3d85e323d8f<__AnyType> && $HasMethodImplementation_676eda56681f2d74<__AnyType> && $HasMethodImplementation_f4886fd85e379721<__AnyType> && $HasMethodImplementation_6767ce566818fa62<__AnyType> && $HasMethodImplementation_f492e3d85e40b0c2<__AnyType> && $HasMethodImplementation_675dde566810c10d<__AnyType> && $HasMethodImplementation_aae657a80f536c81<__AnyType> && $HasMethodImplementation_e07cc4d2ecee86b0<__AnyType> && $HasMethodImplementation_d54740f69198dc1b<__AnyType> && $HasMethodImplementation_a634c951e7138c4f<__AnyType> && $HasMethodImplementation_getd663e12ebc1938df<__AnyType> && $HasMethodImplementation_get7e8f710ba2db3d53<__AnyType> && $HasMethodImplementation_get42650a92badb6a61<__AnyType> && $HasMethodImplementation_geta0ee092e9d654ccb<__AnyType> && $HasMethodImplementation_get9438e628f2cb3b45<__AnyType> && $HasMethodImplementation_get230d886f608c02b6<__AnyType> && $HasMethodImplementation_get73721e0ed901c121<__AnyType> && $HasMethodImplementation_geta8117ec6e1fe32c6<__AnyType> && $HasMethodImplementation_get60e3b567547e9853<__AnyType> && $HasMethodImplementation_get38f9dd49333f21b9<__AnyType> && $HasMethodImplementation_get0ea146504dcbfa05<__AnyType> && $HasMethodImplementation_get5f408aeda8497f1a<__AnyType> && $HasMethodImplementation_getd9dc0da056c5aa5a<__AnyType> && $HasMethodImplementation_get96918d89f42ea67a<__AnyType> && $HasMethodImplementation_get9ff5231a679c8272<__AnyType> && $HasMethodImplementation_getf9571e8ebfbeaed8<__AnyType> && $HasMethodImplementation_get76ef051a24f6905a<__AnyType> && $HasMethodImplementation_getfcd4287a64f84c7a<__AnyType> && $HasMethodImplementation_get803cad5313c9a5d8<__AnyType> && $HasMethodImplementation_geta4b6c9b686c19122<__AnyType> && $HasMethodImplementation_get81289b7b9d81d383<__AnyType>;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	class INumberBase final : public Builtin::InterfaceRef {
		public: using $self = INumberBase;
		public: using $vtable = $vtables::$vtable_INumberBase;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class INumberBase$Unowned;
		friend class INumberBase$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = INumberBase$Unowned;
		public: using $weak_ref = INumberBase$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_INumberBase<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(INumberBase);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		INumberBase(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		INumberBase& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> INumberBase(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_INumberBase<std::decay_t<__AnyType>>,"Cannot initialize interface INumberBase from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_INumberBase_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> INumberBase(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_INumberBase<std::decay_t<__AnyType>>,"Cannot initialize interface INumberBase from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_INumberBase_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> INumberBase(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_INumberBase_for<__FixedType> } { static_assert($ImplementsInterface_INumberBase<__FixedType>, "Cannot initialize interface INumberBase from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> INumberBase& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_INumberBase<std::decay_t<__AnyType>>,"Cannot initialize interface INumberBase from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_INumberBase_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> INumberBase& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_INumberBase<std::decay_t<__AnyType>>,"Cannot initialize interface INumberBase from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_INumberBase_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> INumberBase& operator=(__AnyType&& value) { static_assert($ImplementsInterface_INumberBase<__FixedType>, "Cannot initialize interface INumberBase from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_INumberBase_for<__FixedType>; return *this; }
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxMagnitude(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_978f7f16e01f3d1b(_obj, rhs)); }
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxMagnitudeNumber(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_62e609ec66705d6a(_obj, rhs)); }
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinMagnitude(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_20ecc3e0351506a9(_obj, rhs)); }
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinMagnitudeNumber(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_1aeabe4df53d9254(_obj, rhs)); }
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Parse(Builtin::Str input) const { ADV_EXPRESSION_BODY(_vtable->fnptr_1d33091c10dbf9c6(_obj, input)); }
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> TryParse(Builtin::Str input) const { ADV_EXPRESSION_BODY(_vtable->fnptr_acffb75bb6826f81(_obj, input)); }
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::i8 NarrowToInt8() const { ADV_EXPRESSION_BODY(_vtable->fnptr_c86de6bd6861da68(_obj)); }
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::u8 NarrowToUInt8() const { ADV_EXPRESSION_BODY(_vtable->fnptr_32513b9225e74ea5(_obj)); }
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::i16 NarrowToInt16() const { ADV_EXPRESSION_BODY(_vtable->fnptr_f481e3d85e323d8f(_obj)); }
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::u16 NarrowToUInt16() const { ADV_EXPRESSION_BODY(_vtable->fnptr_676eda56681f2d74(_obj)); }
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::i32 NarrowToInt32() const { ADV_EXPRESSION_BODY(_vtable->fnptr_f4886fd85e379721(_obj)); }
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::u32 NarrowToUInt32() const { ADV_EXPRESSION_BODY(_vtable->fnptr_6767ce566818fa62(_obj)); }
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::i64 NarrowToInt64() const { ADV_EXPRESSION_BODY(_vtable->fnptr_f492e3d85e40b0c2(_obj)); }
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::u64 NarrowToUInt64() const { ADV_EXPRESSION_BODY(_vtable->fnptr_675dde566810c10d(_obj)); }
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::i128 NarrowToInt128() const { ADV_EXPRESSION_BODY(_vtable->fnptr_aae657a80f536c81(_obj)); }
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::u128 NarrowToUInt128() const { ADV_EXPRESSION_BODY(_vtable->fnptr_e07cc4d2ecee86b0(_obj)); }
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::isize NarrowToIsize() const { ADV_EXPRESSION_BODY(_vtable->fnptr_d54740f69198dc1b(_obj)); }
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
		public: FORCE_INLINE const Builtin::usize NarrowToUsize() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a634c951e7138c4f(_obj)); }
		
	};
	class INumberBase$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = INumberBase$Unowned;
		public: using $vtable = $vtables::$vtable_INumberBase;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class INumberBase;
		public: using $strong_ref = INumberBase;
		public: using $unowned_ref = $self;
		public: using $weak_ref = INumberBase$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(INumberBase$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> INumberBase$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> INumberBase$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> INumberBase$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> INumberBase$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class INumberBase$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = INumberBase$Weak;
		public: using $vtable = $vtables::$vtable_INumberBase;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class INumberBase;
		public: using $strong_ref = INumberBase;
		public: using $unowned_ref = INumberBase$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(INumberBase$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		INumberBase$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> INumberBase$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_INumberBase<__AnyType> INumberBase$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_INumberBase_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxMagnitude(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_978f7f16e01f3d1b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxMagnitudeNumber(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_62e609ec66705d6a(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinMagnitude(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_20ecc3e0351506a9(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinMagnitudeNumber(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_1aeabe4df53d9254(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Parse(const __AnyInterface& iface, Builtin::Str input)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_1d33091c10dbf9c6(Builtin::GetObjectReferenceFromInterface(&iface), input)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> TryParse(const __AnyInterface& iface, Builtin::Str input)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_acffb75bb6826f81(Builtin::GetObjectReferenceFromInterface(&iface), input)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::i8 NarrowToInt8(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c86de6bd6861da68(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::u8 NarrowToUInt8(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_32513b9225e74ea5(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::i16 NarrowToInt16(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f481e3d85e323d8f(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::u16 NarrowToUInt16(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_676eda56681f2d74(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::i32 NarrowToInt32(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f4886fd85e379721(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::u32 NarrowToUInt32(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6767ce566818fa62(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::i64 NarrowToInt64(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f492e3d85e40b0c2(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::u64 NarrowToUInt64(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_675dde566810c10d(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::i128 NarrowToInt128(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_aae657a80f536c81(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::u128 NarrowToUInt128(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e07cc4d2ecee86b0(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::isize NarrowToIsize(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d54740f69198dc1b(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::usize NarrowToUsize(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a634c951e7138c4f(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAbs(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAbs(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsCanonical(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsCanonical(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsComplexNumber(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsComplexNumber(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsEvenInteger(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsEvenInteger(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsFinite(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsFinite(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsImaginaryNumber(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsImaginaryNumber(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsInfinity(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsInfinity(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsInteger(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsInteger(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsNaN(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsNaN(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsNegative(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsNegative(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsNegativeInfinity(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsNegativeInfinity(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsNormal(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsNormal(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsOddInteger(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsOddInteger(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsPositive(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsPositive(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsPositiveInfinity(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsPositiveInfinity(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsRealNumber(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsRealNumber(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsSubnormal(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsSubnormal(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename INumberBase::$vtable> FORCE_INLINE const bool getIsZero(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsZero(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumberBase.ast"
	

}