#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IFloatingPointConstants.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __ILogarithmicFunctions$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class ILogarithmicFunctions;
class ILogarithmicFunctions$Unowned;
class ILogarithmicFunctions$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::ILogarithmicFunctions> = false;

namespace System::Numerics {
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_32ed54beef74add1 = requires(typename __AnyType::$class t) { {t.Log(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {Log($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_get5db592de98823b87 = requires(typename __AnyType::$class t) { {t.getLn()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLn($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_getc069d0e65f9953ec = requires(typename __AnyType::$class t) { {t.getLnP1()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLnP1($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb64032e6596adee1 = requires(typename __AnyType::$class t) { {t.getLog2()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLog2($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb404d003d2f6ed36 = requires(typename __AnyType::$class t) { {t.getLog2P1()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLog2P1($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_get19eb5c69f0906068 = requires(typename __AnyType::$class t) { {t.getLog10()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLog10($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3975df684ce0f77b = requires(typename __AnyType::$class t) { {t.getLog10P1()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLog10P1($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	namespace $vtables {
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
		struct $vtable_ILogarithmicFunctions : public IFloatingPointConstants::$vtable
		{
			using fn_32ed54beef74add1 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> base);
			fn_32ed54beef74add1* fnptr_32ed54beef74add1;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_32ed54beef74add1(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> base) { ADV_EXPRESSION_BODY(ADV_UFCS(Log)(*static_cast<typename __AnyType::$class*>(obj), base)); }
			using fn_getLn = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLn* fnptr_getLn;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLn(Builtin::Object* obj) { return ADV_UFCS(getLn)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLnP1 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLnP1* fnptr_getLnP1;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLnP1(Builtin::Object* obj) { return ADV_UFCS(getLnP1)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLog2 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog2* fnptr_getLog2;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog2(Builtin::Object* obj) { return ADV_UFCS(getLog2)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLog2P1 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog2P1* fnptr_getLog2P1;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog2P1(Builtin::Object* obj) { return ADV_UFCS(getLog2P1)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLog10 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog10* fnptr_getLog10;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog10(Builtin::Object* obj) { return ADV_UFCS(getLog10)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLog10P1 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog10P1* fnptr_getLog10P1;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog10P1(Builtin::Object* obj) { return ADV_UFCS(getLog10P1)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ILogarithmicFunctions $vtable_ILogarithmicFunctions_for = {$vtable_IFloatingPointConstants_for<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_32ed54beef74add1<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLn<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLnP1<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLog2<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLog2P1<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLog10<__AnyType>
		, &$vtables::$vtable_ILogarithmicFunctions::template impl_getLog10P1<__AnyType>
		};
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	template<class __AnyType> concept $ImplementsInterface_ILogarithmicFunctions = $ImplementsInterface_IFloatingPointConstants<__AnyType> && $HasMethodImplementation_32ed54beef74add1<__AnyType> && $HasMethodImplementation_get5db592de98823b87<__AnyType> && $HasMethodImplementation_getc069d0e65f9953ec<__AnyType> && $HasMethodImplementation_getb64032e6596adee1<__AnyType> && $HasMethodImplementation_getb404d003d2f6ed36<__AnyType> && $HasMethodImplementation_get19eb5c69f0906068<__AnyType> && $HasMethodImplementation_get3975df684ce0f77b<__AnyType>;
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	class ILogarithmicFunctions final : public Builtin::InterfaceRef {
		public: using $self = ILogarithmicFunctions;
		public: using $vtable = $vtables::$vtable_ILogarithmicFunctions;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class ILogarithmicFunctions$Unowned;
		friend class ILogarithmicFunctions$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = ILogarithmicFunctions$Unowned;
		public: using $weak_ref = ILogarithmicFunctions$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_ILogarithmicFunctions<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(ILogarithmicFunctions);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ILogarithmicFunctions(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ILogarithmicFunctions& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> ILogarithmicFunctions(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ILogarithmicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ILogarithmicFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ILogarithmicFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ILogarithmicFunctions(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ILogarithmicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ILogarithmicFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ILogarithmicFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ILogarithmicFunctions(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_ILogarithmicFunctions_for<__FixedType> } { static_assert($ImplementsInterface_ILogarithmicFunctions<__FixedType>, "Cannot initialize interface ILogarithmicFunctions from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> ILogarithmicFunctions& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_ILogarithmicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ILogarithmicFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ILogarithmicFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ILogarithmicFunctions& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_ILogarithmicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface ILogarithmicFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ILogarithmicFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ILogarithmicFunctions& operator=(__AnyType&& value) { static_assert($ImplementsInterface_ILogarithmicFunctions<__FixedType>, "Cannot initialize interface ILogarithmicFunctions from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_ILogarithmicFunctions_for<__FixedType>; return *this; }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Log(Builtin::OptionalStrongRef<Builtin::ObjectRef> base) const { ADV_EXPRESSION_BODY(_vtable->fnptr_32ed54beef74add1(_obj, base)); }
		
	};
	class ILogarithmicFunctions$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = ILogarithmicFunctions$Unowned;
		public: using $vtable = $vtables::$vtable_ILogarithmicFunctions;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class ILogarithmicFunctions;
		public: using $strong_ref = ILogarithmicFunctions;
		public: using $unowned_ref = $self;
		public: using $weak_ref = ILogarithmicFunctions$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(ILogarithmicFunctions$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> ILogarithmicFunctions$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ILogarithmicFunctions$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> ILogarithmicFunctions$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ILogarithmicFunctions$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class ILogarithmicFunctions$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = ILogarithmicFunctions$Weak;
		public: using $vtable = $vtables::$vtable_ILogarithmicFunctions;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class ILogarithmicFunctions;
		public: using $strong_ref = ILogarithmicFunctions;
		public: using $unowned_ref = ILogarithmicFunctions$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(ILogarithmicFunctions$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ILogarithmicFunctions$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> ILogarithmicFunctions$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ILogarithmicFunctions<__AnyType> ILogarithmicFunctions$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ILogarithmicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Log(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> base)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_32ed54beef74add1(Builtin::GetObjectReferenceFromInterface(&iface), base)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLn(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLn(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLnP1(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLnP1(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog2(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog2(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog2P1(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog2P1(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog10(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog10(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename ILogarithmicFunctions::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog10P1(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog10P1(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\ILogarithmicFunctions.ast"
	

}