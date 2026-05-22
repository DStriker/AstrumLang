#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/MidpointRounding.h"
using namespace System;
#include "IFloatingPointConstants.h"
#include "INumber.h"
#include "ISignedNumber.h"
#include "IIntDivOperators.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IFloatingPoint_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFloatingPoint;
class IFloatingPoint__Unowned;
class IFloatingPoint__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFloatingPoint> = false;

namespace System::Numerics {
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_c7bdfb51b47bc9d8 = requires(typename __AnyType::__class t) { {t.Round(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Round(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Round(std::declval<typename __AnyType::__self>(), std::declval<Builtin::u32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_d1025724cbc54cd4 = requires(typename __AnyType::__class t) { {t.Round(std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Round(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Round(std::declval<typename __AnyType::__self>(), std::declval<MidpointRounding>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_a1d87c2fd844c684 = requires(typename __AnyType::__class t) { {t.Round(std::declval<Builtin::u32>(), std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Round(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::u32>(), std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Round(std::declval<typename __AnyType::__self>(), std::declval<Builtin::u32>(), std::declval<MidpointRounding>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get014af645db4f7ddb = requires(typename __AnyType::__class t) { {t.getFractionalPart()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getFractionalPart(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get389ad609da75777c = requires(typename __AnyType::__class t) { {t.getCeil()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCeil(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get567dbc47aaec9039 = requires(typename __AnyType::__class t) { {t.getFloor()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getFloor(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get50a8077a768b5fe3 = requires(typename __AnyType::__class t) { {t.getTruncate()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getTruncate(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get1f687f1769dad067 = requires(typename __AnyType::__class t) { {t.getRound()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getRound(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get9beab73c56433500 = requires(typename __AnyType::__class t) { {t.getRoundTiesEven()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getRoundTiesEven(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get6536fba0b7881faf = requires(typename __AnyType::__class t) { {t.getExponentByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getExponentByteCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get774341b9ed58b41f = requires(typename __AnyType::__class t) { {t.getExponentShortestBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getExponentShortestBitLength(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_getadaf3ee73d3d6d9f = requires(typename __AnyType::__class t) { {t.getSignificandBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getSignificandBitLength(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __HasMethodImplementation_get559fb96fc2df242d = requires(typename __AnyType::__class t) { {t.getSignificandByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getSignificandByteCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	namespace __vtables {
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		struct __vtable_IFloatingPoint : public IFloatingPointConstants::__vtable, public ISignedIntegerPowerArithmetic::__vtable, public INumber::__vtable, public ISignedNumber::__vtable
		{
			using fn_c7bdfb51b47bc9d8 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 digits);
			fn_c7bdfb51b47bc9d8* fnptr_c7bdfb51b47bc9d8;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c7bdfb51b47bc9d8(Builtin::Object* obj, Builtin::u32 digits) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::__class*>(obj), digits)); }
			using fn_d1025724cbc54cd4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, MidpointRounding rounding);
			fn_d1025724cbc54cd4* fnptr_d1025724cbc54cd4;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d1025724cbc54cd4(Builtin::Object* obj, MidpointRounding rounding) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::__class*>(obj), rounding)); }
			using fn_a1d87c2fd844c684 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 digits, MidpointRounding rounding);
			fn_a1d87c2fd844c684* fnptr_a1d87c2fd844c684;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_a1d87c2fd844c684(Builtin::Object* obj, Builtin::u32 digits, MidpointRounding rounding) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::__class*>(obj), digits, rounding)); }
			using fn_getFractionalPart = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getFractionalPart* fnptr_getFractionalPart;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getFractionalPart(Builtin::Object* obj) { return ADV_UFCS(getFractionalPart)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCeil = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCeil* fnptr_getCeil;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCeil(Builtin::Object* obj) { return ADV_UFCS(getCeil)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getFloor = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getFloor* fnptr_getFloor;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getFloor(Builtin::Object* obj) { return ADV_UFCS(getFloor)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTruncate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTruncate* fnptr_getTruncate;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTruncate(Builtin::Object* obj) { return ADV_UFCS(getTruncate)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getRound = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getRound* fnptr_getRound;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getRound(Builtin::Object* obj) { return ADV_UFCS(getRound)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getRoundTiesEven = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getRoundTiesEven* fnptr_getRoundTiesEven;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getRoundTiesEven(Builtin::Object* obj) { return ADV_UFCS(getRoundTiesEven)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getExponentByteCount = Builtin::u32(Builtin::Object*);
			fn_getExponentByteCount* fnptr_getExponentByteCount;
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getExponentByteCount(Builtin::Object* obj) { return ADV_UFCS(getExponentByteCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getExponentShortestBitLength = Builtin::u32(Builtin::Object*);
			fn_getExponentShortestBitLength* fnptr_getExponentShortestBitLength;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getExponentShortestBitLength(Builtin::Object* obj) { return ADV_UFCS(getExponentShortestBitLength)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSignificandBitLength = Builtin::u32(Builtin::Object*);
			fn_getSignificandBitLength* fnptr_getSignificandBitLength;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getSignificandBitLength(Builtin::Object* obj) { return ADV_UFCS(getSignificandBitLength)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSignificandByteCount = Builtin::u32(Builtin::Object*);
			fn_getSignificandByteCount* fnptr_getSignificandByteCount;
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getSignificandByteCount(Builtin::Object* obj) { return ADV_UFCS(getSignificandByteCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IFloatingPoint __vtable_IFloatingPoint_for = {__vtable_IFloatingPointConstants_for<__AnyType>
		, __vtable_ISignedIntegerPowerArithmetic_for<__AnyType>
		, __vtable_INumber_for<__AnyType>
		, __vtable_ISignedNumber_for<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_c7bdfb51b47bc9d8<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_d1025724cbc54cd4<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_a1d87c2fd844c684<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getFractionalPart<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getCeil<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getFloor<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getTruncate<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getRound<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getRoundTiesEven<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getExponentByteCount<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getExponentShortestBitLength<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getSignificandBitLength<__AnyType>
		, &__vtables::__vtable_IFloatingPoint::template impl_getSignificandByteCount<__AnyType>
		};
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept __ImplementsInterface_IFloatingPoint = __ImplementsInterface_IFloatingPointConstants<__AnyType> && __ImplementsInterface_ISignedIntegerPowerArithmetic<__AnyType> && __ImplementsInterface_INumber<__AnyType> && __ImplementsInterface_ISignedNumber<__AnyType> && __HasMethodImplementation_c7bdfb51b47bc9d8<__AnyType> && __HasMethodImplementation_d1025724cbc54cd4<__AnyType> && __HasMethodImplementation_a1d87c2fd844c684<__AnyType> && __HasMethodImplementation_get014af645db4f7ddb<__AnyType> && __HasMethodImplementation_get389ad609da75777c<__AnyType> && __HasMethodImplementation_get567dbc47aaec9039<__AnyType> && __HasMethodImplementation_get50a8077a768b5fe3<__AnyType> && __HasMethodImplementation_get1f687f1769dad067<__AnyType> && __HasMethodImplementation_get9beab73c56433500<__AnyType> && __HasMethodImplementation_get6536fba0b7881faf<__AnyType> && __HasMethodImplementation_get774341b9ed58b41f<__AnyType> && __HasMethodImplementation_getadaf3ee73d3d6d9f<__AnyType> && __HasMethodImplementation_get559fb96fc2df242d<__AnyType>;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	class IFloatingPoint final : public Builtin::InterfaceRef {
		public: using __self = IFloatingPoint;
		public: using __vtable = __vtables::__vtable_IFloatingPoint;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IFloatingPoint__Unowned;
		friend class IFloatingPoint__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IFloatingPoint__Unowned;
		public: using __weak_ref = IFloatingPoint__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IFloatingPoint<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFloatingPoint);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPoint(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPoint& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFloatingPoint(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPoint_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPoint_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPoint(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IFloatingPoint_for<__FixedType> } { static_assert(__ImplementsInterface_IFloatingPoint<__FixedType>, "Cannot initialize interface IFloatingPoint from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFloatingPoint& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPoint_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPoint_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPoint& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IFloatingPoint<__FixedType>, "Cannot initialize interface IFloatingPoint from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IFloatingPoint_for<__FixedType>; return *this; }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(Builtin::u32 digits) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c7bdfb51b47bc9d8(_obj, digits)); }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(MidpointRounding rounding) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d1025724cbc54cd4(_obj, rounding)); }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(Builtin::u32 digits, MidpointRounding rounding) const { ADV_EXPRESSION_BODY(_vtable->fnptr_a1d87c2fd844c684(_obj, digits, rounding)); }
		
	};
	class IFloatingPoint__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IFloatingPoint__Unowned;
		public: using __vtable = __vtables::__vtable_IFloatingPoint;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IFloatingPoint;
		public: using __strong_ref = IFloatingPoint;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IFloatingPoint__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFloatingPoint__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFloatingPoint__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IFloatingPoint__Weak;
		public: using __vtable = __vtables::__vtable_IFloatingPoint;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IFloatingPoint;
		public: using __strong_ref = IFloatingPoint;
		public: using __unowned_ref = IFloatingPoint__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFloatingPoint__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPoint__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, Builtin::u32 digits)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c7bdfb51b47bc9d8(Builtin::GetObjectReferenceFromInterface(&iface), digits)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, MidpointRounding rounding)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d1025724cbc54cd4(Builtin::GetObjectReferenceFromInterface(&iface), rounding)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, Builtin::u32 digits, MidpointRounding rounding)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a1d87c2fd844c684(Builtin::GetObjectReferenceFromInterface(&iface), digits, rounding)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getFractionalPart(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getFractionalPart(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCeil(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCeil(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getFloor(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getFloor(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTruncate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTruncate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getRound(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getRound(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getRoundTiesEven(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getRoundTiesEven(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::u32 getExponentByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getExponentByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::u32 getExponentShortestBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getExponentShortestBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::u32 getSignificandBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSignificandBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFloatingPoint::__vtable> FORCE_INLINE const Builtin::u32 getSignificandByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSignificandByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	

}