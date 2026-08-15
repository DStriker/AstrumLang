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
namespace __Unsafe {} namespace __IFloatingPoint$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFloatingPoint;
class IFloatingPoint$Unowned;
class IFloatingPoint$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFloatingPoint> = false;

namespace System::Numerics {
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_c7bdfb51b47bc9d8 = requires(typename __AnyType::$class t) { {t.Round(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Round($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_d1025724cbc54cd4 = requires(typename __AnyType::$class t) { {t.Round(std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Round($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_a1d87c2fd844c684 = requires(typename __AnyType::$class t) { {t.Round(std::declval<Builtin::u32>(), std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Round($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>(), std::declval<MidpointRounding>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get014af645db4f7ddb = requires(typename __AnyType::$class t) { {t.getFractionalPart()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getFractionalPart($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get389ad609da75777c = requires(typename __AnyType::$class t) { {t.getCeil()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getCeil($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get567dbc47aaec9039 = requires(typename __AnyType::$class t) { {t.getFloor()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getFloor($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get50a8077a768b5fe3 = requires(typename __AnyType::$class t) { {t.getTruncate()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getTruncate($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get1f687f1769dad067 = requires(typename __AnyType::$class t) { {t.getRound()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getRound($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get9beab73c56433500 = requires(typename __AnyType::$class t) { {t.getRoundTiesEven()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getRoundTiesEven($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get6536fba0b7881faf = requires(typename __AnyType::$class t) { {t.getExponentByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getExponentByteCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get774341b9ed58b41f = requires(typename __AnyType::$class t) { {t.getExponentShortestBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getExponentShortestBitLength($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_getadaf3ee73d3d6d9f = requires(typename __AnyType::$class t) { {t.getSignificandBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getSignificandBitLength($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $HasMethodImplementation_get559fb96fc2df242d = requires(typename __AnyType::$class t) { {t.getSignificandByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getSignificandByteCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(ISignedIntegerPowerArithmetic, ISignedIntegerPowerArithmetic);
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(INumber, INumber);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	ADV_CHECK_INTERFACE(ISignedNumber, ISignedNumber);
	namespace $vtables {
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		struct $vtable_IFloatingPoint : public IFloatingPointConstants::$vtable, public ISignedIntegerPowerArithmetic::$vtable, public INumber::$vtable, public ISignedNumber::$vtable
		{
			using fn_c7bdfb51b47bc9d8 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 digits);
			fn_c7bdfb51b47bc9d8* fnptr_c7bdfb51b47bc9d8;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_c7bdfb51b47bc9d8(Builtin::Object* obj, Builtin::u32 digits) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::$class*>(obj), digits)); }
			using fn_d1025724cbc54cd4 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, MidpointRounding rounding);
			fn_d1025724cbc54cd4* fnptr_d1025724cbc54cd4;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d1025724cbc54cd4(Builtin::Object* obj, MidpointRounding rounding) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::$class*>(obj), rounding)); }
			using fn_a1d87c2fd844c684 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 digits, MidpointRounding rounding);
			fn_a1d87c2fd844c684* fnptr_a1d87c2fd844c684;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_a1d87c2fd844c684(Builtin::Object* obj, Builtin::u32 digits, MidpointRounding rounding) { ADV_EXPRESSION_BODY(ADV_UFCS(Round)(*static_cast<typename __AnyType::$class*>(obj), digits, rounding)); }
			using fn_getFractionalPart = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getFractionalPart* fnptr_getFractionalPart;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getFractionalPart(Builtin::Object* obj) { return ADV_UFCS(getFractionalPart)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getCeil = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCeil* fnptr_getCeil;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCeil(Builtin::Object* obj) { return ADV_UFCS(getCeil)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getFloor = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getFloor* fnptr_getFloor;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getFloor(Builtin::Object* obj) { return ADV_UFCS(getFloor)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getTruncate = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTruncate* fnptr_getTruncate;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTruncate(Builtin::Object* obj) { return ADV_UFCS(getTruncate)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getRound = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getRound* fnptr_getRound;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getRound(Builtin::Object* obj) { return ADV_UFCS(getRound)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getRoundTiesEven = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getRoundTiesEven* fnptr_getRoundTiesEven;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getRoundTiesEven(Builtin::Object* obj) { return ADV_UFCS(getRoundTiesEven)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getExponentByteCount = Builtin::u32(Builtin::Object*);
			fn_getExponentByteCount* fnptr_getExponentByteCount;
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getExponentByteCount(Builtin::Object* obj) { return ADV_UFCS(getExponentByteCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getExponentShortestBitLength = Builtin::u32(Builtin::Object*);
			fn_getExponentShortestBitLength* fnptr_getExponentShortestBitLength;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getExponentShortestBitLength(Builtin::Object* obj) { return ADV_UFCS(getExponentShortestBitLength)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getSignificandBitLength = Builtin::u32(Builtin::Object*);
			fn_getSignificandBitLength* fnptr_getSignificandBitLength;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getSignificandBitLength(Builtin::Object* obj) { return ADV_UFCS(getSignificandBitLength)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getSignificandByteCount = Builtin::u32(Builtin::Object*);
			fn_getSignificandByteCount* fnptr_getSignificandByteCount;
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
			template<class __AnyType> static Builtin::u32 impl_getSignificandByteCount(Builtin::Object* obj) { return ADV_UFCS(getSignificandByteCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IFloatingPoint $vtable_IFloatingPoint_for = {$vtable_IFloatingPointConstants_for<__AnyType>
		, $vtable_ISignedIntegerPowerArithmetic_for<__AnyType>
		, $vtable_INumber_for<__AnyType>
		, $vtable_ISignedNumber_for<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_c7bdfb51b47bc9d8<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_d1025724cbc54cd4<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_a1d87c2fd844c684<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getFractionalPart<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getCeil<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getFloor<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getTruncate<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getRound<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getRoundTiesEven<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getExponentByteCount<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getExponentShortestBitLength<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getSignificandBitLength<__AnyType>
		, &$vtables::$vtable_IFloatingPoint::template impl_getSignificandByteCount<__AnyType>
		};
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	template<class __AnyType> concept $ImplementsInterface_IFloatingPoint = $ImplementsInterface_IFloatingPointConstants<__AnyType> && $ImplementsInterface_ISignedIntegerPowerArithmetic<__AnyType> && $ImplementsInterface_INumber<__AnyType> && $ImplementsInterface_ISignedNumber<__AnyType> && $HasMethodImplementation_c7bdfb51b47bc9d8<__AnyType> && $HasMethodImplementation_d1025724cbc54cd4<__AnyType> && $HasMethodImplementation_a1d87c2fd844c684<__AnyType> && $HasMethodImplementation_get014af645db4f7ddb<__AnyType> && $HasMethodImplementation_get389ad609da75777c<__AnyType> && $HasMethodImplementation_get567dbc47aaec9039<__AnyType> && $HasMethodImplementation_get50a8077a768b5fe3<__AnyType> && $HasMethodImplementation_get1f687f1769dad067<__AnyType> && $HasMethodImplementation_get9beab73c56433500<__AnyType> && $HasMethodImplementation_get6536fba0b7881faf<__AnyType> && $HasMethodImplementation_get774341b9ed58b41f<__AnyType> && $HasMethodImplementation_getadaf3ee73d3d6d9f<__AnyType> && $HasMethodImplementation_get559fb96fc2df242d<__AnyType>;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	class IFloatingPoint final : public Builtin::InterfaceRef {
		public: using $self = IFloatingPoint;
		public: using $vtable = $vtables::$vtable_IFloatingPoint;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IFloatingPoint$Unowned;
		friend class IFloatingPoint$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IFloatingPoint$Unowned;
		public: using $weak_ref = IFloatingPoint$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IFloatingPoint<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFloatingPoint);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPoint(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPoint& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFloatingPoint(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPoint_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPoint_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPoint(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IFloatingPoint_for<__FixedType> } { static_assert($ImplementsInterface_IFloatingPoint<__FixedType>, "Cannot initialize interface IFloatingPoint from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFloatingPoint& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPoint_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IFloatingPoint<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPoint from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFloatingPoint_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPoint& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IFloatingPoint<__FixedType>, "Cannot initialize interface IFloatingPoint from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IFloatingPoint_for<__FixedType>; return *this; }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(Builtin::u32 digits) const { ADV_EXPRESSION_BODY(_vtable->fnptr_c7bdfb51b47bc9d8(_obj, digits)); }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(MidpointRounding rounding) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d1025724cbc54cd4(_obj, rounding)); }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(Builtin::u32 digits, MidpointRounding rounding) const { ADV_EXPRESSION_BODY(_vtable->fnptr_a1d87c2fd844c684(_obj, digits, rounding)); }
		
	};
	class IFloatingPoint$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IFloatingPoint$Unowned;
		public: using $vtable = $vtables::$vtable_IFloatingPoint;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IFloatingPoint;
		public: using $strong_ref = IFloatingPoint;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IFloatingPoint$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFloatingPoint$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPoint$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFloatingPoint$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IFloatingPoint$Weak;
		public: using $vtable = $vtables::$vtable_IFloatingPoint;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IFloatingPoint;
		public: using $strong_ref = IFloatingPoint;
		public: using $unowned_ref = IFloatingPoint$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFloatingPoint$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFloatingPoint$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFloatingPoint<__AnyType> IFloatingPoint$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFloatingPoint_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, Builtin::u32 digits)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c7bdfb51b47bc9d8(Builtin::GetObjectReferenceFromInterface(&iface), digits)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, MidpointRounding rounding)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d1025724cbc54cd4(Builtin::GetObjectReferenceFromInterface(&iface), rounding)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Round(const __AnyInterface& iface, Builtin::u32 digits, MidpointRounding rounding)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a1d87c2fd844c684(Builtin::GetObjectReferenceFromInterface(&iface), digits, rounding)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getFractionalPart(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getFractionalPart(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCeil(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCeil(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getFloor(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getFloor(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTruncate(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTruncate(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getRound(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getRound(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getRoundTiesEven(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getRoundTiesEven(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::u32 getExponentByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getExponentByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::u32 getExponentShortestBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getExponentShortestBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::u32 getSignificandBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSignificandBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFloatingPoint::$vtable> FORCE_INLINE const Builtin::u32 getSignificandByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSignificandByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPoint.ast"
	

}