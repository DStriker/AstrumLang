#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBitwiseOperators_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class TRight, class TResult> class IBitwiseOperators;
template<class TRight, class TResult> class IBitwiseOperators__Unowned;
template<class TRight, class TResult> class IBitwiseOperators__Weak;
class IBitwiseArithmetic;
class IBitwiseArithmetic__Unowned;
class IBitwiseArithmetic__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<class TRight, class TResult> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBitwiseOperators<TRight, TResult>> = false;

namespace System::Numerics {
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept __HasMethodImplementation_0f83b4b1085dbddf = requires(typename __AnyType::__class t) { {t.operator&(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::__self t) { {operator&(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() &std::declval<TRight>();}() } -> std::convertible_to<TResult>; };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept __HasMethodImplementation_79d39e0b465d190d = requires(typename __AnyType::__class t) { {t.operator|(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::__self t) { {operator|(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() |std::declval<TRight>();}() } -> std::convertible_to<TResult>; };
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept __HasMethodImplementation_f183daed81464b97 = requires(typename __AnyType::__class t) { {t.operator^(std::declval<TRight>())} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::__self t) { {operator^(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<TRight>())} -> std::convertible_to<TResult>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() ^std::declval<TRight>();}() } -> std::convertible_to<TResult>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept __HasMethodImplementation_8cd18992d9748d40 = requires(typename __AnyType::__class t) { {t._operator_not()} -> std::convertible_to<TResult>; }  || requires(typename __AnyType::__self t) { {_operator_not(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<TResult>; } || requires { { [] { using namespace __extensions; return _operator_not(std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<TResult>; };
	namespace __vtables {
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		template<class TRight, class TResult> struct __vtable_IBitwiseOperators
		{
			using fn_0f83b4b1085dbddf = const TResult(Builtin::Object*, TRight rhs);
			fn_0f83b4b1085dbddf* fnptr_0f83b4b1085dbddf;
			#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_0f83b4b1085dbddf(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_79d39e0b465d190d = const TResult(Builtin::Object*, TRight rhs);
			fn_79d39e0b465d190d* fnptr_79d39e0b465d190d;
			#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_79d39e0b465d190d(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_f183daed81464b97 = const TResult(Builtin::Object*, TRight rhs);
			fn_f183daed81464b97* fnptr_f183daed81464b97;
			#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_f183daed81464b97(Builtin::Object* obj, TRight rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_8cd18992d9748d40 = const TResult(Builtin::Object*);
			fn_8cd18992d9748d40* fnptr_8cd18992d9748d40;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const TResult impl_8cd18992d9748d40(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_not)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> inline constexpr __vtables::__vtable_IBitwiseOperators<TRight, TResult> __vtable_IBitwiseOperators_for = {&__vtables::__vtable_IBitwiseOperators<TRight, TResult>::template impl_0f83b4b1085dbddf<__AnyType>
		, &__vtables::__vtable_IBitwiseOperators<TRight, TResult>::template impl_79d39e0b465d190d<__AnyType>
		, &__vtables::__vtable_IBitwiseOperators<TRight, TResult>::template impl_f183daed81464b97<__AnyType>
		, &__vtables::__vtable_IBitwiseOperators<TRight, TResult>::template impl_8cd18992d9748d40<__AnyType>
		};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType, class TRight, class TResult> concept __ImplementsInterface_IBitwiseOperators = __HasMethodImplementation_0f83b4b1085dbddf<__AnyType, TRight, TResult> && __HasMethodImplementation_79d39e0b465d190d<__AnyType, TRight, TResult> && __HasMethodImplementation_f183daed81464b97<__AnyType, TRight, TResult> && __HasMethodImplementation_8cd18992d9748d40<__AnyType, TRight, TResult>;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class TRight, class TResult> class IBitwiseOperators final : public Builtin::InterfaceRef {
		public: using __self = IBitwiseOperators<TRight, TResult>;
		public: using __vtable = __vtables::__vtable_IBitwiseOperators<TRight, TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IBitwiseOperators__Unowned<TRight, TResult>;
		friend class IBitwiseOperators__Weak<TRight, TResult>;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IBitwiseOperators__Unowned<TRight, TResult>;
		public: using __weak_ref = IBitwiseOperators__Weak<TRight, TResult>;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBitwiseOperators);
		public: using ElementType = TRight;
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class, class> friend class IBitwiseOperators__Unowned;
		public: template<class, class> friend class IBitwiseOperators__Weak;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { Builtin::Retain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators & operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); Builtin::Retain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators(IBitwiseOperators < Other__TRight, Other__TResult>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators & operator=(IBitwiseOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::Release(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseOperators(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseOperators& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBitwiseOperators(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseOperators(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IBitwiseOperators_for<__FixedType, TRight, TResult> } { static_assert(__ImplementsInterface_IBitwiseOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IBitwiseOperators from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBitwiseOperators& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IBitwiseOperators<std::decay_t<__AnyType>, TRight, TResult>,"Cannot initialize interface IBitwiseOperators from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseOperators_for<typename __AnyType::__type, TRight, TResult>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseOperators& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IBitwiseOperators<__FixedType, TRight, TResult>, "Cannot initialize interface IBitwiseOperators from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IBitwiseOperators_for<__FixedType, TRight, TResult>; return *this; }
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator&(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0f83b4b1085dbddf(_obj, rhs)); }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator|(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_79d39e0b465d190d(_obj, rhs)); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult operator^(TRight rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_f183daed81464b97(_obj, rhs)); }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		public: FORCE_INLINE const TResult _operator_not() const { ADV_EXPRESSION_BODY(_vtable->fnptr_8cd18992d9748d40(_obj)); }
		
	};
	template<class TRight, class TResult> class IBitwiseOperators__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IBitwiseOperators__Unowned<TRight, TResult>;
		public: using __vtable = __vtables::__vtable_IBitwiseOperators<TRight, TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IBitwiseOperators<TRight, TResult>;
		public: using __strong_ref = IBitwiseOperators<TRight, TResult>;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IBitwiseOperators__Weak<TRight, TResult>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBitwiseOperators__Unowned);
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators__Unowned(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { Builtin::UnownedRetain(_obj); }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators__Unowned& operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); Builtin::UnownedRetain(_obj); return *this; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators__Unowned(IBitwiseOperators < Other__TRight, Other__TResult>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> && std::is_rvalue_reference_v<IBitwiseOperators < Other__TRight, Other__TResult>&&> IBitwiseOperators__Unowned& operator=(IBitwiseOperators < Other__TRight, Other__TResult>&& other) { if (_obj) Builtin::UnownedRelease(_obj); _obj = other._obj; 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseOperators__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class TRight, class TResult> class IBitwiseOperators__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IBitwiseOperators__Weak<TRight, TResult>;
		public: using __vtable = __vtables::__vtable_IBitwiseOperators<TRight, TResult>;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IBitwiseOperators<TRight, TResult>;
		public: using __strong_ref = IBitwiseOperators<TRight, TResult>;
		public: using __unowned_ref = IBitwiseOperators__Unowned<TRight, TResult>;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBitwiseOperators__Weak);
		public: template<class, class> friend class IBitwiseOperators;
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators__Weak(const IBitwiseOperators<Other__TRight, Other__TResult>& other) : ___super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } {}
		public: template<class Other__TRight, class Other__TResult> requires std::same_as<Other__TRight, TRight> && std::same_as<Other__TResult, TResult> IBitwiseOperators__Weak& operator=(const IBitwiseOperators < Other__TRight, Other__TResult>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
		_vtable = reinterpret_cast<const __vtable*>(other._vtable); } return *this; }
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseOperators__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseOperators<__AnyType, TRight, TResult> IBitwiseOperators__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBitwiseOperators_for<std::remove_cvref_t<__AnyType>, TRight, TResult>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseOperators::__vtable> FORCE_INLINE const TResult operator&(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0f83b4b1085dbddf(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseOperators::__vtable> FORCE_INLINE const TResult operator|(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_79d39e0b465d190d(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseOperators::__vtable> FORCE_INLINE const TResult operator^(const __AnyInterface& iface, TRight rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_f183daed81464b97(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface, class TRight, class TResult> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseOperators::__vtable> FORCE_INLINE const TResult _operator_not(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8cd18992d9748d40(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBitwiseArithmetic> = false;

namespace System::Numerics {
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_980795089d91db98 = requires(typename __AnyType::__class t) { {t.operator&(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator&(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() &std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_6c1328329ef60343 = requires(typename __AnyType::__class t) { {t.operator&=(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator&=(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() &=std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_ff48234ff2ef088e = requires(typename __AnyType::__class t) { {t.operator|(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator|(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() |std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_abe6996c7fe0b9d5 = requires(typename __AnyType::__class t) { {t.operator|=(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator|=(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() |=std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_d8a5ef24f4bcfa30 = requires(typename __AnyType::__class t) { {t.operator^(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator^(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() ^std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_06afd9e99cdb625b = requires(typename __AnyType::__class t) { {t.operator^=(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {operator^=(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return std::declval<typename __AnyType::__self>() ^=std::declval<typename __AnyType::__self>();}() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __HasMethodImplementation_9d15ae043b29536f = requires(typename __AnyType::__class t) { {t._operator_not()} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {_operator_not(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return _operator_not(std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	namespace __vtables {
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
		struct __vtable_IBitwiseArithmetic
		{
			using fn_980795089d91db98 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_980795089d91db98* fnptr_980795089d91db98;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_980795089d91db98(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_6c1328329ef60343 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_6c1328329ef60343* fnptr_6c1328329ef60343;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_6c1328329ef60343(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator&=)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_ff48234ff2ef088e = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_ff48234ff2ef088e* fnptr_ff48234ff2ef088e;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_ff48234ff2ef088e(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_abe6996c7fe0b9d5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_abe6996c7fe0b9d5* fnptr_abe6996c7fe0b9d5;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_abe6996c7fe0b9d5(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator|=)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_d8a5ef24f4bcfa30 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_d8a5ef24f4bcfa30* fnptr_d8a5ef24f4bcfa30;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_d8a5ef24f4bcfa30(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_06afd9e99cdb625b = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_06afd9e99cdb625b* fnptr_06afd9e99cdb625b;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_06afd9e99cdb625b(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(operator^=)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_9d15ae043b29536f = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_9d15ae043b29536f* fnptr_9d15ae043b29536f;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_9d15ae043b29536f(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(_operator_not)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IBitwiseArithmetic __vtable_IBitwiseArithmetic_for = {&__vtables::__vtable_IBitwiseArithmetic::template impl_980795089d91db98<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_6c1328329ef60343<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_ff48234ff2ef088e<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_abe6996c7fe0b9d5<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_d8a5ef24f4bcfa30<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_06afd9e99cdb625b<__AnyType>
		, &__vtables::__vtable_IBitwiseArithmetic::template impl_9d15ae043b29536f<__AnyType>
		};
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	template<class __AnyType> concept __ImplementsInterface_IBitwiseArithmetic = __HasMethodImplementation_980795089d91db98<__AnyType> && __HasMethodImplementation_6c1328329ef60343<__AnyType> && __HasMethodImplementation_ff48234ff2ef088e<__AnyType> && __HasMethodImplementation_abe6996c7fe0b9d5<__AnyType> && __HasMethodImplementation_d8a5ef24f4bcfa30<__AnyType> && __HasMethodImplementation_06afd9e99cdb625b<__AnyType> && __HasMethodImplementation_9d15ae043b29536f<__AnyType>;
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	class IBitwiseArithmetic final : public Builtin::InterfaceRef {
		public: using __self = IBitwiseArithmetic;
		public: using __vtable = __vtables::__vtable_IBitwiseArithmetic;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IBitwiseArithmetic__Unowned;
		friend class IBitwiseArithmetic__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IBitwiseArithmetic__Unowned;
		public: using __weak_ref = IBitwiseArithmetic__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IBitwiseArithmetic<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBitwiseArithmetic);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseArithmetic(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBitwiseArithmetic& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBitwiseArithmetic(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseArithmetic(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IBitwiseArithmetic_for<__FixedType> } { static_assert(__ImplementsInterface_IBitwiseArithmetic<__FixedType>, "Cannot initialize interface IBitwiseArithmetic from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBitwiseArithmetic& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IBitwiseArithmetic<std::decay_t<__AnyType>>,"Cannot initialize interface IBitwiseArithmetic from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBitwiseArithmetic_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBitwiseArithmetic& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IBitwiseArithmetic<__FixedType>, "Cannot initialize interface IBitwiseArithmetic from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IBitwiseArithmetic_for<__FixedType>; return *this; }
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
	class IBitwiseArithmetic__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IBitwiseArithmetic__Unowned;
		public: using __vtable = __vtables::__vtable_IBitwiseArithmetic;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IBitwiseArithmetic;
		public: using __strong_ref = IBitwiseArithmetic;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IBitwiseArithmetic__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBitwiseArithmetic__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBitwiseArithmetic__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBitwiseArithmetic__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IBitwiseArithmetic__Weak;
		public: using __vtable = __vtables::__vtable_IBitwiseArithmetic;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IBitwiseArithmetic;
		public: using __strong_ref = IBitwiseArithmetic;
		public: using __unowned_ref = IBitwiseArithmetic__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBitwiseArithmetic__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBitwiseArithmetic__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBitwiseArithmetic<__AnyType> IBitwiseArithmetic__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBitwiseArithmetic_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_980795089d91db98(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator&=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6c1328329ef60343(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_ff48234ff2ef088e(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator|=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_abe6996c7fe0b9d5(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_d8a5ef24f4bcfa30(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> operator^=(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_06afd9e99cdb625b(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBitwiseArithmetic::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> _operator_not(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9d15ae043b29536f(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBitwiseOperators.ast"
	

}