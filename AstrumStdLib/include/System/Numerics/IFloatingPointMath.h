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

namespace System::Numerics {
namespace __Unsafe {} namespace __IFloatingPointMath_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFloatingPointMath;
class IFloatingPointMath__Unowned;
class IFloatingPointMath__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFloatingPointMath> = false;

namespace System::Numerics {
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(IFloatingPoint, IFloatingPoint);
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(IExponentialFunctions, IExponentialFunctions);
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(IHyperbolicFunctions, IHyperbolicFunctions);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(ILogarithmicFunctions, ILogarithmicFunctions);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(ITrigonometricFunctions, ITrigonometricFunctions);
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(IRootFunctions, IRootFunctions);
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	ADV_CHECK_INTERFACE(IPowerArithmetic, IPowerArithmetic);
	namespace __vtables {
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
		struct __vtable_IFloatingPointMath : public IFloatingPoint::__vtable, public IExponentialFunctions::__vtable, public IHyperbolicFunctions::__vtable, public ILogarithmicFunctions::__vtable, public ITrigonometricFunctions::__vtable, public IRootFunctions::__vtable, public IPowerArithmetic::__vtable
		{
			
		};
	}
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IFloatingPointMath __vtable_IFloatingPointMath_for = {__vtable_IFloatingPoint_for<__AnyType>
		, __vtable_IExponentialFunctions_for<__AnyType>
		, __vtable_IHyperbolicFunctions_for<__AnyType>
		, __vtable_ILogarithmicFunctions_for<__AnyType>
		, __vtable_ITrigonometricFunctions_for<__AnyType>
		, __vtable_IRootFunctions_for<__AnyType>
		, __vtable_IPowerArithmetic_for<__AnyType>
		};
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	template<class __AnyType> concept __ImplementsInterface_IFloatingPointMath = __ImplementsInterface_IFloatingPoint<__AnyType> && __ImplementsInterface_IExponentialFunctions<__AnyType> && __ImplementsInterface_IHyperbolicFunctions<__AnyType> && __ImplementsInterface_ILogarithmicFunctions<__AnyType> && __ImplementsInterface_ITrigonometricFunctions<__AnyType> && __ImplementsInterface_IRootFunctions<__AnyType> && __ImplementsInterface_IPowerArithmetic<__AnyType>;
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	class IFloatingPointMath final : public Builtin::InterfaceRef {
		public: using __self = IFloatingPointMath;
		public: using __vtable = __vtables::__vtable_IFloatingPointMath;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IFloatingPointMath__Unowned;
		friend class IFloatingPointMath__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IFloatingPointMath__Unowned;
		public: using __weak_ref = IFloatingPointMath__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IFloatingPointMath<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFloatingPointMath);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointMath(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFloatingPointMath& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFloatingPointMath(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPointMath<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointMath from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointMath_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointMath(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFloatingPointMath<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointMath from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointMath_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointMath(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IFloatingPointMath_for<__FixedType> } { static_assert(__ImplementsInterface_IFloatingPointMath<__FixedType>, "Cannot initialize interface IFloatingPointMath from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFloatingPointMath& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IFloatingPointMath<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointMath from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointMath_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFloatingPointMath& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IFloatingPointMath<std::decay_t<__AnyType>>,"Cannot initialize interface IFloatingPointMath from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFloatingPointMath_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFloatingPointMath& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IFloatingPointMath<__FixedType>, "Cannot initialize interface IFloatingPointMath from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IFloatingPointMath_for<__FixedType>; return *this; }
		
	};
	class IFloatingPointMath__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IFloatingPointMath__Unowned;
		public: using __vtable = __vtables::__vtable_IFloatingPointMath;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IFloatingPointMath;
		public: using __strong_ref = IFloatingPointMath;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IFloatingPointMath__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFloatingPointMath__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> IFloatingPointMath__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointMath__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> IFloatingPointMath__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFloatingPointMath__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFloatingPointMath__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IFloatingPointMath__Weak;
		public: using __vtable = __vtables::__vtable_IFloatingPointMath;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IFloatingPointMath;
		public: using __strong_ref = IFloatingPointMath;
		public: using __unowned_ref = IFloatingPointMath__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFloatingPointMath__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFloatingPointMath__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> IFloatingPointMath__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFloatingPointMath<__AnyType> IFloatingPointMath__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFloatingPointMath_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFloatingPointMath.ast"
	

}