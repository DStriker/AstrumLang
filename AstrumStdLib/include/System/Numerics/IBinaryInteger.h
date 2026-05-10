#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryNumber.h"
#include "IShiftOperators.h"
#include "IIntDivOperators.h"
#include "IIntPowerOperators.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryInteger_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryInteger;
class IBinaryInteger__Unowned;
class IBinaryInteger__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryInteger> = false;

namespace System::Numerics {
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_3fc27e014b17f068 = requires(typename __AnyType::__class t) { {t.NextMultipleOf(std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {NextMultipleOf(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return NextMultipleOf(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get32cc0e126f12555a = requires { __AnyType::__self::IsSigned; } || requires { [] { using namespace __extensions; __static_getIsSigned<typename __AnyType::__self>(); }(); };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc54655ceca57b801 = requires(typename __AnyType::__class t) { {t.getTrailingOneCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getTrailingOneCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get81c979ea538ee3cf = requires(typename __AnyType::__class t) { {t.getTrailingZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getTrailingZeroCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc1bf0c58bf8ec63f = requires(typename __AnyType::__class t) { {t.getByteCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getByteCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getd5b9536006d7e554 = requires(typename __AnyType::__class t) { {t.getCheckedIsqrt()} -> std::convertible_to<Builtin::Nullable<typename __AnyType::__self>>; } || requires(typename __AnyType::__self t) { {getCheckedIsqrt(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::Nullable<typename __AnyType::__self>>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get290d77e00232725b = requires(typename __AnyType::__class t) { {t.getIsqrt()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getIsqrt(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get7fe13569a14ec76d = requires(typename __AnyType::__class t) { {t.getLog2Ceiling()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getLog2Ceiling(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IShiftArithmetic, IShiftArithmetic);
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IIntegerDivisibleArithmetic, IIntegerDivisibleArithmetic);
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IIntegerPowerArithmetic, IIntegerPowerArithmetic);
	namespace __vtables {
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		struct __vtable_IBinaryInteger : public IBinaryNumber::__vtable, public IShiftArithmetic::__vtable, public IIntegerDivisibleArithmetic::__vtable, public IIntegerPowerArithmetic::__vtable
		{
			using fn_3fc27e014b17f068 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_3fc27e014b17f068* fnptr_3fc27e014b17f068;
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_3fc27e014b17f068(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(NextMultipleOf)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_getTrailingOneCount = Builtin::u32(Builtin::Object*);
			fn_getTrailingOneCount* fnptr_getTrailingOneCount;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getTrailingOneCount(Builtin::Object* obj) { return ADV_UFCS(getTrailingOneCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTrailingZeroCount = Builtin::u32(Builtin::Object*);
			fn_getTrailingZeroCount* fnptr_getTrailingZeroCount;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getTrailingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getTrailingZeroCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getByteCount = Builtin::u32(Builtin::Object*);
			fn_getByteCount* fnptr_getByteCount;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getByteCount(Builtin::Object* obj) { return ADV_UFCS(getByteCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getCheckedIsqrt = Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*);
			fn_getCheckedIsqrt* fnptr_getCheckedIsqrt;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_getCheckedIsqrt(Builtin::Object* obj) { return ADV_UFCS(getCheckedIsqrt)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getIsqrt = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getIsqrt* fnptr_getIsqrt;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getIsqrt(Builtin::Object* obj) { return ADV_UFCS(getIsqrt)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getLog2Ceiling = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLog2Ceiling* fnptr_getLog2Ceiling;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLog2Ceiling(Builtin::Object* obj) { return ADV_UFCS(getLog2Ceiling)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IBinaryInteger __vtable_IBinaryInteger_for = {__vtable_IBinaryNumber_for<__AnyType>
		, __vtable_IShiftArithmetic_for<__AnyType>
		, __vtable_IIntegerDivisibleArithmetic_for<__AnyType>
		, __vtable_IIntegerPowerArithmetic_for<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_3fc27e014b17f068<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getTrailingOneCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getTrailingZeroCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getByteCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getCheckedIsqrt<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getIsqrt<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getLog2Ceiling<__AnyType>
		};
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __ImplementsInterface_IBinaryInteger = __ImplementsInterface_IBinaryNumber<__AnyType> && __ImplementsInterface_IShiftArithmetic<__AnyType> && __ImplementsInterface_IIntegerDivisibleArithmetic<__AnyType> && __ImplementsInterface_IIntegerPowerArithmetic<__AnyType> && __HasMethodImplementation_3fc27e014b17f068<__AnyType> && __HasMethodImplementation_get32cc0e126f12555a<__AnyType> && __HasMethodImplementation_getc54655ceca57b801<__AnyType> && __HasMethodImplementation_get81c979ea538ee3cf<__AnyType> && __HasMethodImplementation_getc1bf0c58bf8ec63f<__AnyType> && __HasMethodImplementation_getd5b9536006d7e554<__AnyType> && __HasMethodImplementation_get290d77e00232725b<__AnyType> && __HasMethodImplementation_get7fe13569a14ec76d<__AnyType>;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	class IBinaryInteger final : public Builtin::InterfaceRef {
		public: using __self = IBinaryInteger;
		public: using __vtable = __vtables::__vtable_IBinaryInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IBinaryInteger__Unowned;
		friend class IBinaryInteger__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IBinaryInteger__Unowned;
		public: using __weak_ref = IBinaryInteger__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IBinaryInteger<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryInteger);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryInteger(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryInteger& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryInteger(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryInteger(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IBinaryInteger_for<__FixedType> } { static_assert(__ImplementsInterface_IBinaryInteger<__FixedType>, "Cannot initialize interface IBinaryInteger from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryInteger& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IBinaryInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryInteger& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IBinaryInteger<__FixedType>, "Cannot initialize interface IBinaryInteger from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IBinaryInteger_for<__FixedType>; return *this; }
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> NextMultipleOf(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_3fc27e014b17f068(_obj, rhs)); }
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: template<__ImplementsInterface_IBinaryInteger T> static const std::tuple<T, T> DefaultDivRem(T lhs, T rhs) ;
		
	};
	class IBinaryInteger__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IBinaryInteger__Unowned;
		public: using __vtable = __vtables::__vtable_IBinaryInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IBinaryInteger;
		public: using __strong_ref = IBinaryInteger;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IBinaryInteger__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryInteger__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryInteger__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryInteger__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IBinaryInteger__Weak;
		public: using __vtable = __vtables::__vtable_IBinaryInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IBinaryInteger;
		public: using __strong_ref = IBinaryInteger;
		public: using __unowned_ref = IBinaryInteger__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryInteger__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryInteger__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryInteger<__AnyType> IBinaryInteger__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> NextMultipleOf(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_3fc27e014b17f068(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::u32 getTrailingOneCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTrailingOneCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::u32 getTrailingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTrailingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::u32 getByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::Nullable<Builtin::OptionalStrongRef<Builtin::ObjectRef>> getCheckedIsqrt(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCheckedIsqrt(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getIsqrt(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getIsqrt(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLog2Ceiling(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLog2Ceiling(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

template<__ImplementsInterface_IBinaryInteger T> inline const std::tuple<T, T> IBinaryInteger::DefaultDivRem(T lhs, T rhs) 
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		auto quotient = lhs / rhs; 
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		return std::make_tuple(quotient, (lhs - (quotient * rhs)));
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	

}