#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryInteger.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryIntegerFormatInfo$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryIntegerFormatInfo;
class IBinaryIntegerFormatInfo$Unowned;
class IBinaryIntegerFormatInfo$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryIntegerFormatInfo> = false;

namespace System::Numerics {
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_49f56b338c01c9c9 = requires(typename __AnyType::$class t) { {t.IsGreaterThanAsUnsigned(std::declval<typename __AnyType::$self>())} -> std::convertible_to<bool>; }  || requires(typename __AnyType::$self t) { {IsGreaterThanAsUnsigned($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<typename __AnyType::$self>())} -> std::convertible_to<bool>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxDigitCount
} namespace $extensions { template<class _TT> struct $static_getMaxDigitCount{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxDigitCount
#endif
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getec9414692050f40b = requires { __AnyType::$self::MaxDigitCount; } || requires { { [] { using namespace $extensions; return $static_getMaxDigitCount<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxHexDigitCount
} namespace $extensions { template<class _TT> struct $static_getMaxHexDigitCount{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxHexDigitCount
#endif
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get85627ea2861a8ab0 = requires { __AnyType::$self::MaxHexDigitCount; } || requires { { [] { using namespace $extensions; return $static_getMaxHexDigitCount<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxValueDiv10
} namespace $extensions { template<class _TT> struct $static_getMaxValueDiv10{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxValueDiv10
#endif
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getbf8d0c9067b307b2 = requires { __AnyType::$self::MaxValueDiv10; } || requires { { [] { using namespace $extensions; return $static_getMaxValueDiv10<typename __AnyType::$self>::get(); }() } -> std::convertible_to<typename __AnyType::$self>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get16321500413499ff = requires(typename __AnyType::$class t) { {t.getMultiplyBy10()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getMultiplyBy10($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get1632130041349699 = requires(typename __AnyType::$class t) { {t.getMultiplyBy16()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getMultiplyBy16($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace $vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
		struct $vtable_IBinaryIntegerFormatInfo : public IBinaryInteger::$vtable, public IMinMaxValue::$vtable
		{
			using fn_49f56b338c01c9c9 = const bool(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_49f56b338c01c9c9* fnptr_49f56b338c01c9c9;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static const bool impl_49f56b338c01c9c9(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(IsGreaterThanAsUnsigned)(*static_cast<typename __AnyType::$class*>(obj), rhs)); }
			using fn_getMultiplyBy10 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getMultiplyBy10* fnptr_getMultiplyBy10;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getMultiplyBy10(Builtin::Object* obj) { return ADV_UFCS(getMultiplyBy10)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getMultiplyBy16 = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getMultiplyBy16* fnptr_getMultiplyBy16;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getMultiplyBy16(Builtin::Object* obj) { return ADV_UFCS(getMultiplyBy16)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IBinaryIntegerFormatInfo $vtable_IBinaryIntegerFormatInfo_for = {$vtable_IBinaryInteger_for<__AnyType>
		, $vtable_IMinMaxValue_for<__AnyType>
		, &$vtables::$vtable_IBinaryIntegerFormatInfo::template impl_49f56b338c01c9c9<__AnyType>
		, &$vtables::$vtable_IBinaryIntegerFormatInfo::template impl_getMultiplyBy10<__AnyType>
		, &$vtables::$vtable_IBinaryIntegerFormatInfo::template impl_getMultiplyBy16<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	template<class __AnyType> concept $ImplementsInterface_IBinaryIntegerFormatInfo = $ImplementsInterface_IBinaryInteger<__AnyType> && $ImplementsInterface_IMinMaxValue<__AnyType> && $HasMethodImplementation_49f56b338c01c9c9<__AnyType> && $HasMethodImplementation_getec9414692050f40b<__AnyType> && $HasMethodImplementation_get85627ea2861a8ab0<__AnyType> && $HasMethodImplementation_getbf8d0c9067b307b2<__AnyType> && $HasMethodImplementation_get16321500413499ff<__AnyType> && $HasMethodImplementation_get1632130041349699<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	class IBinaryIntegerFormatInfo final : public Builtin::InterfaceRef {
		public: using $self = IBinaryIntegerFormatInfo;
		public: using $vtable = $vtables::$vtable_IBinaryIntegerFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IBinaryIntegerFormatInfo$Unowned;
		friend class IBinaryIntegerFormatInfo$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IBinaryIntegerFormatInfo$Unowned;
		public: using $weak_ref = IBinaryIntegerFormatInfo$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryIntegerFormatInfo);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryIntegerFormatInfo(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryIntegerFormatInfo& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryIntegerFormatInfo(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryIntegerFormatInfo(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IBinaryIntegerFormatInfo_for<__FixedType> } { static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<__FixedType>, "Cannot initialize interface IBinaryIntegerFormatInfo from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryIntegerFormatInfo& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryIntegerFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryIntegerFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryIntegerFormatInfo& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IBinaryIntegerFormatInfo<__FixedType>, "Cannot initialize interface IBinaryIntegerFormatInfo from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IBinaryIntegerFormatInfo_for<__FixedType>; return *this; }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
		public: FORCE_INLINE const bool IsGreaterThanAsUnsigned(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_49f56b338c01c9c9(_obj, rhs)); }
		
	};
	class IBinaryIntegerFormatInfo$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IBinaryIntegerFormatInfo$Unowned;
		public: using $vtable = $vtables::$vtable_IBinaryIntegerFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IBinaryIntegerFormatInfo;
		public: using $strong_ref = IBinaryIntegerFormatInfo;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IBinaryIntegerFormatInfo$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryIntegerFormatInfo$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryIntegerFormatInfo$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryIntegerFormatInfo$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IBinaryIntegerFormatInfo$Weak;
		public: using $vtable = $vtables::$vtable_IBinaryIntegerFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IBinaryIntegerFormatInfo;
		public: using $strong_ref = IBinaryIntegerFormatInfo;
		public: using $unowned_ref = IBinaryIntegerFormatInfo$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryIntegerFormatInfo$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryIntegerFormatInfo$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryIntegerFormatInfo<__AnyType> IBinaryIntegerFormatInfo$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryIntegerFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryIntegerFormatInfo::$vtable> FORCE_INLINE const bool IsGreaterThanAsUnsigned(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_49f56b338c01c9c9(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryIntegerFormatInfo::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getMultiplyBy10(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getMultiplyBy10(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryIntegerFormatInfo::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getMultiplyBy16(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getMultiplyBy16(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryIntegerFormatInfo.ast"
	

}