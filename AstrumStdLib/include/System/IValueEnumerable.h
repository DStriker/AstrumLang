#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IComparable.h"
#include "IEquatable.h"
#include "System/Numerics/IAdditionOperators.h"
using namespace System::Numerics;
#include "System/Numerics/ISubtractionOperators.h"
using namespace System::Numerics;
#include "System/Numerics/IIncrementOperators.h"
using namespace System::Numerics;
#include "System/Numerics/IDecrementOperators.h"
using namespace System::Numerics;

namespace System {
namespace __Unsafe {} namespace __IValueEnumerable$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IValueEnumerable;
class IValueEnumerable$Unowned;
class IValueEnumerable$Weak;
} namespace $extensions {
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::IValueEnumerable> = false;

namespace System {
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(ISelfComparable, ISelfComparable);
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(IAdditiveArithmetic, IAdditiveArithmetic);
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(ISubtractableArithmetic, ISubtractableArithmetic);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(IIncrementable, IIncrementable);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	ADV_CHECK_INTERFACE(IDecrementable, IDecrementable);
	namespace $vtables {
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
		struct $vtable_IValueEnumerable : public ISelfComparable::$vtable, public ISelfEquatable::$vtable, public IAdditiveArithmetic::$vtable, public ISubtractableArithmetic::$vtable, public IIncrementable::$vtable, public IDecrementable::$vtable
		{
			
		};
	}
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IValueEnumerable $vtable_IValueEnumerable_for = {$vtable_ISelfComparable_for<__AnyType>
		, $vtable_ISelfEquatable_for<__AnyType>
		, $vtable_IAdditiveArithmetic_for<__AnyType>
		, $vtable_ISubtractableArithmetic_for<__AnyType>
		, $vtable_IIncrementable_for<__AnyType>
		, $vtable_IDecrementable_for<__AnyType>
		};
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	template<class __AnyType> concept $ImplementsInterface_IValueEnumerable = $ImplementsInterface_ISelfComparable<__AnyType> && $ImplementsInterface_ISelfEquatable<__AnyType> && $ImplementsInterface_IAdditiveArithmetic<__AnyType> && $ImplementsInterface_ISubtractableArithmetic<__AnyType> && $ImplementsInterface_IIncrementable<__AnyType> && $ImplementsInterface_IDecrementable<__AnyType>;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	class IValueEnumerable final : public Builtin::InterfaceRef {
		public: using $self = IValueEnumerable;
		public: using $vtable = $vtables::$vtable_IValueEnumerable;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IValueEnumerable$Unowned;
		friend class IValueEnumerable$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IValueEnumerable$Unowned;
		public: using $weak_ref = IValueEnumerable$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IValueEnumerable<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IValueEnumerable);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IValueEnumerable(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IValueEnumerable& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IValueEnumerable(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IValueEnumerable<std::decay_t<__AnyType>>,"Cannot initialize interface IValueEnumerable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IValueEnumerable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IValueEnumerable(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IValueEnumerable<std::decay_t<__AnyType>>,"Cannot initialize interface IValueEnumerable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IValueEnumerable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IValueEnumerable(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IValueEnumerable_for<__FixedType> } { static_assert($ImplementsInterface_IValueEnumerable<__FixedType>, "Cannot initialize interface IValueEnumerable from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IValueEnumerable& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IValueEnumerable<std::decay_t<__AnyType>>,"Cannot initialize interface IValueEnumerable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IValueEnumerable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IValueEnumerable& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IValueEnumerable<std::decay_t<__AnyType>>,"Cannot initialize interface IValueEnumerable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IValueEnumerable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IValueEnumerable& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IValueEnumerable<__FixedType>, "Cannot initialize interface IValueEnumerable from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IValueEnumerable_for<__FixedType>; return *this; }
		
	};
	class IValueEnumerable$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IValueEnumerable$Unowned;
		public: using $vtable = $vtables::$vtable_IValueEnumerable;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IValueEnumerable;
		public: using $strong_ref = IValueEnumerable;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IValueEnumerable$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IValueEnumerable$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> IValueEnumerable$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IValueEnumerable$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> IValueEnumerable$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IValueEnumerable$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IValueEnumerable$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IValueEnumerable$Weak;
		public: using $vtable = $vtables::$vtable_IValueEnumerable;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IValueEnumerable;
		public: using $strong_ref = IValueEnumerable;
		public: using $unowned_ref = IValueEnumerable$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IValueEnumerable$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IValueEnumerable$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> IValueEnumerable$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IValueEnumerable<__AnyType> IValueEnumerable$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IValueEnumerable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IValueEnumerable.ast"
	

}