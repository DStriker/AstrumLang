#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBitwiseOperators$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class TRight, class TResult> class IBitwiseOperators;
template<class TRight, class TResult> class IBitwiseOperators$Unowned;
template<class TRight, class TResult> class IBitwiseOperators$Weak;
class IBitwiseArithmetic;
class IBitwiseArithmetic$Unowned;
class IBitwiseArithmetic$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<class TRight, class TResult> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBitwiseOperators<TRight, TResult>> = false;

namespace System::Numerics {
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_0f83b4b1085dbddf = requires(typename __AnyType::$class t) { {t.operator&(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {operator&($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { std::declval<typename __AnyType::$self&>() &std::declval<TRight>(); };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_79d39e0b465d190d = requires(typename __AnyType::$class t) { {t.operator|(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {operator|($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { std::declval<typename __AnyType::$self&>() |std::declval<TRight>(); };
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_f183daed81464b97 = requires(typename __AnyType::$class t) { {t.operator^(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {operator^($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { std::declval<typename __AnyType::$self&>() ^std::declval<TRight>(); };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $HasMethodImplementation_8cd18992d9748d40 = requires(typename __AnyType::$class t) { {t._operator_not()} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::$self t) { {_operator_not($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<TResult>; };
	namespace $vtables {
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		template<class TRight, class TResult> struct $vtable_IBitwiseOperators
		{
			using fn_0f83b4b1085dbddf = const TResult(Builtin::Object*, TRight rhs);
			fn_0f83b4b1085dbddf* fnptr_0f83b4b1085dbddf;
			#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_0f83b4b1085dbddf(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_79d39e0b465d190d = const TResult(Builtin::Object*, TRight rhs);
			fn_79d39e0b465d190d* fnptr_79d39e0b465d190d;
			#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_79d39e0b465d190d(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_f183daed81464b97 = const TResult(Builtin::Object*, TRight rhs);
			fn_f183daed81464b97* fnptr_f183daed81464b97;
			#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_f183daed81464b97(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_8cd18992d9748d40 = const TResult(Builtin::Object*);
			fn_8cd18992d9748d40* fnptr_8cd18992d9748d40;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_8cd18992d9748d40(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_not)(*static_cast<typename __AnyType::$class*>(obj))); }
			
		};
	}
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> inline constexpr $vtables::$vtable_IBitwiseOperators<TRight, TResult> $vtable_IBitwiseOperators_for = {&$vtables::$vtable_IBitwiseOperators<TRight, TResult>::template impl_0f83b4b1085dbddf<__AnyType>
		, &$vtables::$vtable_IBitwiseOperators<TRight, TResult>::template impl_79d39e0b465d190d<__AnyType>
		, &$vtables::$vtable_IBitwiseOperators<TRight, TResult>::template impl_f183daed81464b97<__AnyType>
		, &$vtables::$vtable_IBitwiseOperators<TRight, TResult>::template impl_8cd18992d9748d40<__AnyType>
		};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept $ImplementsInterface_IBitwiseOperators = $HasMethodImplementation_0f83b4b1085dbddf<__AnyType, TRight, TResult> && $HasMethodImplementation_79d39e0b465d190d<__AnyType, TRight, TResult> && $HasMethodImplementation_f183daed81464b97<__AnyType, TRight, TResult> && $HasMethodImplementation_8cd18992d9748d40<__AnyType, TRight, TResult>;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class TRight, class TResult> class IBitwiseOperators final : public Builtin::InterfaceRef {
		public: using $self = IBitwiseOperators<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IBitwiseOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IBitwiseOperators$Unowned<TRight, TResult>;
		friend class IBitwiseOperators$Weak<TRight, TResult>;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IBitwiseOperators$Unowned<TRight, TResult>;
		public: using $weak_ref = IBitwiseOperators$Weak<TRight, TResult>;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBitwiseOperators);
		public: using ElementType = TRight;
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class, class> friend class IBitwiseOperators$Unowned;
		public: template<class, class> friend class IBitwiseOperators$Weak;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { Builtin::Retain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators & operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); Builtin::Retain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators(IBitwiseOperators < Other__TRight, Other__TResult>&& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators & operator=(IBitwiseOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseOperators(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseOperators& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBitwiseOperators(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseOperators(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IBitwiseOperators_for<__FixedType, TRight, TResult> } { static_assert($ImplementsInterface_IBitwiseOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IBitwiseOperators from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBitwiseOperators& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseOperators& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IBitwiseOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IBitwiseOperators from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IBitwiseOperators_for<__FixedType, TRight, TResult>; return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator&(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0f83b4b1085dbddf(_obj, rhs)); }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator|(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_79d39e0b465d190d(_obj, rhs)); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator^(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_f183daed81464b97(_obj, rhs)); }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult _operator_not() const { ADV_EXPRESSION_BODY(_vtable->fnptr_8cd18992d9748d40(_obj)); }
		
	};
	template<class TRight, class TResult> class IBitwiseOperators$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IBitwiseOperators$Unowned<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IBitwiseOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IBitwiseOperators<TRight, TResult>;
		public: using $strong_ref = IBitwiseOperators<TRight, TResult>;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IBitwiseOperators$Weak<TRight, TResult>;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBitwiseOperators$Unowned);
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators$Unowned(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { Builtin::UnownedRetain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators$Unowned& operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); Builtin::UnownedRetain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators$Unowned(IBitwiseOperators < Other__TRight, Other__TResult>&& other) : $super(other._obj), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators$Unowned& operator=(IBitwiseOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class TRight, class TResult> class IBitwiseOperators$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IBitwiseOperators$Weak<TRight, TResult>;
		public: using $vtable = $vtables::$vtable_IBitwiseOperators<TRight, TResult>;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IBitwiseOperators<TRight, TResult>;
		public: using $strong_ref = IBitwiseOperators<TRight, TResult>;
		public: using $unowned_ref = IBitwiseOperators$Unowned<TRight, TResult>;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBitwiseOperators$Weak);
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators$Weak(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : $super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const $vtable*>(other._vtable) } {}
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators$Weak& operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
		_vtable = reinterpret_cast<const $vtable*>(other._vtable); } return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseOperators$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseOperators::$vtable> FORCE_INLINE const TResult operator&(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0f83b4b1085dbddf(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseOperators::$vtable> FORCE_INLINE const TResult operator|(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_79d39e0b465d190d(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseOperators::$vtable> FORCE_INLINE const TResult operator^(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f183daed81464b97(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseOperators::$vtable> FORCE_INLINE const TResult _operator_not(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8cd18992d9748d40(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBitwiseArithmetic> = false;

namespace System::Numerics {
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_980795089d91db98 = requires(typename __AnyType::$class t) { {t.operator&(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator&($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() &std::declval<typename __AnyType::$self>(); };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_6c1328329ef60343 = requires(typename __AnyType::$class t) { {t.operator&=(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator&=($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() &=std::declval<typename __AnyType::$self>(); };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_ff48234ff2ef088e = requires(typename __AnyType::$class t) { {t.operator|(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator|($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() |std::declval<typename __AnyType::$self>(); };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_abe6996c7fe0b9d5 = requires(typename __AnyType::$class t) { {t.operator|=(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator|=($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() |=std::declval<typename __AnyType::$self>(); };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_d8a5ef24f4bcfa30 = requires(typename __AnyType::$class t) { {t.operator^(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator^($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() ^std::declval<typename __AnyType::$self>(); };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_06afd9e99cdb625b = requires(typename __AnyType::$class t) { {t.operator^=(std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {operator^=($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<typename __AnyType::$self>; } || requires { std::declval<typename __AnyType::$self&>() ^=std::declval<typename __AnyType::$self>(); };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $HasMethodImplementation_9d15ae043b29536f = requires(typename __AnyType::$class t) { {t._operator_not()} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {_operator_not($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	namespace $vtables {
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		struct $vtable_IBitwiseArithmetic
		{
			using fn_980795089d91db98 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_980795089d91db98* fnptr_980795089d91db98;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_980795089d91db98(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_6c1328329ef60343 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_6c1328329ef60343* fnptr_6c1328329ef60343;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_6c1328329ef60343(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&=)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_ff48234ff2ef088e = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ff48234ff2ef088e* fnptr_ff48234ff2ef088e;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ff48234ff2ef088e(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_abe6996c7fe0b9d5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_abe6996c7fe0b9d5* fnptr_abe6996c7fe0b9d5;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_abe6996c7fe0b9d5(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|=)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_d8a5ef24f4bcfa30 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_d8a5ef24f4bcfa30* fnptr_d8a5ef24f4bcfa30;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d8a5ef24f4bcfa30(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_06afd9e99cdb625b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_06afd9e99cdb625b* fnptr_06afd9e99cdb625b;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_06afd9e99cdb625b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^=)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_9d15ae043b29536f = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_9d15ae043b29536f* fnptr_9d15ae043b29536f;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9d15ae043b29536f(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_not)(*static_cast<typename __AnyType::$class*>(obj))); }
			
		};
	}
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IBitwiseArithmetic $vtable_IBitwiseArithmetic_for = {&$vtables::$vtable_IBitwiseArithmetic::template impl_980795089d91db98<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_6c1328329ef60343<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_ff48234ff2ef088e<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_abe6996c7fe0b9d5<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_d8a5ef24f4bcfa30<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_06afd9e99cdb625b<__AnyType>
		, &$vtables::$vtable_IBitwiseArithmetic::template impl_9d15ae043b29536f<__AnyType>
		};
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept $ImplementsInterface_IBitwiseArithmetic = $HasMethodImplementation_980795089d91db98<__AnyType> && $HasMethodImplementation_6c1328329ef60343<__AnyType> && $HasMethodImplementation_ff48234ff2ef088e<__AnyType> && $HasMethodImplementation_abe6996c7fe0b9d5<__AnyType> && $HasMethodImplementation_d8a5ef24f4bcfa30<__AnyType> && $HasMethodImplementation_06afd9e99cdb625b<__AnyType> && $HasMethodImplementation_9d15ae043b29536f<__AnyType>;
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	class IBitwiseArithmetic final : public Builtin::InterfaceRef {
		public: using $self = IBitwiseArithmetic;
		public: using $vtable = $vtables::$vtable_IBitwiseArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IBitwiseArithmetic$Unowned;
		friend class IBitwiseArithmetic$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IBitwiseArithmetic$Unowned;
		public: using $weak_ref = IBitwiseArithmetic$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IBitwiseArithmetic<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBitwiseArithmetic);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseArithmetic(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseArithmetic& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBitwiseArithmetic(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseArithmetic(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IBitwiseArithmetic_for<__FixedType> } { static_assert($ImplementsInterface_IBitwiseArithmetic<__FixedType>, "Cannot initialize interface IBitwiseArithmetic from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBitwiseArithmetic& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseArithmetic& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IBitwiseArithmetic<__FixedType>, "Cannot initialize interface IBitwiseArithmetic from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IBitwiseArithmetic_for<__FixedType>; return *this; }
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_980795089d91db98(_obj, rhs)); }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&=(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_6c1328329ef60343(_obj, rhs)); }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_ff48234ff2ef088e(_obj, rhs)); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|=(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_abe6996c7fe0b9d5(_obj, rhs)); }
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_d8a5ef24f4bcfa30(_obj, rhs)); }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^=(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_06afd9e99cdb625b(_obj, rhs)); }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_not() const { ADV_EXPRESSION_BODY(_vtable->fnptr_9d15ae043b29536f(_obj)); }
		
	};
	class IBitwiseArithmetic$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IBitwiseArithmetic$Unowned;
		public: using $vtable = $vtables::$vtable_IBitwiseArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IBitwiseArithmetic;
		public: using $strong_ref = IBitwiseArithmetic;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IBitwiseArithmetic$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBitwiseArithmetic$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBitwiseArithmetic$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IBitwiseArithmetic$Weak;
		public: using $vtable = $vtables::$vtable_IBitwiseArithmetic;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IBitwiseArithmetic;
		public: using $strong_ref = IBitwiseArithmetic;
		public: using $unowned_ref = IBitwiseArithmetic$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBitwiseArithmetic$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBitwiseArithmetic$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_980795089d91db98(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6c1328329ef60343(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ff48234ff2ef088e(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_abe6996c7fe0b9d5(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d8a5ef24f4bcfa30(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_06afd9e99cdb625b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBitwiseArithmetic::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_not(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9d15ae043b29536f(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	//###############################################################################
//# Free function declarations
//###############################################################################
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class T, class U> inline constexpr auto _operator_and_not(T val, U mask)  -> const T;
//###############################################################################
//# Function definitions
//###############################################################################

#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class T, class U> inline constexpr auto _operator_and_not(T val, U mask)  -> const T
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		ADV_EXPRESSION_BODY(val & (ADV_UFCS(_operator_not)(mask))); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	

}