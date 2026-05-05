#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IUnaryNegationOperators_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class TResult> class IUnaryNegationOperators;
template<class TResult> class IUnaryNegationOperators__Unowned;
template<class TResult> class IUnaryNegationOperators__Weak;
class IUnaryNegatable;
class IUnaryNegatable__Unowned;
class IUnaryNegatable__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<class TResult> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IUnaryNegationOperators<TResult>> = false;

namespace System::Numerics {
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType, class TResult> concept __HasMethodImplementation_4d001280d480037d = requires(typename __AnyType::__class t) { {t.operator-()} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::__self t) { {operator-(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<TResult>; } || requires { { [] { using namespace __extensions; return -std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<TResult>; };
	namespace __vtables {
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
		template<class TResult> struct __vtable_IUnaryNegationOperators
		{
			using fn_4d001280d480037d = const TResult(Builtin::Object*);
			fn_4d001280d480037d* fnptr_4d001280d480037d;
			#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
			template<class __AnyType> static const TResult impl_4d001280d480037d(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(operator-)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType, class TResult> inline constexpr __vtables::__vtable_IUnaryNegationOperators<TResult> __vtable_IUnaryNegationOperators_for = {&__vtables::__vtable_IUnaryNegationOperators<TResult>::template impl_4d001280d480037d<__AnyType>
		};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType, class TResult> concept __ImplementsInterface_IUnaryNegationOperators = __HasMethodImplementation_4d001280d480037d<__AnyType, TResult>;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class TResult> class IUnaryNegationOperators final : public Builtin::InterfaceRef {
		public: using __self = IUnaryNegationOperators<TResult>;
		public: using __vtable = __vtables::__vtable_IUnaryNegationOperators<TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IUnaryNegationOperators__Unowned<TResult>;
		friend class IUnaryNegationOperators__Weak<TResult>;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IUnaryNegationOperators__Unowned<TResult>;
		public: using __weak_ref = IUnaryNegationOperators__Weak<TResult>;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IUnaryNegationOperators);
		public: using ElementType = TResult;
		public: template<class> friend class IUnaryNegationOperators;
		public: template<class> friend class IUnaryNegationOperators__Unowned;
		public: template<class> friend class IUnaryNegationOperators__Weak;
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators(const IUnaryNegationOperators<Other__TResult>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { Builtin::Retain(_obj); }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators & operator=(const IUnaryNegationOperators < Other__TResult>& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); Builtin::Retain(_obj); return *this; }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IUnaryNegationOperators < Other__TResult>&&> IUnaryNegationOperators(IUnaryNegationOperators < Other__TResult>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IUnaryNegationOperators < Other__TResult>&&> IUnaryNegationOperators & operator=(IUnaryNegationOperators < Other__TResult>&& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IUnaryNegationOperators(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IUnaryNegationOperators& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IUnaryNegationOperators(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IUnaryNegationOperators<std::decay_t<__AnyType>, TResult>,"Cannot initialize interface IUnaryNegationOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegationOperators_for<typename __AnyType::__type, TResult>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IUnaryNegationOperators(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IUnaryNegationOperators<std::decay_t<__AnyType>, TResult>,"Cannot initialize interface IUnaryNegationOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegationOperators_for<typename __AnyType::__type, TResult>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IUnaryNegationOperators(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IUnaryNegationOperators_for<__FixedType, TResult> } { static_assert(__ImplementsInterface_IUnaryNegationOperators<__FixedType, TResult>, "Cannot initialize interface IUnaryNegationOperators from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IUnaryNegationOperators& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IUnaryNegationOperators<std::decay_t<__AnyType>, TResult>,"Cannot initialize interface IUnaryNegationOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegationOperators_for<typename __AnyType::__type, TResult>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IUnaryNegationOperators& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IUnaryNegationOperators<std::decay_t<__AnyType>, TResult>,"Cannot initialize interface IUnaryNegationOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegationOperators_for<typename __AnyType::__type, TResult>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IUnaryNegationOperators& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IUnaryNegationOperators<__FixedType, TResult>, "Cannot initialize interface IUnaryNegationOperators from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IUnaryNegationOperators_for<__FixedType, TResult>; return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
		public: FORCE_INLINE const TResult operator-() const { ADV_EXPRESSION_BODY(_vtable->fnptr_4d001280d480037d(_obj)); }
		
	};
	template<class TResult> class IUnaryNegationOperators__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IUnaryNegationOperators__Unowned<TResult>;
		public: using __vtable = __vtables::__vtable_IUnaryNegationOperators<TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IUnaryNegationOperators<TResult>;
		public: using __strong_ref = IUnaryNegationOperators<TResult>;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IUnaryNegationOperators__Weak<TResult>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IUnaryNegationOperators__Unowned);
		public: template<class> friend class IUnaryNegationOperators;
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators__Unowned(const IUnaryNegationOperators<Other__TResult>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { Builtin::UnownedRetain(_obj); }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators__Unowned& operator=(const IUnaryNegationOperators < Other__TResult>& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); Builtin::UnownedRetain(_obj); return *this; }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IUnaryNegationOperators < Other__TResult>&&> IUnaryNegationOperators__Unowned(IUnaryNegationOperators < Other__TResult>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IUnaryNegationOperators < Other__TResult>&&> IUnaryNegationOperators__Unowned& operator=(IUnaryNegationOperators < Other__TResult>&& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> IUnaryNegationOperators__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> && std::is_rvalue_reference_v<__AnyType&&> IUnaryNegationOperators__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> IUnaryNegationOperators__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> && std::is_rvalue_reference_v<__AnyType&&> IUnaryNegationOperators__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class TResult> class IUnaryNegationOperators__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IUnaryNegationOperators__Weak<TResult>;
		public: using __vtable = __vtables::__vtable_IUnaryNegationOperators<TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IUnaryNegationOperators<TResult>;
		public: using __strong_ref = IUnaryNegationOperators<TResult>;
		public: using __unowned_ref = IUnaryNegationOperators__Unowned<TResult>;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IUnaryNegationOperators__Weak);
		public: template<class> friend class IUnaryNegationOperators;
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators__Weak(const IUnaryNegationOperators<Other__TResult>& other) : ___super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } {}
		public: template<class Other__TResult> requires std::same_as<Other__TResult, TResult> IUnaryNegationOperators__Weak& operator=(const IUnaryNegationOperators < Other__TResult>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); } return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegationOperators__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> IUnaryNegationOperators__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegationOperators<__AnyType, TResult> IUnaryNegationOperators__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IUnaryNegationOperators_for<std::remove_cvref_t<__AnyType>, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IUnaryNegationOperators::__vtable> FORCE_INLINE const TResult operator-(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_4d001280d480037d(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IUnaryNegatable> = false;

namespace System::Numerics {
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_a8388e3f3427f04e = requires(typename __AnyType::__class t) { {t.operator-()} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator-(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return -std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	namespace __vtables {
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
		struct __vtable_IUnaryNegatable
		{
			using fn_a8388e3f3427f04e = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_a8388e3f3427f04e* fnptr_a8388e3f3427f04e;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_a8388e3f3427f04e(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(operator-)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IUnaryNegatable __vtable_IUnaryNegatable_for = {&__vtables::__vtable_IUnaryNegatable::template impl_a8388e3f3427f04e<__AnyType>
		};
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	template<class __AnyType> concept __ImplementsInterface_IUnaryNegatable = __HasMethodImplementation_a8388e3f3427f04e<__AnyType>;
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	class IUnaryNegatable final : public Builtin::InterfaceRef {
		public: using __self = IUnaryNegatable;
		public: using __vtable = __vtables::__vtable_IUnaryNegatable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IUnaryNegatable__Unowned;
		friend class IUnaryNegatable__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IUnaryNegatable__Unowned;
		public: using __weak_ref = IUnaryNegatable__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IUnaryNegatable<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IUnaryNegatable);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IUnaryNegatable(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IUnaryNegatable& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IUnaryNegatable(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IUnaryNegatable<std::decay_t<__AnyType>>,"Cannot initialize interface IUnaryNegatable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegatable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IUnaryNegatable(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IUnaryNegatable<std::decay_t<__AnyType>>,"Cannot initialize interface IUnaryNegatable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegatable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IUnaryNegatable(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IUnaryNegatable_for<__FixedType> } { static_assert(__ImplementsInterface_IUnaryNegatable<__FixedType>, "Cannot initialize interface IUnaryNegatable from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IUnaryNegatable& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IUnaryNegatable<std::decay_t<__AnyType>>,"Cannot initialize interface IUnaryNegatable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegatable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IUnaryNegatable& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IUnaryNegatable<std::decay_t<__AnyType>>,"Cannot initialize interface IUnaryNegatable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IUnaryNegatable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IUnaryNegatable& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IUnaryNegatable<__FixedType>, "Cannot initialize interface IUnaryNegatable from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IUnaryNegatable_for<__FixedType>; return *this; }
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator-() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a8388e3f3427f04e(_obj)); }
		
	};
	class IUnaryNegatable__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IUnaryNegatable__Unowned;
		public: using __vtable = __vtables::__vtable_IUnaryNegatable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IUnaryNegatable;
		public: using __strong_ref = IUnaryNegatable;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IUnaryNegatable__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IUnaryNegatable__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> IUnaryNegatable__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IUnaryNegatable__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> IUnaryNegatable__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IUnaryNegatable__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IUnaryNegatable__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IUnaryNegatable__Weak;
		public: using __vtable = __vtables::__vtable_IUnaryNegatable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IUnaryNegatable;
		public: using __strong_ref = IUnaryNegatable;
		public: using __unowned_ref = IUnaryNegatable__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IUnaryNegatable__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IUnaryNegatable__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> IUnaryNegatable__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IUnaryNegatable<__AnyType> IUnaryNegatable__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IUnaryNegatable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IUnaryNegatable::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator-(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a8388e3f3427f04e(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IUnaryNegationOperators.ast"
	

}