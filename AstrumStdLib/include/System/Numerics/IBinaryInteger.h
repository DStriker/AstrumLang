#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryNumber.h"
#include "IBitwiseOperators.h"
#include "IShiftOperators.h"
#include "IIntDivOperators.h"
#include "IIntPowerOperators.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryInteger$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryInteger;
class IBinaryInteger$Unowned;
class IBinaryInteger$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryInteger> = false;

namespace System::Numerics {
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_3fc27e014b17f068 = requires(typename __AnyType::$class t) { {t.NextMultipleOf(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {NextMultipleOf($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_IsSigned
} namespace $extensions { template<class _TT> struct $static_getIsSigned{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_IsSigned
#endif
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get32cc0e126f12555a = requires { __AnyType::$self::IsSigned; } || requires { { [] { using namespace $extensions; return $static_getIsSigned<typename __AnyType::$self>::get(); }() } -> std::convertible_to<bool>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getc54655ceca57b801 = requires(typename __AnyType::$class t) { {t.getTrailingOneCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getTrailingOneCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get81c979ea538ee3cf = requires(typename __AnyType::$class t) { {t.getTrailingZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getTrailingZeroCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get451b85e08477124c = requires(typename __AnyType::$class t) { {t.getMinimalBitWidth()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getMinimalBitWidth($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getc1bf0c58bf8ec63f = requires(typename __AnyType::$class t) { {t.getByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getByteCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd5b9536006d7e554 = requires(typename __AnyType::$class t) { {t.getCheckedIsqrt()} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; } || requires(typename __AnyType::$self t) { {getCheckedIsqrt($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::Nullable<typename __AnyType::$self>>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get290d77e00232725b = requires(typename __AnyType::$class t) { {t.getIsqrt()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getIsqrt($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get7fe13569a14ec76d = requires(typename __AnyType::$class t) { {t.getLog2Ceiling()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLog2Ceiling($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get7d74b5ed512062b3 = requires(typename __AnyType::$class t) { {t.getPrevPow2()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getPrevPow2($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getfb476229a2bfb8fb = requires(typename __AnyType::$class t) { {t.getNextPow2()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getNextPow2($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IBitwiseArithmetic, IBitwiseArithmetic);
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IShiftArithmetic, IShiftArithmetic);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	namespace $vtables {
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		struct $vtable_IBinaryInteger : public IBinaryNumber::$vtable, public IBitwiseArithmetic::$vtable, public IShiftArithmetic::$vtable, public IIntegerDivisibleArithmetic::$vtable, public IIntegerPowerArithmetic::$vtable
		{
			using fn_3fc27e014b17f068 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_3fc27e014b17f068* fnptr_3fc27e014b17f068;
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_3fc27e014b17f068(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(NextMultipleOf)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_getTrailingOneCount = Builtin::u32(Builtin::Object*);
			fn_getTrailingOneCount* fnptr_getTrailingOneCount;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getTrailingOneCount(Builtin::Object* obj) { return ADV_UFCS(getTrailingOneCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getTrailingZeroCount = Builtin::u32(Builtin::Object*);
			fn_getTrailingZeroCount* fnptr_getTrailingZeroCount;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getTrailingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getTrailingZeroCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getMinimalBitWidth = Builtin::u32(Builtin::Object*);
			fn_getMinimalBitWidth* fnptr_getMinimalBitWidth;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getMinimalBitWidth(Builtin::Object* obj) { return ADV_UFCS(getMinimalBitWidth)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getByteCount = Builtin::u32(Builtin::Object*);
			fn_getByteCount* fnptr_getByteCount;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getByteCount(Builtin::Object* obj) { return ADV_UFCS(getByteCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getCheckedIsqrt = Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_getCheckedIsqrt* fnptr_getCheckedIsqrt;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_getCheckedIsqrt(Builtin::Object* obj) { return ADV_UFCS(getCheckedIsqrt)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getIsqrt = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getIsqrt* fnptr_getIsqrt;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getIsqrt(Builtin::Object* obj) { return ADV_UFCS(getIsqrt)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLog2Ceiling = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog2Ceiling* fnptr_getLog2Ceiling;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog2Ceiling(Builtin::Object* obj) { return ADV_UFCS(getLog2Ceiling)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getPrevPow2 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getPrevPow2* fnptr_getPrevPow2;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getPrevPow2(Builtin::Object* obj) { return ADV_UFCS(getPrevPow2)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getNextPow2 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getNextPow2* fnptr_getNextPow2;
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getNextPow2(Builtin::Object* obj) { return ADV_UFCS(getNextPow2)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IBinaryInteger $vtable_IBinaryInteger_for = {$vtable_IBinaryNumber_for<__AnyType>
		, $vtable_IBitwiseArithmetic_for<__AnyType>
		, $vtable_IShiftArithmetic_for<__AnyType>
		, $vtable_IIntegerDivisibleArithmetic_for<__AnyType>
		, $vtable_IIntegerPowerArithmetic_for<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_3fc27e014b17f068<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getTrailingOneCount<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getTrailingZeroCount<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getMinimalBitWidth<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getByteCount<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getCheckedIsqrt<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getIsqrt<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getLog2Ceiling<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getPrevPow2<__AnyType>
		, &$vtables::$vtable_IBinaryInteger::template impl_getNextPow2<__AnyType>
		};
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept $ImplementsInterface_IBinaryInteger = $ImplementsInterface_IBinaryNumber<__AnyType> && $ImplementsInterface_IBitwiseArithmetic<__AnyType> && $ImplementsInterface_IShiftArithmetic<__AnyType> && $ImplementsInterface_IIntegerDivisibleArithmetic<__AnyType> && $ImplementsInterface_IIntegerPowerArithmetic<__AnyType> && $HasMethodImplementation_3fc27e014b17f068<__AnyType> && $HasMethodImplementation_get32cc0e126f12555a<__AnyType> && $HasMethodImplementation_getc54655ceca57b801<__AnyType> && $HasMethodImplementation_get81c979ea538ee3cf<__AnyType> && $HasMethodImplementation_get451b85e08477124c<__AnyType> && $HasMethodImplementation_getc1bf0c58bf8ec63f<__AnyType> && $HasMethodImplementation_getd5b9536006d7e554<__AnyType> && $HasMethodImplementation_get290d77e00232725b<__AnyType> && $HasMethodImplementation_get7fe13569a14ec76d<__AnyType> && $HasMethodImplementation_get7d74b5ed512062b3<__AnyType> && $HasMethodImplementation_getfb476229a2bfb8fb<__AnyType>;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	class IBinaryInteger final : public Builtin::InterfaceRef {
		public: using $self = IBinaryInteger;
		public: using $vtable = $vtables::$vtable_IBinaryInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IBinaryInteger$Unowned;
		friend class IBinaryInteger$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IBinaryInteger$Unowned;
		public: using $weak_ref = IBinaryInteger$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IBinaryInteger<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryInteger);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryInteger(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryInteger& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryInteger(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryInteger(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IBinaryInteger_for<__FixedType> } { static_assert($ImplementsInterface_IBinaryInteger<__FixedType>, "Cannot initialize interface IBinaryInteger from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryInteger& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryInteger& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IBinaryInteger<__FixedType>, "Cannot initialize interface IBinaryInteger from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IBinaryInteger_for<__FixedType>; return *this; }
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> NextMultipleOf(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_3fc27e014b17f068(_obj, rhs)); }
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: template<$ImplementsInterface_IBinaryInteger T> static const std::tuple<T, T> DefaultDivRem(T lhs, T rhs) ;
		
	};
	class IBinaryInteger$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IBinaryInteger$Unowned;
		public: using $vtable = $vtables::$vtable_IBinaryInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IBinaryInteger;
		public: using $strong_ref = IBinaryInteger;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IBinaryInteger$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryInteger$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryInteger$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IBinaryInteger$Weak;
		public: using $vtable = $vtables::$vtable_IBinaryInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IBinaryInteger;
		public: using $strong_ref = IBinaryInteger;
		public: using $unowned_ref = IBinaryInteger$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryInteger$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryInteger$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> NextMultipleOf(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_3fc27e014b17f068(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::u32 getTrailingOneCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTrailingOneCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::u32 getTrailingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTrailingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::u32 getMinimalBitWidth(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getMinimalBitWidth(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::u32 getByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> getCheckedIsqrt(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCheckedIsqrt(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getIsqrt(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsqrt(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog2Ceiling(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog2Ceiling(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getPrevPow2(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getPrevPow2(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getNextPow2(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getNextPow2(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

template<$ImplementsInterface_IBinaryInteger T> inline const std::tuple<T, T> IBinaryInteger::DefaultDivRem(T lhs, T rhs) 
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		Builtin::Auto<decltype(lhs / rhs)> quotient = lhs / rhs; 
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		return std::make_tuple(quotient, (lhs - (quotient * rhs)));
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	

}