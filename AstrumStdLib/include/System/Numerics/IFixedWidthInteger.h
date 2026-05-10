#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryInteger.h"
#include "ICheckedArithmetic.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IFixedWidthInteger_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFixedWidthInteger;
class IFixedWidthInteger__Unowned;
class IFixedWidthInteger__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFixedWidthInteger> = false;

namespace System::Numerics {
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_35b9f9e372426186 = requires(typename __AnyType::__class t) { {t.RotateLeft(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {RotateLeft(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return RotateLeft(std::declval<typename __AnyType::__self>(), std::declval<Builtin::i32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_0a0a2e23972d34e5 = requires(typename __AnyType::__class t) { {t.RotateRight(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires(typename __AnyType::__self t) { {RotateRight(__extensions::__proxy<typename __AnyType::__self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::__self>; } || requires { { [] { using namespace __extensions; return RotateRight(std::declval<typename __AnyType::__self>(), std::declval<Builtin::i32>()); }() } -> std::convertible_to<typename __AnyType::__self>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get26922ba847793738 = requires { __AnyType::__self::BitWidth; } || requires { [] { using namespace __extensions; __static_getBitWidth<typename __AnyType::__self>(); }(); };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3f3b768bb6eb3c92 = requires(typename __AnyType::__class t) { {t.getLeadingZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getLeadingZeroCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get665fab3da1b5e3e6 = requires(typename __AnyType::__class t) { {t.getLeadingOneCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getLeadingOneCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get5367f87a71b97c03 = requires(typename __AnyType::__class t) { {t.getPopCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getPopCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb19b2fc8cff79316 = requires(typename __AnyType::__class t) { {t.getZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getZeroCount(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get0086861b5b67defa = requires(typename __AnyType::__class t) { {t.getShortestBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::__self t) { {getShortestBitLength(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb34511533df386e5 = requires(typename __AnyType::__class t) { {t.getByteSwapped()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getByteSwapped(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3579f3ef47d5a1c5 = requires(typename __AnyType::__class t) { {t.getReverseBits()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getReverseBits(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3e722405a4336922 = requires(typename __AnyType::__class t) { {t.getBigEndian()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getBigEndian(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb782232fe3924292 = requires(typename __AnyType::__class t) { {t.getLittleEndian()} -> std::convertible_to<typename __AnyType::__self>; } || requires(typename __AnyType::__self t) { {getLittleEndian(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace __vtables {
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		struct __vtable_IFixedWidthInteger : public IBinaryInteger::__vtable, public ICheckedArithmetic::__vtable, public IMinMaxValue::__vtable
		{
			using fn_35b9f9e372426186 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_35b9f9e372426186* fnptr_35b9f9e372426186;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_35b9f9e372426186(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(*static_cast<typename __AnyType::__class*>(obj), amount)); }
			using fn_0a0a2e23972d34e5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_0a0a2e23972d34e5* fnptr_0a0a2e23972d34e5;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_0a0a2e23972d34e5(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(*static_cast<typename __AnyType::__class*>(obj), amount)); }
			using fn_getLeadingZeroCount = Builtin::u32(Builtin::Object*);
			fn_getLeadingZeroCount* fnptr_getLeadingZeroCount;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getLeadingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getLeadingZeroCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getLeadingOneCount = Builtin::u32(Builtin::Object*);
			fn_getLeadingOneCount* fnptr_getLeadingOneCount;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getLeadingOneCount(Builtin::Object* obj) { return ADV_UFCS(getLeadingOneCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getPopCount = Builtin::u32(Builtin::Object*);
			fn_getPopCount* fnptr_getPopCount;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getPopCount(Builtin::Object* obj) { return ADV_UFCS(getPopCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getZeroCount = Builtin::u32(Builtin::Object*);
			fn_getZeroCount* fnptr_getZeroCount;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getZeroCount(Builtin::Object* obj) { return ADV_UFCS(getZeroCount)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getShortestBitLength = Builtin::u32(Builtin::Object*);
			fn_getShortestBitLength* fnptr_getShortestBitLength;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getShortestBitLength(Builtin::Object* obj) { return ADV_UFCS(getShortestBitLength)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getByteSwapped = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getByteSwapped* fnptr_getByteSwapped;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getByteSwapped(Builtin::Object* obj) { return ADV_UFCS(getByteSwapped)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getReverseBits = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReverseBits* fnptr_getReverseBits;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReverseBits(Builtin::Object* obj) { return ADV_UFCS(getReverseBits)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getBigEndian = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBigEndian* fnptr_getBigEndian;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBigEndian(Builtin::Object* obj) { return ADV_UFCS(getBigEndian)(*static_cast<typename __AnyType::__class*>(obj)); }
			using fn_getLittleEndian = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLittleEndian* fnptr_getLittleEndian;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLittleEndian(Builtin::Object* obj) { return ADV_UFCS(getLittleEndian)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IFixedWidthInteger __vtable_IFixedWidthInteger_for = {__vtable_IBinaryInteger_for<__AnyType>
		, __vtable_ICheckedArithmetic_for<__AnyType>
		, __vtable_IMinMaxValue_for<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_35b9f9e372426186<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_0a0a2e23972d34e5<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getLeadingZeroCount<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getLeadingOneCount<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getPopCount<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getZeroCount<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getShortestBitLength<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getByteSwapped<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getReverseBits<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getBigEndian<__AnyType>
		, &__vtables::__vtable_IFixedWidthInteger::template impl_getLittleEndian<__AnyType>
		};
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept __ImplementsInterface_IFixedWidthInteger = __ImplementsInterface_IBinaryInteger<__AnyType> && __ImplementsInterface_ICheckedArithmetic<__AnyType> && __ImplementsInterface_IMinMaxValue<__AnyType> && __HasMethodImplementation_35b9f9e372426186<__AnyType> && __HasMethodImplementation_0a0a2e23972d34e5<__AnyType> && __HasMethodImplementation_get26922ba847793738<__AnyType> && __HasMethodImplementation_get3f3b768bb6eb3c92<__AnyType> && __HasMethodImplementation_get665fab3da1b5e3e6<__AnyType> && __HasMethodImplementation_get5367f87a71b97c03<__AnyType> && __HasMethodImplementation_getb19b2fc8cff79316<__AnyType> && __HasMethodImplementation_get0086861b5b67defa<__AnyType> && __HasMethodImplementation_getb34511533df386e5<__AnyType> && __HasMethodImplementation_get3579f3ef47d5a1c5<__AnyType> && __HasMethodImplementation_get3e722405a4336922<__AnyType> && __HasMethodImplementation_getb782232fe3924292<__AnyType>;
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	class IFixedWidthInteger final : public Builtin::InterfaceRef {
		public: using __self = IFixedWidthInteger;
		public: using __vtable = __vtables::__vtable_IFixedWidthInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IFixedWidthInteger__Unowned;
		friend class IFixedWidthInteger__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IFixedWidthInteger__Unowned;
		public: using __weak_ref = IFixedWidthInteger__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IFixedWidthInteger<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFixedWidthInteger);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFixedWidthInteger(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFixedWidthInteger& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFixedWidthInteger(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFixedWidthInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFixedWidthInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFixedWidthInteger(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IFixedWidthInteger_for<__FixedType> } { static_assert(__ImplementsInterface_IFixedWidthInteger<__FixedType>, "Cannot initialize interface IFixedWidthInteger from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFixedWidthInteger& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFixedWidthInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IFixedWidthInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFixedWidthInteger& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IFixedWidthInteger<__FixedType>, "Cannot initialize interface IFixedWidthInteger from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IFixedWidthInteger_for<__FixedType>; return *this; }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_35b9f9e372426186(_obj, amount)); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0a0a2e23972d34e5(_obj, amount)); }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: template<__ImplementsInterface_IFixedWidthInteger T> static const T DefaultLeadingZeroCount(T value) ;
		
	};
	class IFixedWidthInteger__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IFixedWidthInteger__Unowned;
		public: using __vtable = __vtables::__vtable_IFixedWidthInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IFixedWidthInteger;
		public: using __strong_ref = IFixedWidthInteger;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IFixedWidthInteger__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFixedWidthInteger__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFixedWidthInteger__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IFixedWidthInteger__Weak;
		public: using __vtable = __vtables::__vtable_IFixedWidthInteger;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IFixedWidthInteger;
		public: using __strong_ref = IFixedWidthInteger;
		public: using __unowned_ref = IFixedWidthInteger__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFixedWidthInteger__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IFixedWidthInteger__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_35b9f9e372426186(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0a0a2e23972d34e5(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::u32 getLeadingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLeadingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::u32 getLeadingOneCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLeadingOneCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::u32 getPopCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getPopCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::u32 getZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::u32 getShortestBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getShortestBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getByteSwapped(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getByteSwapped(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReverseBits(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReverseBits(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBigEndian(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBigEndian(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IFixedWidthInteger::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLittleEndian(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLittleEndian(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Free function declarations
//###############################################################################
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_lt_lt_not(T lhs, Builtin::i32 shiftAmount)  -> const T;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_gt_gt_not(T lhs, Builtin::i32 shiftAmount)  -> const T;
//###############################################################################
//# Function definitions
//###############################################################################

#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_lt_lt_not(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(lhs.__ref(), shiftAmount)); 
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_gt_gt_not(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(lhs.__ref(), shiftAmount)); 
	}
template<__ImplementsInterface_IFixedWidthInteger T> inline const T IFixedWidthInteger::DefaultLeadingZeroCount(T value) 
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		static_assert(std::is_base_of_v<Builtin::Struct, T>, "T must be a struct");
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		auto bitCount = T{ADV_UPCS(ByteCount)(value.__ref()) * Builtin::u64(8ULL)}; 
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		if (value == ADV_USPCS(Zero, T)()) {
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			return T{bitCount};
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		return (bitCount - ADV_USPCS(One, T)()) ^ ADV_UPCS(Log2)(value.__ref());
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	

}