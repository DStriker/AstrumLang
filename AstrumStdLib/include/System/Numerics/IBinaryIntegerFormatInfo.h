#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryInteger.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryIntegerFormatInfo_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryIntegerFormatInfo;
class IBinaryIntegerFormatInfo__Unowned;
class IBinaryIntegerFormatInfo__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryIntegerFormatInfo> = false;

namespace System::Numerics {
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_49f56b338c01c9c9 = requires(typename __AnyType::__class t) { {t.IsGreaterThanAsUnsigned(std::declval<typename __AnyType::__self>())} -> std::convertible_to<bool>; }  || requires(typename __AnyType::__self t) { {IsGreaterThanAsUnsigned(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<bool>; } || requires { { [] { using namespace __extensions; return IsGreaterThanAsUnsigned(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<bool>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get70b6927cfa650f13 = requires { __AnyType::__self::IsSigned; } || requires { [] { using namespace __extensions; __static_getIsSigned<typename __AnyType::__self>(); }(); };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getec9414692050f40b = requires { __AnyType::__self::MaxDigitCount; } || requires { [] { using namespace __extensions; __static_getMaxDigitCount<typename __AnyType::__self>(); }(); };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get85627ea2861a8ab0 = requires { __AnyType::__self::MaxHexDigitCount; } || requires { [] { using namespace __extensions; __static_getMaxHexDigitCount<typename __AnyType::__self>(); }(); };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getbf8d0c9067b307b2 = requires { __AnyType::__self::MaxValueDiv10; } || requires { [] { using namespace __extensions; __static_getMaxValueDiv10<typename __AnyType::__self>(); }(); };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get16321500413499ff = requires(typename __AnyType::__class t) { {t.getMultiplyBy10()} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; } || requires(typename __AnyType::__self t) { {getMultiplyBy10(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get1632130041349699 = requires(typename __AnyType::__class t) { {t.getMultiplyBy16()} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; } || requires(typename __AnyType::__self t) { {getMultiplyBy16(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace __vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
		struct __vtable_IBinaryIntegerFormatInfo : public IBinaryInteger::__vtable, public IMinMaxValue::__vtable
		{
			using fn_49f56b338c01c9c9 = const bool(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_49f56b338c01c9c9* fnptr_49f56b338c01c9c9;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static const bool impl_49f56b338c01c9c9(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(IsGreaterThanAsUnsigned)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_getMultiplyBy10 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getMultiplyBy10* fnptr_getMultiplyBy10;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getMultiplyBy10(Builtin::Object* obj) { return ADV_UFCS(getMultiplyBy10)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getMultiplyBy16 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getMultiplyBy16* fnptr_getMultiplyBy16;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getMultiplyBy16(Builtin::Object* obj) { return ADV_UFCS(getMultiplyBy16)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IBinaryIntegerFormatInfo __vtable_IBinaryIntegerFormatInfo_for = {__vtable_IBinaryInteger_for<__AnyType>
		, __vtable_IMinMaxValue_for<__AnyType>
		, &__vtables::__vtable_IBinaryIntegerFormatInfo::template impl_49f56b338c01c9c9<__AnyType>
		, &__vtables::__vtable_IBinaryIntegerFormatInfo::template impl_getMultiplyBy10<__AnyType>
		, &__vtables::__vtable_IBinaryIntegerFormatInfo::template impl_getMultiplyBy16<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept __ImplementsInterface_IBinaryIntegerFormatInfo = __ImplementsInterface_IBinaryInteger<__AnyType> && __ImplementsInterface_IMinMaxValue<__AnyType> && __HasMethodImplementation_49f56b338c01c9c9<__AnyType> && __HasMethodImplementation_get70b6927cfa650f13<__AnyType> && __HasMethodImplementation_getec9414692050f40b<__AnyType> && __HasMethodImplementation_get85627ea2861a8ab0<__AnyType> && __HasMethodImplementation_getbf8d0c9067b307b2<__AnyType> && __HasMethodImplementation_get16321500413499ff<__AnyType> && __HasMethodImplementation_get1632130041349699<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	class IBinaryIntegerFormatInfo final : public Builtin::InterfaceRef {
		public: using __self = IBinaryIntegerFormatInfo;
		public: using __vtable = __vtables::__vtable_IBinaryIntegerFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IBinaryIntegerFormatInfo__Unowned;
		friend class IBinaryIntegerFormatInfo__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IBinaryIntegerFormatInfo__Unowned;
		public: using __weak_ref = IBinaryIntegerFormatInfo__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryIntegerFormatInfo);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryIntegerFormatInfo(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryIntegerFormatInfo& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryIntegerFormatInfo(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryIntegerFormatInfo(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IBinaryIntegerFormatInfo_for<__FixedType> } { static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<__FixedType>, "Cannot initialize interface IBinaryIntegerFormatInfo from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryIntegerFormatInfo& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryIntegerFormatInfo& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IBinaryIntegerFormatInfo<__FixedType>, "Cannot initialize interface IBinaryIntegerFormatInfo from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IBinaryIntegerFormatInfo_for<__FixedType>; return *this; }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
		public: FORCE_INLINE const bool IsGreaterThanAsUnsigned(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_49f56b338c01c9c9(_obj, rhs)); }
		
	};
	class IBinaryIntegerFormatInfo__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IBinaryIntegerFormatInfo__Unowned;
		public: using __vtable = __vtables::__vtable_IBinaryIntegerFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IBinaryIntegerFormatInfo;
		public: using __strong_ref = IBinaryIntegerFormatInfo;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IBinaryIntegerFormatInfo__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryIntegerFormatInfo__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryIntegerFormatInfo__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IBinaryIntegerFormatInfo__Weak;
		public: using __vtable = __vtables::__vtable_IBinaryIntegerFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IBinaryIntegerFormatInfo;
		public: using __strong_ref = IBinaryIntegerFormatInfo;
		public: using __unowned_ref = IBinaryIntegerFormatInfo__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryIntegerFormatInfo__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryIntegerFormatInfo__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryIntegerFormatInfo::__vtable> FORCE_INLINE const bool IsGreaterThanAsUnsigned(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_49f56b338c01c9c9(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryIntegerFormatInfo::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getMultiplyBy10(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getMultiplyBy10(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryIntegerFormatInfo::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getMultiplyBy16(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getMultiplyBy16(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	

}