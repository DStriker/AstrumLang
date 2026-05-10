#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/IComparable.h"
using namespace System;
#include "INumberBase.h"
#include "IModulusOperators.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __INumber_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class INumber;
class INumber__Unowned;
class INumber__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::INumber> = false;

namespace System::Numerics {
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_fb5a0f6f95d4db0c = requires(typename __AnyType::__class t) { {t.Clamp(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Clamp(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Clamp(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_03f90a1696505178 = requires(typename __AnyType::__class t) { {t.CopySign(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {CopySign(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return CopySign(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_036865bd57b96996 = requires(typename __AnyType::__class t) { {t.Max(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Max(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Max(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_28f083a89ac61b13 = requires(typename __AnyType::__class t) { {t.MaxNumber(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {MaxNumber(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return MaxNumber(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_59bc05400c6cb80c = requires(typename __AnyType::__class t) { {t.Min(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {Min(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return Min(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_86d33de9ae4e5ded = requires(typename __AnyType::__class t) { {t.MinNumber(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {MinNumber(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return MinNumber(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __HasMethodImplementation_get11b50d516998510b = requires(typename __AnyType::__class t) { {t.getSign()} -> std::convertible_to<Builtin::i32>; } || requires(typename __AnyType::__self t) { {getSign(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::i32>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	ADV_CHECK_INTERFACE(INumberBase, INumberBase);
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	ADV_CHECK_INTERFACE(ISelfComparable, ISelfComparable);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	ADV_CHECK_INTERFACE(IModulusArithmetic, IModulusArithmetic);
	namespace __vtables {
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		struct __vtable_INumber : public INumberBase::__vtable, public ISelfComparable::__vtable, public IAbstractComparable::__vtable, public IModulusArithmetic::__vtable
		{
			using fn_fb5a0f6f95d4db0c = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> min, Builtin::OptionalStrongRef<Builtin::ObjectRef> max);
			fn_fb5a0f6f95d4db0c* fnptr_fb5a0f6f95d4db0c;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_fb5a0f6f95d4db0c(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> min, Builtin::OptionalStrongRef<Builtin::ObjectRef> max) { ADV_EXPRESSION_BODY(ADV_UFCS(Clamp)(*static_cast<typename __AnyType::__class*>(obj), min, max)); }
			using fn_03f90a1696505178 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> sign);
			fn_03f90a1696505178* fnptr_03f90a1696505178;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_03f90a1696505178(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> sign) { ADV_EXPRESSION_BODY(ADV_UFCS(CopySign)(*static_cast<typename __AnyType::__class*>(obj), sign)); }
			using fn_036865bd57b96996 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_036865bd57b96996* fnptr_036865bd57b96996;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_036865bd57b96996(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(Max)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_28f083a89ac61b13 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_28f083a89ac61b13* fnptr_28f083a89ac61b13;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_28f083a89ac61b13(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MaxNumber)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_59bc05400c6cb80c = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_59bc05400c6cb80c* fnptr_59bc05400c6cb80c;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_59bc05400c6cb80c(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(Min)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_86d33de9ae4e5ded = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_86d33de9ae4e5ded* fnptr_86d33de9ae4e5ded;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_86d33de9ae4e5ded(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(MinNumber)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_getSign = Builtin::i32(Builtin::Object*);
			fn_getSign* fnptr_getSign;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			template<class __AnyType> static Builtin::i32 impl_getSign(Builtin::Object* obj) { return ADV_UFCS(getSign)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_INumber __vtable_INumber_for = {__vtable_INumberBase_for<__AnyType>
		, __vtable_ISelfComparable_for<__AnyType>
		, __vtable_IAbstractComparable_for<__AnyType>
		, __vtable_IModulusArithmetic_for<__AnyType>
		, &__vtables::__vtable_INumber::template impl_fb5a0f6f95d4db0c<__AnyType>
		, &__vtables::__vtable_INumber::template impl_03f90a1696505178<__AnyType>
		, &__vtables::__vtable_INumber::template impl_036865bd57b96996<__AnyType>
		, &__vtables::__vtable_INumber::template impl_28f083a89ac61b13<__AnyType>
		, &__vtables::__vtable_INumber::template impl_59bc05400c6cb80c<__AnyType>
		, &__vtables::__vtable_INumber::template impl_86d33de9ae4e5ded<__AnyType>
		, &__vtables::__vtable_INumber::template impl_getSign<__AnyType>
		};
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	template<class __AnyType> concept __ImplementsInterface_INumber = __ImplementsInterface_INumberBase<__AnyType> && __ImplementsInterface_ISelfComparable<__AnyType> && __ImplementsInterface_IAbstractComparable<__AnyType> && __ImplementsInterface_IModulusArithmetic<__AnyType> && __HasMethodImplementation_fb5a0f6f95d4db0c<__AnyType> && __HasMethodImplementation_03f90a1696505178<__AnyType> && __HasMethodImplementation_036865bd57b96996<__AnyType> && __HasMethodImplementation_28f083a89ac61b13<__AnyType> && __HasMethodImplementation_59bc05400c6cb80c<__AnyType> && __HasMethodImplementation_86d33de9ae4e5ded<__AnyType> && __HasMethodImplementation_get11b50d516998510b<__AnyType>;
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	class INumber final : public Builtin::InterfaceRef {
		public: using __self = INumber;
		public: using __vtable = __vtables::__vtable_INumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class INumber__Unowned;
		friend class INumber__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = INumber__Unowned;
		public: using __weak_ref = INumber__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_INumber<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(INumber);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		INumber(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		INumber& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> INumber(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_INumber<std::decay_t<__AnyType>>,"Cannot initialize interface INumber from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_INumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> INumber(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_INumber<std::decay_t<__AnyType>>,"Cannot initialize interface INumber from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_INumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> INumber(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_INumber_for<__FixedType> } { static_assert(__ImplementsInterface_INumber<__FixedType>, "Cannot initialize interface INumber from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> INumber& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_INumber<std::decay_t<__AnyType>>,"Cannot initialize interface INumber from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_INumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> INumber& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_INumber<std::decay_t<__AnyType>>,"Cannot initialize interface INumber from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_INumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> INumber& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_INumber<__FixedType>, "Cannot initialize interface INumber from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_INumber_for<__FixedType>; return *this; }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Clamp(Builtin::OptionalStrongRef<Builtin::ObjectRef> min, Builtin::OptionalStrongRef<Builtin::ObjectRef> max) const { ADV_EXPRESSION_BODY(_vtable->fnptr_fb5a0f6f95d4db0c(_obj, min, max)); }
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> CopySign(Builtin::OptionalStrongRef<Builtin::ObjectRef> sign) const { ADV_EXPRESSION_BODY(_vtable->fnptr_03f90a1696505178(_obj, sign)); }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Max(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_036865bd57b96996(_obj, rhs)); }
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxNumber(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_28f083a89ac61b13(_obj, rhs)); }
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Min(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_59bc05400c6cb80c(_obj, rhs)); }
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinNumber(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_86d33de9ae4e5ded(_obj, rhs)); }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const Builtin::i32 DefaultSign(T num) noexcept;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultCopySign(T num, T sign) ;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultClamp(T num, T min, T max) ;
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultMax(T lhs, T rhs) noexcept;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultMaxNumber(T lhs, T rhs) noexcept;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultMin(T lhs, T rhs) noexcept;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		public: template<__ImplementsInterface_INumber T> static const T DefaultMinNumber(T lhs, T rhs) noexcept;
		
	};
	class INumber__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = INumber__Unowned;
		public: using __vtable = __vtables::__vtable_INumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class INumber;
		public: using __strong_ref = INumber;
		public: using __unowned_ref = __self;
		public: using __weak_ref = INumber__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(INumber__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> INumber__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> INumber__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> INumber__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> INumber__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class INumber__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = INumber__Weak;
		public: using __vtable = __vtables::__vtable_INumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class INumber;
		public: using __strong_ref = INumber;
		public: using __unowned_ref = INumber__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(INumber__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		INumber__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> INumber__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_INumber<__AnyType> INumber__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_INumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Clamp(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> min, Builtin::OptionalStrongRef<Builtin::ObjectRef> max)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fb5a0f6f95d4db0c(Builtin::GetObjectReferenceFromInterface(&iface), min, max)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> CopySign(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> sign)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_03f90a1696505178(Builtin::GetObjectReferenceFromInterface(&iface), sign)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Max(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_036865bd57b96996(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MaxNumber(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_28f083a89ac61b13(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> Min(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_59bc05400c6cb80c(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> MinNumber(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_86d33de9ae4e5ded(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename INumber::__vtable> FORCE_INLINE const Builtin::i32 getSign(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSign(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

template<__ImplementsInterface_INumber T> inline const Builtin::i32 INumber::DefaultSign(T num) noexcept
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if (num != ADV_USPCS(Zero, T)()) {
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			return ADV_UPCS(IsNegative)(num.__ref()) ? Builtin::i32(-1) : +Builtin::i32(1);
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return Builtin::i32(0);
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultCopySign(T num, T sign) 
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		auto result = num; 
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if (ADV_UPCS(IsNegative)(num.__ref()) != ADV_UPCS(IsNegative)(sign.__ref())) {
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			result = -result;
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return result;
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultClamp(T num, T min, T max) 
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if ((min <=> max) > 0) {
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		auto result = num; 
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		result = DefaultMax(result, min);
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		result = DefaultMin(result, max);
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return result;
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultMax(T lhs, T rhs) noexcept
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if (lhs != rhs) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			if (!ADV_UPCS(IsNaN)(lhs.__ref())) {
				#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
				return (rhs <=> lhs) < 0 ? lhs : rhs;
			}
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			return lhs;
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? lhs : rhs;
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultMaxNumber(T lhs, T rhs) noexcept
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if (lhs != rhs) {
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			if (!ADV_UPCS(IsNaN)(rhs.__ref())) {
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
				return (rhs <=> lhs) < 0 ? lhs : rhs;
			}
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			return lhs;
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? lhs : rhs;
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultMin(T lhs, T rhs) noexcept
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if ((lhs != rhs) && !ADV_UPCS(IsNaN)(lhs.__ref())) {
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			return (lhs <=> rhs) < 0 ? lhs : rhs;
		}
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? lhs : rhs;
	}
	template<__ImplementsInterface_INumber T> inline const T INumber::DefaultMinNumber(T lhs, T rhs) noexcept
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		if ((lhs != rhs) && !ADV_UPCS(IsNaN)(rhs.__ref())) {
			#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
			return (lhs <=> rhs) < 0 ? lhs : rhs;
		}
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
		return ADV_UPCS(IsNegative)(rhs.__ref()) ? lhs : rhs;
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\INumber.ast"
	

}