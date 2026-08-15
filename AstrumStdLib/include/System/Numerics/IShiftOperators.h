#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IShiftOperators$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class TRight, class TResult> class IShiftOperators;
template<class TRight, class TResult> class IShiftOperators$Unowned;
template<class TRight, class TResult> class IShiftOperators$Weak;
class IShiftArithmetic;
class IShiftArithmetic$Unowned;
class IShiftArithmetic$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<class TRight, class TResult> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IShiftOperators<TRight, TResult>> = false;

namespace System::Numerics {
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_a76d0348da53253c = requires(typename __AnyType::$class t) { {t.operator>>(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {operator>>($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { std::declval<typename __AnyType::$self&>() >>std::declval<TRight>(); };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_8adb6a31272faec0 = requires(typename __AnyType::$class t) { {t.operator<<(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {operator<<($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { std::declval<typename __AnyType::$self&>() <<std::declval<TRight>(); };
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_b274c0df09ea9d81 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_gt(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_gt($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; };
	namespace $vtables {
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		template<class TRight, class TResult> struct $vtable_IShiftOperators
		{
			using fn_a76d0348da53253c = const TResult(Builtin::Object*, TRight rhs);
			fn_a76d0348da53253c* fnptr_a76d0348da53253c;
			#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const TResult impl_a76d0348da53253c(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator>>)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_8adb6a31272faec0 = const TResult(Builtin::Object*, TRight rhs);
			fn_8adb6a31272faec0* fnptr_8adb6a31272faec0;
			#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const TResult impl_8adb6a31272faec0(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator<<)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_b274c0df09ea9d81 = const TResult(Builtin::Object*, TRight rhs);
			fn_b274c0df09ea9d81* fnptr_b274c0df09ea9d81;
			#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const TResult impl_b274c0df09ea9d81(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_gt)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			
		};
	}
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType, class TRight, class TResult> inline constexpr $vtables::$vtable_IShiftOperators<TRight, TResult> $vtable_IShiftOperators_for = {&$vtables::$vtable_IShiftOperators<TRight, TResult>::template impl_a76d0348da53253c<__AnyType>
		, &$vtables::$vtable_IShiftOperators<TRight, TResult>::template impl_8adb6a31272faec0<__AnyType>
		, &$vtables::$vtable_IShiftOperators<TRight, TResult>::template impl_b274c0df09ea9d81<__AnyType>
		};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $ImplementsInterface_IShiftOperators = $HasMethodImplementation_a76d0348da53253c<__AnyType, TRight, TResult> && $HasMethodImplementation_8adb6a31272faec0<__AnyType, TRight, TResult> && $HasMethodImplementation_b274c0df09ea9d81<__AnyType, TRight, TResult>;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class TRight, class TResult> class IShiftOperators final : public Builtin::InterfaceRef {
		public: using $self = IShiftOperators<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IShiftOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IShiftOperators$Unowned<TRight, TResult>;
		friend class IShiftOperators$Weak<TRight, TResult>;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IShiftOperators$Unowned<TRight, TResult>;
		public: using $weak_ref = IShiftOperators$Weak<TRight, TResult>;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IShiftOperators);
		public: using ElementType = TRight;
		public: template<class, class> friend class IShiftOperators;
		public: template<class, class> friend class IShiftOperators$Unowned;
		public: template<class, class> friend class IShiftOperators$Weak;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators(const IShiftOperators<Other__TRight, Other__TResult>& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { Builtin::Retain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators & operator=(const IShiftOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); Builtin::Retain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IShiftOperators < Other__TRight, Other__TResult>&&> IShiftOperators(IShiftOperators < Other__TRight, Other__TResult>&& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IShiftOperators < Other__TRight, Other__TResult>&&> IShiftOperators & operator=(IShiftOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IShiftOperators(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IShiftOperators& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IShiftOperators(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IShiftOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IShiftOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IShiftOperators(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IShiftOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IShiftOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IShiftOperators(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IShiftOperators_for<__FixedType, TRight, TResult> } { static_assert($ImplementsInterface_IShiftOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IShiftOperators from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IShiftOperators& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IShiftOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IShiftOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IShiftOperators& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IShiftOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IShiftOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IShiftOperators& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IShiftOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IShiftOperators from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IShiftOperators_for<__FixedType, TRight, TResult>; return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const TResult operator>>(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_a76d0348da53253c(_obj, rhs)); }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const TResult operator<<(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_8adb6a31272faec0(_obj, rhs)); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const TResult _operator_gt_gt_gt(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b274c0df09ea9d81(_obj, rhs)); }
		
	};
	template<class TRight, class TResult> class IShiftOperators$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IShiftOperators$Unowned<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IShiftOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IShiftOperators<TRight, TResult>;
		public: using $strong_ref = IShiftOperators<TRight, TResult>;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IShiftOperators$Weak<TRight, TResult>;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IShiftOperators$Unowned);
		public: template<class, class> friend class IShiftOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators$Unowned(const IShiftOperators<Other__TRight, Other__TResult>& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { Builtin::UnownedRetain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators$Unowned& operator=(const IShiftOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); Builtin::UnownedRetain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IShiftOperators < Other__TRight, Other__TResult>&&> IShiftOperators$Unowned(IShiftOperators < Other__TRight, Other__TResult>&& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IShiftOperators < Other__TRight, Other__TResult>&&> IShiftOperators$Unowned& operator=(IShiftOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> IShiftOperators$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IShiftOperators$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> IShiftOperators$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IShiftOperators$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class TRight, class TResult> class IShiftOperators$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IShiftOperators$Weak<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IShiftOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IShiftOperators<TRight, TResult>;
		public: using $strong_ref = IShiftOperators<TRight, TResult>;
		public: using $unowned_ref = IShiftOperators$Unowned<TRight, TResult>;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IShiftOperators$Weak);
		public: template<class, class> friend class IShiftOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators$Weak(const IShiftOperators<Other__TRight, Other__TResult>& other) : $super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } {}
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IShiftOperators$Weak& operator=(const IShiftOperators < Other__TRight, Other__TResult>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); } return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftOperators$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> IShiftOperators$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftOperators<__AnyType, TRight, TResult> IShiftOperators$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IShiftOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftOperators::$vtable> FORCE_INLINE const TResult operator>>(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a76d0348da53253c(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftOperators::$vtable> FORCE_INLINE const TResult operator<<(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8adb6a31272faec0(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftOperators::$vtable> FORCE_INLINE const TResult _operator_gt_gt_gt(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b274c0df09ea9d81(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IShiftArithmetic> = false;

namespace System::Numerics {
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_a9302f7f567b3aa0 = requires(typename __AnyType::$class t) { {t.operator>>(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator>>($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() >>std::declval<Builtin::i32>(); };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_ebc0d8112f8dbde5 = requires(typename __AnyType::$class t) { {t.operator>>=(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator>>=($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() >>=std::declval<Builtin::i32>(); };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_b72a0b65362ec5e8 = requires(typename __AnyType::$class t) { {t.operator<<(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator<<($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() <<std::declval<Builtin::i32>(); };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_80e3c7915cb7a40d = requires(typename __AnyType::$class t) { {t.operator<<=(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator<<=($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() <<=std::declval<Builtin::i32>(); };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_d941d3ef72559c1d = requires(typename __AnyType::$class t) { {t._operator_gt_gt_gt(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_gt($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_d7091ff23d5e3ada = requires(typename __AnyType::$class t) { {t._operator_gt_gt_gt_eq(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_gt_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_12876516ce11fc33 = requires(typename __AnyType::$class t) { {t._operator_lt_lt_bsl(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_bsl($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_e19068bc2641ba30 = requires(typename __AnyType::$class t) { {t._operator_lt_lt_bsl_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_lt_lt_bsl_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_6669e0df8e298bed = requires(typename __AnyType::$class t) { {t._operator_gt_gt_bsl(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_bsl($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_8c7ae758eab0efb2 = requires(typename __AnyType::$class t) { {t._operator_gt_gt_bsl_eq(std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_gt_gt_bsl_eq($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::u32>())} -> std::convertible_to<typename __AnyType::$self>; };
	namespace $vtables {
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		struct $vtable_IShiftArithmetic
		{
			using fn_a9302f7f567b3aa0 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_a9302f7f567b3aa0* fnptr_a9302f7f567b3aa0;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_a9302f7f567b3aa0(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(operator>>)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_ebc0d8112f8dbde5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_ebc0d8112f8dbde5* fnptr_ebc0d8112f8dbde5;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ebc0d8112f8dbde5(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(operator>>=)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_b72a0b65362ec5e8 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_b72a0b65362ec5e8* fnptr_b72a0b65362ec5e8;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_b72a0b65362ec5e8(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(operator<<)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_80e3c7915cb7a40d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_80e3c7915cb7a40d* fnptr_80e3c7915cb7a40d;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_80e3c7915cb7a40d(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(operator<<=)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_d941d3ef72559c1d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_d941d3ef72559c1d* fnptr_d941d3ef72559c1d;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d941d3ef72559c1d(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_gt)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_d7091ff23d5e3ada = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_d7091ff23d5e3ada* fnptr_d7091ff23d5e3ada;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d7091ff23d5e3ada(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_gt_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_12876516ce11fc33 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 amount);
			fn_12876516ce11fc33* fnptr_12876516ce11fc33;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_12876516ce11fc33(Builtin::Object* obj, Builtin::u32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_bsl)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_e19068bc2641ba30 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 amount);
			fn_e19068bc2641ba30* fnptr_e19068bc2641ba30;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_e19068bc2641ba30(Builtin::Object* obj, Builtin::u32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_lt_lt_bsl_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_6669e0df8e298bed = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 amount);
			fn_6669e0df8e298bed* fnptr_6669e0df8e298bed;
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_6669e0df8e298bed(Builtin::Object* obj, Builtin::u32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_bsl)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_8c7ae758eab0efb2 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::u32 amount);
			fn_8c7ae758eab0efb2* fnptr_8c7ae758eab0efb2;
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_8c7ae758eab0efb2(Builtin::Object* obj, Builtin::u32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_gt_gt_bsl_eq)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			
		};
	}
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IShiftArithmetic $vtable_IShiftArithmetic_for = {&$vtables::$vtable_IShiftArithmetic::template impl_a9302f7f567b3aa0<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_ebc0d8112f8dbde5<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_b72a0b65362ec5e8<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_80e3c7915cb7a40d<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_d941d3ef72559c1d<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_d7091ff23d5e3ada<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_12876516ce11fc33<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_e19068bc2641ba30<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_6669e0df8e298bed<__AnyType>
		, &$vtables::$vtable_IShiftArithmetic::template impl_8c7ae758eab0efb2<__AnyType>
		};
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	template<class __AnyType> concept $ImplementsInterface_IShiftArithmetic = $HasMethodImplementation_a9302f7f567b3aa0<__AnyType> && $HasMethodImplementation_ebc0d8112f8dbde5<__AnyType> && $HasMethodImplementation_b72a0b65362ec5e8<__AnyType> && $HasMethodImplementation_80e3c7915cb7a40d<__AnyType> && $HasMethodImplementation_d941d3ef72559c1d<__AnyType> && $HasMethodImplementation_d7091ff23d5e3ada<__AnyType> && $HasMethodImplementation_12876516ce11fc33<__AnyType> && $HasMethodImplementation_e19068bc2641ba30<__AnyType> && $HasMethodImplementation_6669e0df8e298bed<__AnyType> && $HasMethodImplementation_8c7ae758eab0efb2<__AnyType>;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	class IShiftArithmetic final : public Builtin::InterfaceRef {
		public: using $self = IShiftArithmetic;
		public: using $vtable = $vtables::$vtable_IShiftArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IShiftArithmetic$Unowned;
		friend class IShiftArithmetic$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IShiftArithmetic$Unowned;
		public: using $weak_ref = IShiftArithmetic$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IShiftArithmetic<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IShiftArithmetic);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IShiftArithmetic(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IShiftArithmetic& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IShiftArithmetic(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IShiftArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IShiftArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IShiftArithmetic(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IShiftArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IShiftArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IShiftArithmetic(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IShiftArithmetic_for<__FixedType> } { static_assert($ImplementsInterface_IShiftArithmetic<__FixedType>, "Cannot initialize interface IShiftArithmetic from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IShiftArithmetic& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IShiftArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IShiftArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IShiftArithmetic& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IShiftArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IShiftArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IShiftArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IShiftArithmetic& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IShiftArithmetic<__FixedType>, "Cannot initialize interface IShiftArithmetic from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IShiftArithmetic_for<__FixedType>; return *this; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator>>(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_a9302f7f567b3aa0(_obj, amount)); }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator>>=(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ebc0d8112f8dbde5(_obj, amount)); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator<<(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_b72a0b65362ec5e8(_obj, amount)); }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator<<=(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_80e3c7915cb7a40d(_obj, amount)); }
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_gt(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d941d3ef72559c1d(_obj, amount)); }
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_gt_eq(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d7091ff23d5e3ada(_obj, amount)); }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_bsl(Builtin::u32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_12876516ce11fc33(_obj, amount)); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_bsl_eq(Builtin::u32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_e19068bc2641ba30(_obj, amount)); }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_bsl(Builtin::u32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_6669e0df8e298bed(_obj, amount)); }
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_bsl_eq(Builtin::u32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_8c7ae758eab0efb2(_obj, amount)); }
		
	};
	class IShiftArithmetic$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IShiftArithmetic$Unowned;
		public: using $vtable = $vtables::$vtable_IShiftArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IShiftArithmetic;
		public: using $strong_ref = IShiftArithmetic;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IShiftArithmetic$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IShiftArithmetic$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> IShiftArithmetic$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IShiftArithmetic$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> IShiftArithmetic$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IShiftArithmetic$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IShiftArithmetic$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IShiftArithmetic$Weak;
		public: using $vtable = $vtables::$vtable_IShiftArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IShiftArithmetic;
		public: using $strong_ref = IShiftArithmetic;
		public: using $unowned_ref = IShiftArithmetic$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IShiftArithmetic$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IShiftArithmetic$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> IShiftArithmetic$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IShiftArithmetic<__AnyType> IShiftArithmetic$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IShiftArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator>>(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a9302f7f567b3aa0(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator>>=(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ebc0d8112f8dbde5(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator<<(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_b72a0b65362ec5e8(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator<<=(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_80e3c7915cb7a40d(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_gt(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d941d3ef72559c1d(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_gt_eq(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d7091ff23d5e3ada(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_bsl(const __AnyInterface& iface, Builtin::u32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_12876516ce11fc33(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_lt_lt_bsl_eq(const __AnyInterface& iface, Builtin::u32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_e19068bc2641ba30(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_bsl(const __AnyInterface& iface, Builtin::u32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6669e0df8e298bed(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IShiftArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_gt_gt_bsl_eq(const __AnyInterface& iface, Builtin::u32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8c7ae758eab0efb2(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IShiftOperators.ast"
	

}