#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IFloatingPointConstants.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __ITrigonometricFunctions_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class ITrigonometricFunctions;
class ITrigonometricFunctions__Unowned;
class ITrigonometricFunctions__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::ITrigonometricFunctions> = false;

namespace System::Numerics {
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_cc5316b3bbf773a7 = requires(typename __AnyType::__class t) { {t.ToRadians()} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {ToRadians(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return ToRadians(std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_7ec7d3c03e470ad4 = requires(typename __AnyType::__class t) { {t.ToDegrees()} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {ToDegrees(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return ToDegrees(std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getda0921f483630fe4 = requires(typename __AnyType::__class t) { {t.getAcos()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcos(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getda0920f483630e31 = requires(typename __AnyType::__class t) { {t.getAcot()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcot(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get672696f4d407afe5 = requires(typename __AnyType::__class t) { {t.getAsin()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsin(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3bebc7f4bb9161e0 = requires(typename __AnyType::__class t) { {t.getAtan()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAtan(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get674fa1f4d42ac7aa = requires(typename __AnyType::__class t) { {t.getAsec()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsec(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getda4d29f4839cea48 = requires(typename __AnyType::__class t) { {t.getAcsc()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcsc(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get2afb027ddf67ee91 = requires(typename __AnyType::__class t) { {t.getCos()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCos(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get2afb037ddf67f044 = requires(typename __AnyType::__class t) { {t.getCot()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCot(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get9ec47d7d8f87617c = requires(typename __AnyType::__class t) { {t.getSin()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSin(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get858de47d81781c39 = requires(typename __AnyType::__class t) { {t.getTan()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getTan(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get9e9c7a7d8f660a4f = requires(typename __AnyType::__class t) { {t.getSec()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSec(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get2b241a7ddf8b1c6d = requires(typename __AnyType::__class t) { {t.getCsc()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCsc(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get6bbe99f4eeb9a04f = requires(typename __AnyType::__class t) { {t.getSinCos()} -> std::convertible_to<std::tuple<typename __AnyType::__self, typename __AnyType::__self>>; } || requires(typename __AnyType::__self t) { {getSinCos(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<std::tuple<typename __AnyType::__self, typename __AnyType::__self>>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getefd8d8700131dd8f = requires(typename __AnyType::__class t) { {t.getAcosPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcosPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_gete875ab6ffd5f260e = requires(typename __AnyType::__class t) { {t.getAcotPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcotPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get0a146248257336d2 = requires(typename __AnyType::__class t) { {t.getAsinPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsinPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get4cf708a6b748679b = requires(typename __AnyType::__class t) { {t.getAtanPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAtanPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getcfe225ad7a2072c5 = requires(typename __AnyType::__class t) { {t.getAsecPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsecPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getfa05f9170be48393 = requires(typename __AnyType::__class t) { {t.getAcscPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcscPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getafc84f11cddbc8ae = requires(typename __AnyType::__class t) { {t.getCosPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCosPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb72b7c11d1ae802f = requires(typename __AnyType::__class t) { {t.getCotPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCotPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb7f4ff6fca306cf7 = requires(typename __AnyType::__class t) { {t.getSinPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSinPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get2edc51d7763ef566 = requires(typename __AnyType::__class t) { {t.getTanPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getTanPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_gete30d840f868f430c = requires(typename __AnyType::__class t) { {t.getSecPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSecPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_gete3390f775fcbdf0a = requires(typename __AnyType::__class t) { {t.getCscPi()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCscPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get4e1e265c14f4490c = requires(typename __AnyType::__class t) { {t.getSinCosPi()} -> std::convertible_to<std::tuple<typename __AnyType::__self, typename __AnyType::__self>>; } || requires(typename __AnyType::__self t) { {getSinCosPi(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<std::tuple<typename __AnyType::__self, typename __AnyType::__self>>; };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	namespace __vtables {
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
		struct __vtable_ITrigonometricFunctions : public IFloatingPointConstants::__vtable
		{
			using fn_cc5316b3bbf773a7 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_cc5316b3bbf773a7* fnptr_cc5316b3bbf773a7;
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_cc5316b3bbf773a7(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToRadians)(*static_cast<typename __AnyType::__class*>(obj))); }
			using fn_7ec7d3c03e470ad4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_7ec7d3c03e470ad4* fnptr_7ec7d3c03e470ad4;
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_7ec7d3c03e470ad4(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToDegrees)(*static_cast<typename __AnyType::__class*>(obj))); }
			using fn_getAcos = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcos* fnptr_getAcos;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcos(Builtin::Object* obj) { return ADV_UFCS(getAcos)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcot = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcot* fnptr_getAcot;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcot(Builtin::Object* obj) { return ADV_UFCS(getAcot)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsin = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsin* fnptr_getAsin;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsin(Builtin::Object* obj) { return ADV_UFCS(getAsin)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAtan = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAtan* fnptr_getAtan;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAtan(Builtin::Object* obj) { return ADV_UFCS(getAtan)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsec = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsec* fnptr_getAsec;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsec(Builtin::Object* obj) { return ADV_UFCS(getAsec)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcsc = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcsc* fnptr_getAcsc;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcsc(Builtin::Object* obj) { return ADV_UFCS(getAcsc)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCos = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCos* fnptr_getCos;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCos(Builtin::Object* obj) { return ADV_UFCS(getCos)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCot = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCot* fnptr_getCot;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCot(Builtin::Object* obj) { return ADV_UFCS(getCot)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSin = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSin* fnptr_getSin;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSin(Builtin::Object* obj) { return ADV_UFCS(getSin)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTan = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTan* fnptr_getTan;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTan(Builtin::Object* obj) { return ADV_UFCS(getTan)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSec = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSec* fnptr_getSec;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSec(Builtin::Object* obj) { return ADV_UFCS(getSec)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCsc = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCsc* fnptr_getCsc;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCsc(Builtin::Object* obj) { return ADV_UFCS(getCsc)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSinCos = std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_getSinCos* fnptr_getSinCos;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_getSinCos(Builtin::Object* obj) { return ADV_UFCS(getSinCos)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcosPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcosPi* fnptr_getAcosPi;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcosPi(Builtin::Object* obj) { return ADV_UFCS(getAcosPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcotPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcotPi* fnptr_getAcotPi;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcotPi(Builtin::Object* obj) { return ADV_UFCS(getAcotPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsinPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsinPi* fnptr_getAsinPi;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsinPi(Builtin::Object* obj) { return ADV_UFCS(getAsinPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAtanPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAtanPi* fnptr_getAtanPi;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAtanPi(Builtin::Object* obj) { return ADV_UFCS(getAtanPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsecPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsecPi* fnptr_getAsecPi;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsecPi(Builtin::Object* obj) { return ADV_UFCS(getAsecPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcscPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcscPi* fnptr_getAcscPi;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcscPi(Builtin::Object* obj) { return ADV_UFCS(getAcscPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCosPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCosPi* fnptr_getCosPi;
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCosPi(Builtin::Object* obj) { return ADV_UFCS(getCosPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCotPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCotPi* fnptr_getCotPi;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCotPi(Builtin::Object* obj) { return ADV_UFCS(getCotPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSinPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSinPi* fnptr_getSinPi;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSinPi(Builtin::Object* obj) { return ADV_UFCS(getSinPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTanPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTanPi* fnptr_getTanPi;
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTanPi(Builtin::Object* obj) { return ADV_UFCS(getTanPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSecPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSecPi* fnptr_getSecPi;
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSecPi(Builtin::Object* obj) { return ADV_UFCS(getSecPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCscPi = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCscPi* fnptr_getCscPi;
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCscPi(Builtin::Object* obj) { return ADV_UFCS(getCscPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSinCosPi = std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_getSinCosPi* fnptr_getSinCosPi;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
			template<class __AnyType> static std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_getSinCosPi(Builtin::Object* obj) { return ADV_UFCS(getSinCosPi)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_ITrigonometricFunctions __vtable_ITrigonometricFunctions_for = {__vtable_IFloatingPointConstants_for<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_cc5316b3bbf773a7<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_7ec7d3c03e470ad4<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcos<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcot<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAsin<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAtan<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAsec<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcsc<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCos<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCot<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSin<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getTan<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSec<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCsc<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSinCos<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcosPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcotPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAsinPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAtanPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAsecPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getAcscPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCosPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCotPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSinPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getTanPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSecPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getCscPi<__AnyType>
		, &__vtables::__vtable_ITrigonometricFunctions::template impl_getSinCosPi<__AnyType>
		};
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	template<class __AnyType> concept __ImplementsInterface_ITrigonometricFunctions = __ImplementsInterface_IFloatingPointConstants<__AnyType> && __HasMethodImplementation_cc5316b3bbf773a7<__AnyType> && __HasMethodImplementation_7ec7d3c03e470ad4<__AnyType> && __HasMethodImplementation_getda0921f483630fe4<__AnyType> && __HasMethodImplementation_getda0920f483630e31<__AnyType> && __HasMethodImplementation_get672696f4d407afe5<__AnyType> && __HasMethodImplementation_get3bebc7f4bb9161e0<__AnyType> && __HasMethodImplementation_get674fa1f4d42ac7aa<__AnyType> && __HasMethodImplementation_getda4d29f4839cea48<__AnyType> && __HasMethodImplementation_get2afb027ddf67ee91<__AnyType> && __HasMethodImplementation_get2afb037ddf67f044<__AnyType> && __HasMethodImplementation_get9ec47d7d8f87617c<__AnyType> && __HasMethodImplementation_get858de47d81781c39<__AnyType> && __HasMethodImplementation_get9e9c7a7d8f660a4f<__AnyType> && __HasMethodImplementation_get2b241a7ddf8b1c6d<__AnyType> && __HasMethodImplementation_get6bbe99f4eeb9a04f<__AnyType> && __HasMethodImplementation_getefd8d8700131dd8f<__AnyType> && __HasMethodImplementation_gete875ab6ffd5f260e<__AnyType> && __HasMethodImplementation_get0a146248257336d2<__AnyType> && __HasMethodImplementation_get4cf708a6b748679b<__AnyType> && __HasMethodImplementation_getcfe225ad7a2072c5<__AnyType> && __HasMethodImplementation_getfa05f9170be48393<__AnyType> && __HasMethodImplementation_getafc84f11cddbc8ae<__AnyType> && __HasMethodImplementation_getb72b7c11d1ae802f<__AnyType> && __HasMethodImplementation_getb7f4ff6fca306cf7<__AnyType> && __HasMethodImplementation_get2edc51d7763ef566<__AnyType> && __HasMethodImplementation_gete30d840f868f430c<__AnyType> && __HasMethodImplementation_gete3390f775fcbdf0a<__AnyType> && __HasMethodImplementation_get4e1e265c14f4490c<__AnyType>;
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	class ITrigonometricFunctions final : public Builtin::InterfaceRef {
		public: using __self = ITrigonometricFunctions;
		public: using __vtable = __vtables::__vtable_ITrigonometricFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class ITrigonometricFunctions__Unowned;
		friend class ITrigonometricFunctions__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = ITrigonometricFunctions__Unowned;
		public: using __weak_ref = ITrigonometricFunctions__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_ITrigonometricFunctions<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(ITrigonometricFunctions);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ITrigonometricFunctions(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ITrigonometricFunctions& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> ITrigonometricFunctions(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_ITrigonometricFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ITrigonometricFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_ITrigonometricFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ITrigonometricFunctions(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_ITrigonometricFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ITrigonometricFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_ITrigonometricFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ITrigonometricFunctions(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_ITrigonometricFunctions_for<__FixedType> } { static_assert(__ImplementsInterface_ITrigonometricFunctions<__FixedType>, "Cannot initialize interface ITrigonometricFunctions from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> ITrigonometricFunctions& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_ITrigonometricFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ITrigonometricFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_ITrigonometricFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ITrigonometricFunctions& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_ITrigonometricFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ITrigonometricFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_ITrigonometricFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ITrigonometricFunctions& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_ITrigonometricFunctions<__FixedType>, "Cannot initialize interface ITrigonometricFunctions from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_ITrigonometricFunctions_for<__FixedType>; return *this; }
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ToRadians() const { ADV_EXPRESSION_BODY(_vtable->fnptr_cc5316b3bbf773a7(_obj)); }
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ToDegrees() const { ADV_EXPRESSION_BODY(_vtable->fnptr_7ec7d3c03e470ad4(_obj)); }
		
	};
	class ITrigonometricFunctions__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = ITrigonometricFunctions__Unowned;
		public: using __vtable = __vtables::__vtable_ITrigonometricFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class ITrigonometricFunctions;
		public: using __strong_ref = ITrigonometricFunctions;
		public: using __unowned_ref = __self;
		public: using __weak_ref = ITrigonometricFunctions__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(ITrigonometricFunctions__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> ITrigonometricFunctions__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ITrigonometricFunctions__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> ITrigonometricFunctions__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ITrigonometricFunctions__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class ITrigonometricFunctions__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = ITrigonometricFunctions__Weak;
		public: using __vtable = __vtables::__vtable_ITrigonometricFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class ITrigonometricFunctions;
		public: using __strong_ref = ITrigonometricFunctions;
		public: using __unowned_ref = ITrigonometricFunctions__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(ITrigonometricFunctions__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		ITrigonometricFunctions__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> ITrigonometricFunctions__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_ITrigonometricFunctions<__AnyType> ITrigonometricFunctions__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_ITrigonometricFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ToRadians(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_cc5316b3bbf773a7(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> ToDegrees(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_7ec7d3c03e470ad4(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcos(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcos(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcot(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcot(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsin(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsin(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAtan(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAtan(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsec(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsec(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcsc(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcsc(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCos(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCos(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCot(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCot(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSin(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSin(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTan(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTan(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSec(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSec(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCsc(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCsc(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> getSinCos(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSinCos(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcosPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcosPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcotPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcotPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsinPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsinPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAtanPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAtanPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsecPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsecPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcscPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcscPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCosPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCosPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCotPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCotPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSinPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSinPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTanPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTanPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSecPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSecPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCscPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCscPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename ITrigonometricFunctions::__vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> getSinCosPi(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSinCosPi(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ITrigonometricFunctions.ast"
	

}