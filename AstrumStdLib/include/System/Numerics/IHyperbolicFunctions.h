#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IFloatingPointConstants.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IHyperbolicFunctions_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IHyperbolicFunctions;
class IHyperbolicFunctions__Unowned;
class IHyperbolicFunctions__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IHyperbolicFunctions> = false;

namespace System::Numerics {
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc891039be8483e5d = requires(typename __AnyType::__class t) { {t.getAcosh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcosh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc887019be83fe672 = requires(typename __AnyType::__class t) { {t.getAcoth()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcoth(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get1b1cc79b85f9b9b1 = requires(typename __AnyType::__class t) { {t.getAcsch()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAcsch(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get9e305d178f2b00c3 = requires(typename __AnyType::__class t) { {t.getAsech()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsech(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get07065317cacd3e02 = requires(typename __AnyType::__class t) { {t.getAsinh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAsinh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get4654a4dc15c5e2dd = requires(typename __AnyType::__class t) { {t.getAtanh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getAtanh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3091fccffea41574 = requires(typename __AnyType::__class t) { {t.getCosh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCosh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get308ed6cffea19f0b = requires(typename __AnyType::__class t) { {t.getCoth()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCoth(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc79008cfc2dca0b0 = requires(typename __AnyType::__class t) { {t.getCsch()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getCsch(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb0e2724c057c5e76 = requires(typename __AnyType::__class t) { {t.getSech()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSech(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get480d8c4bc9dbef67 = requires(typename __AnyType::__class t) { {t.getSinh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getSinh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __HasMethodImplementation_get5cd1ca2238d55ce8 = requires(typename __AnyType::__class t) { {t.getTanh()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getTanh(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	ADV_CHECK_INTERFACE(IFloatingPointConstants, IFloatingPointConstants);
	namespace __vtables {
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
		struct __vtable_IHyperbolicFunctions : public IFloatingPointConstants::__vtable
		{
			using fn_getAcosh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcosh* fnptr_getAcosh;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcosh(Builtin::Object* obj) { return ADV_UFCS(getAcosh)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcoth = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcoth* fnptr_getAcoth;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcoth(Builtin::Object* obj) { return ADV_UFCS(getAcoth)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAcsch = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAcsch* fnptr_getAcsch;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAcsch(Builtin::Object* obj) { return ADV_UFCS(getAcsch)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsech = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsech* fnptr_getAsech;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsech(Builtin::Object* obj) { return ADV_UFCS(getAsech)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAsinh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAsinh* fnptr_getAsinh;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAsinh(Builtin::Object* obj) { return ADV_UFCS(getAsinh)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getAtanh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getAtanh* fnptr_getAtanh;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getAtanh(Builtin::Object* obj) { return ADV_UFCS(getAtanh)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCosh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCosh* fnptr_getCosh;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCosh(Builtin::Object* obj) { return ADV_UFCS(getCosh)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCoth = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCoth* fnptr_getCoth;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCoth(Builtin::Object* obj) { return ADV_UFCS(getCoth)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCsch = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getCsch* fnptr_getCsch;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getCsch(Builtin::Object* obj) { return ADV_UFCS(getCsch)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSech = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSech* fnptr_getSech;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSech(Builtin::Object* obj) { return ADV_UFCS(getSech)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getSinh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getSinh* fnptr_getSinh;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getSinh(Builtin::Object* obj) { return ADV_UFCS(getSinh)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTanh = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTanh* fnptr_getTanh;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTanh(Builtin::Object* obj) { return ADV_UFCS(getTanh)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IHyperbolicFunctions __vtable_IHyperbolicFunctions_for = {__vtable_IFloatingPointConstants_for<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAcosh<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAcoth<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAcsch<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAsech<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAsinh<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getAtanh<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getCosh<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getCoth<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getCsch<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getSech<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getSinh<__AnyType>
		, &__vtables::__vtable_IHyperbolicFunctions::template impl_getTanh<__AnyType>
		};
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	template<class __AnyType> concept __ImplementsInterface_IHyperbolicFunctions = __ImplementsInterface_IFloatingPointConstants<__AnyType> && __HasMethodImplementation_getc891039be8483e5d<__AnyType> && __HasMethodImplementation_getc887019be83fe672<__AnyType> && __HasMethodImplementation_get1b1cc79b85f9b9b1<__AnyType> && __HasMethodImplementation_get9e305d178f2b00c3<__AnyType> && __HasMethodImplementation_get07065317cacd3e02<__AnyType> && __HasMethodImplementation_get4654a4dc15c5e2dd<__AnyType> && __HasMethodImplementation_get3091fccffea41574<__AnyType> && __HasMethodImplementation_get308ed6cffea19f0b<__AnyType> && __HasMethodImplementation_getc79008cfc2dca0b0<__AnyType> && __HasMethodImplementation_getb0e2724c057c5e76<__AnyType> && __HasMethodImplementation_get480d8c4bc9dbef67<__AnyType> && __HasMethodImplementation_get5cd1ca2238d55ce8<__AnyType>;
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	class IHyperbolicFunctions final : public Builtin::InterfaceRef {
		public: using __self = IHyperbolicFunctions;
		public: using __vtable = __vtables::__vtable_IHyperbolicFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IHyperbolicFunctions__Unowned;
		friend class IHyperbolicFunctions__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IHyperbolicFunctions__Unowned;
		public: using __weak_ref = IHyperbolicFunctions__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IHyperbolicFunctions<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IHyperbolicFunctions);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IHyperbolicFunctions(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IHyperbolicFunctions& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IHyperbolicFunctions(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IHyperbolicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface IHyperbolicFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IHyperbolicFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IHyperbolicFunctions(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IHyperbolicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface IHyperbolicFunctions from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IHyperbolicFunctions_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IHyperbolicFunctions(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IHyperbolicFunctions_for<__FixedType> } { static_assert(__ImplementsInterface_IHyperbolicFunctions<__FixedType>, "Cannot initialize interface IHyperbolicFunctions from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IHyperbolicFunctions& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IHyperbolicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface IHyperbolicFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IHyperbolicFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IHyperbolicFunctions& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IHyperbolicFunctions<std::decay_t<__AnyType>>,"Cannot initialize interface IHyperbolicFunctions from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IHyperbolicFunctions_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IHyperbolicFunctions& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IHyperbolicFunctions<__FixedType>, "Cannot initialize interface IHyperbolicFunctions from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IHyperbolicFunctions_for<__FixedType>; return *this; }
		
	};
	class IHyperbolicFunctions__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IHyperbolicFunctions__Unowned;
		public: using __vtable = __vtables::__vtable_IHyperbolicFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IHyperbolicFunctions;
		public: using __strong_ref = IHyperbolicFunctions;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IHyperbolicFunctions__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IHyperbolicFunctions__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> IHyperbolicFunctions__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IHyperbolicFunctions__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> IHyperbolicFunctions__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IHyperbolicFunctions__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IHyperbolicFunctions__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IHyperbolicFunctions__Weak;
		public: using __vtable = __vtables::__vtable_IHyperbolicFunctions;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IHyperbolicFunctions;
		public: using __strong_ref = IHyperbolicFunctions;
		public: using __unowned_ref = IHyperbolicFunctions__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IHyperbolicFunctions__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IHyperbolicFunctions__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> IHyperbolicFunctions__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IHyperbolicFunctions<__AnyType> IHyperbolicFunctions__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IHyperbolicFunctions_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcosh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcosh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcoth(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcoth(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAcsch(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAcsch(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsech(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsech(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAsinh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAsinh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getAtanh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getAtanh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCosh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCosh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCoth(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCoth(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getCsch(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCsch(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSech(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSech(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getSinh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getSinh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IHyperbolicFunctions::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTanh(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTanh(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IHyperbolicFunctions.ast"
	

}