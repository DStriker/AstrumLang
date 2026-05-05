#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryNumber.h"
#include "IShiftOperators.h"

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
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_23768c16e76cb1b5 = requires(typename __AnyType::__class t) { {t.DivRem(std::declval<typename __AnyType::__self>())} -> std::convertible_to<std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>>; }  || requires(typename __AnyType::__self t) { {DivRem(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<typename __AnyType::__self>())} -> std::convertible_to<std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>>; } || requires { { [] { using namespace __extensions; return DivRem(std::declval<typename __AnyType::__self>(), std::declval<typename __AnyType::__self>()); }() } -> std::convertible_to<std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_10c8668372cde25d = requires(typename __AnyType::__class t) { {t.RotateLeft(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {RotateLeft(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return RotateLeft(std::declval<typename __AnyType::__self>(), std::declval<Builtin::i32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_3126aea20cbcef38 = requires(typename __AnyType::__class t) { {t.RotateRight(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {RotateRight(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return RotateRight(std::declval<typename __AnyType::__self>(), std::declval<Builtin::i32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get02befd9c09914339 = requires(typename __AnyType::__class t) { {t.getLeadingZeroCount()} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; } || requires(typename __AnyType::__self t) { {getLeadingZeroCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get81c979ea538ee3cf = requires(typename __AnyType::__class t) { {t.getTrailingZeroCount()} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; } || requires(typename __AnyType::__self t) { {getTrailingZeroCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get711042af624215f0 = requires(typename __AnyType::__class t) { {t.getPopCount()} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; } || requires(typename __AnyType::__self t) { {getPopCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::OptionalStrongRef<Builtin::ObjectRef>>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getc1bf0c58bf8ec63f = requires(typename __AnyType::__class t) { {t.getByteCount()} -> std::convertible_to<Builtin::usize>; } || requires(typename __AnyType::__self t) { {getByteCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::usize>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get7dc480df2d2d928f = requires(typename __AnyType::__class t) { {t.getShortestBitLength()} -> std::convertible_to<Builtin::usize>; } || requires(typename __AnyType::__self t) { {getShortestBitLength(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::usize>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IBinaryNumber, IBinaryNumber);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	ADV_CHECK_INTERFACE(IShiftArithmetic, IShiftArithmetic);
	namespace __vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		struct __vtable_IBinaryInteger : public IBinaryNumber::__vtable, public IShiftArithmetic::__vtable
		{
			using fn_23768c16e76cb1b5 = const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>>(Builtin::Object*, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs);
			fn_23768c16e76cb1b5* fnptr_23768c16e76cb1b5;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> impl_23768c16e76cb1b5(Builtin::Object* obj, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) { ADV_EXPRESSION_BODY(ADV_UFCS(DivRem)(*static_cast<typename __AnyType::__class*>(obj), rhs)); }
			using fn_10c8668372cde25d = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_10c8668372cde25d* fnptr_10c8668372cde25d;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_10c8668372cde25d(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(*static_cast<typename __AnyType::__class*>(obj), amount)); }
			using fn_3126aea20cbcef38 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_3126aea20cbcef38* fnptr_3126aea20cbcef38;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_3126aea20cbcef38(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(*static_cast<typename __AnyType::__class*>(obj), amount)); }
			using fn_getLeadingZeroCount = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLeadingZeroCount* fnptr_getLeadingZeroCount;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLeadingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getLeadingZeroCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getTrailingZeroCount = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getTrailingZeroCount* fnptr_getTrailingZeroCount;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getTrailingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getTrailingZeroCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getPopCount = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getPopCount* fnptr_getPopCount;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getPopCount(Builtin::Object* obj) { return ADV_UFCS(getPopCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getByteCount = Builtin::usize(Builtin::Object*);
			fn_getByteCount* fnptr_getByteCount;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::usize impl_getByteCount(Builtin::Object* obj) { return ADV_UFCS(getByteCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getShortestBitLength = Builtin::usize(Builtin::Object*);
			fn_getShortestBitLength* fnptr_getShortestBitLength;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			template<class __AnyType> static Builtin::usize impl_getShortestBitLength(Builtin::Object* obj) { return ADV_UFCS(getShortestBitLength)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IBinaryInteger __vtable_IBinaryInteger_for = {__vtable_IBinaryNumber_for<__AnyType>
		, __vtable_IShiftArithmetic_for<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_23768c16e76cb1b5<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_10c8668372cde25d<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_3126aea20cbcef38<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getLeadingZeroCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getTrailingZeroCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getPopCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getByteCount<__AnyType>
		, &__vtables::__vtable_IBinaryInteger::template impl_getShortestBitLength<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<class __AnyType> concept __ImplementsInterface_IBinaryInteger = __ImplementsInterface_IBinaryNumber<__AnyType> && __ImplementsInterface_IShiftArithmetic<__AnyType> && __HasMethodImplementation_23768c16e76cb1b5<__AnyType> && __HasMethodImplementation_10c8668372cde25d<__AnyType> && __HasMethodImplementation_3126aea20cbcef38<__AnyType> && __HasMethodImplementation_get02befd9c09914339<__AnyType> && __HasMethodImplementation_get81c979ea538ee3cf<__AnyType> && __HasMethodImplementation_get711042af624215f0<__AnyType> && __HasMethodImplementation_getc1bf0c58bf8ec63f<__AnyType> && __HasMethodImplementation_get7dc480df2d2d928f<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
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
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> DivRem(Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs) const { ADV_EXPRESSION_BODY(_vtable->fnptr_23768c16e76cb1b5(_obj, rhs)); }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_10c8668372cde25d(_obj, amount)); }
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_3126aea20cbcef38(_obj, amount)); }
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: template<__ImplementsInterface_IBinaryInteger T> static const std::tuple<T, T> DefaultDivRem(T lhs, T rhs) ;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		public: template<__ImplementsInterface_IBinaryInteger T> static const T DefaultLeadingZeroCount(T value) ;
		
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
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const std::tuple<Builtin::OptionalStrongRef<Builtin::ObjectRef>, Builtin::OptionalStrongRef<Builtin::ObjectRef>> DivRem(const __AnyInterface& iface, Builtin::OptionalStrongRef<Builtin::ObjectRef> rhs)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_23768c16e76cb1b5(Builtin::GetObjectReferenceFromInterface(&iface), rhs)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_10c8668372cde25d(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_3126aea20cbcef38(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLeadingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLeadingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getTrailingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getTrailingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getPopCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getPopCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::usize getByteCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getByteCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryInteger::__vtable> FORCE_INLINE const Builtin::usize getShortestBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getShortestBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Free function declarations
//###############################################################################
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<__ImplementsInterface_IBinaryInteger T> inline constexpr auto _operator_lt_lt_mod(T lhs, Builtin::i32 shiftAmount)  -> const T;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<__ImplementsInterface_IBinaryInteger T> inline constexpr auto _operator_gt_gt_mod(T lhs, Builtin::i32 shiftAmount)  -> const T;
//###############################################################################
//# Function definitions
//###############################################################################

#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<__ImplementsInterface_IBinaryInteger T> inline constexpr auto _operator_lt_lt_mod(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(lhs.__ref(), shiftAmount)); 
	}
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	template<__ImplementsInterface_IBinaryInteger T> inline constexpr auto _operator_gt_gt_mod(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(lhs.__ref(), shiftAmount)); 
	}
template<__ImplementsInterface_IBinaryInteger T> inline const std::tuple<T, T> IBinaryInteger::DefaultDivRem(T lhs, T rhs) 
	{
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		auto quotient = lhs / rhs; 
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		return std::make_tuple(quotient, (lhs - (quotient * rhs)));
	}
	template<__ImplementsInterface_IBinaryInteger T> inline const T IBinaryInteger::DefaultLeadingZeroCount(T value) 
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		static_assert(std::is_base_of_v<Builtin::Struct, T>, "T must be a struct");
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		auto bitCount = T{ADV_UPCS(ByteCount)(value.__ref()) * Builtin::u64(8ULL)}; 
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		if (value == ADV_USPCS(Zero, T)()) {
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
			return T{bitCount};
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
		return (bitCount - ADV_USPCS(One, T)()) ^ ADV_UPCS(Log2)(value.__ref());
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryInteger.ast"
	

}