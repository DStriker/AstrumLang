#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryInteger.h"
#include "ICheckedArithmetic.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IFixedWidthInteger$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IFixedWidthInteger;
class IFixedWidthInteger$Unowned;
class IFixedWidthInteger$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IFixedWidthInteger> = false;

namespace System::Numerics {
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_35b9f9e372426186 = requires(typename __AnyType::$class t) { {t.RotateLeft(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {RotateLeft($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_0a0a2e23972d34e5 = requires(typename __AnyType::$class t) { {t.RotateRight(std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires(typename __AnyType::$self t) { {RotateRight($extensions::$proxy<typename __AnyType::$self>{t}, std::declval<Builtin::i32>())} -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_BitWidth
} namespace $extensions { template<class _TT> struct $static_getBitWidth{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_BitWidth
#endif
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get26922ba847793738 = requires { __AnyType::$self::BitWidth; } || requires { { [] { using namespace $extensions; return $static_getBitWidth<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u32>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3f3b768bb6eb3c92 = requires(typename __AnyType::$class t) { {t.getLeadingZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getLeadingZeroCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get665fab3da1b5e3e6 = requires(typename __AnyType::$class t) { {t.getLeadingOneCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getLeadingOneCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get5367f87a71b97c03 = requires(typename __AnyType::$class t) { {t.getPopCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getPopCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb19b2fc8cff79316 = requires(typename __AnyType::$class t) { {t.getZeroCount()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getZeroCount($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get0086861b5b67defa = requires(typename __AnyType::$class t) { {t.getShortestBitLength()} -> std::convertible_to<Builtin::u32>; } || requires(typename __AnyType::$self t) { {getShortestBitLength($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb34511533df386e5 = requires(typename __AnyType::$class t) { {t.getByteSwapped()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getByteSwapped($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3579f3ef47d5a1c5 = requires(typename __AnyType::$class t) { {t.getReverseBits()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getReverseBits($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3e722405a4336922 = requires(typename __AnyType::$class t) { {t.getBigEndian()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getBigEndian($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb782232fe3924292 = requires(typename __AnyType::$class t) { {t.getLittleEndian()} -> std::convertible_to<typename __AnyType::$self>; } || requires(typename __AnyType::$self t) { {getLittleEndian($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(IBinaryInteger, IBinaryInteger);
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(ICheckedArithmetic, ICheckedArithmetic);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace $vtables {
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		struct $vtable_IFixedWidthInteger : public IBinaryInteger::$vtable, public ICheckedArithmetic::$vtable, public IMinMaxValue::$vtable
		{
			using fn_35b9f9e372426186 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_35b9f9e372426186* fnptr_35b9f9e372426186;
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_35b9f9e372426186(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_0a0a2e23972d34e5 = const Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*, Builtin::i32 amount);
			fn_0a0a2e23972d34e5* fnptr_0a0a2e23972d34e5;
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static const Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_0a0a2e23972d34e5(Builtin::Object* obj, Builtin::i32 amount) { ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(*static_cast<typename __AnyType::$class*>(obj), amount)); }
			using fn_getLeadingZeroCount = Builtin::u32(Builtin::Object*);
			fn_getLeadingZeroCount* fnptr_getLeadingZeroCount;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getLeadingZeroCount(Builtin::Object* obj) { return ADV_UFCS(getLeadingZeroCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLeadingOneCount = Builtin::u32(Builtin::Object*);
			fn_getLeadingOneCount* fnptr_getLeadingOneCount;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getLeadingOneCount(Builtin::Object* obj) { return ADV_UFCS(getLeadingOneCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getPopCount = Builtin::u32(Builtin::Object*);
			fn_getPopCount* fnptr_getPopCount;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getPopCount(Builtin::Object* obj) { return ADV_UFCS(getPopCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getZeroCount = Builtin::u32(Builtin::Object*);
			fn_getZeroCount* fnptr_getZeroCount;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getZeroCount(Builtin::Object* obj) { return ADV_UFCS(getZeroCount)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getShortestBitLength = Builtin::u32(Builtin::Object*);
			fn_getShortestBitLength* fnptr_getShortestBitLength;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::u32 impl_getShortestBitLength(Builtin::Object* obj) { return ADV_UFCS(getShortestBitLength)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getByteSwapped = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getByteSwapped* fnptr_getByteSwapped;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getByteSwapped(Builtin::Object* obj) { return ADV_UFCS(getByteSwapped)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getReverseBits = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getReverseBits* fnptr_getReverseBits;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getReverseBits(Builtin::Object* obj) { return ADV_UFCS(getReverseBits)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getBigEndian = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBigEndian* fnptr_getBigEndian;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBigEndian(Builtin::Object* obj) { return ADV_UFCS(getBigEndian)(*static_cast<typename __AnyType::$class*>(obj)); }
			using fn_getLittleEndian = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getLittleEndian* fnptr_getLittleEndian;
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getLittleEndian(Builtin::Object* obj) { return ADV_UFCS(getLittleEndian)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IFixedWidthInteger $vtable_IFixedWidthInteger_for = {$vtable_IBinaryInteger_for<__AnyType>
		, $vtable_ICheckedArithmetic_for<__AnyType>
		, $vtable_IMinMaxValue_for<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_35b9f9e372426186<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_0a0a2e23972d34e5<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getLeadingZeroCount<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getLeadingOneCount<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getPopCount<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getZeroCount<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getShortestBitLength<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getByteSwapped<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getReverseBits<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getBigEndian<__AnyType>
		, &$vtables::$vtable_IFixedWidthInteger::template impl_getLittleEndian<__AnyType>
		};
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<class __AnyType> concept $ImplementsInterface_IFixedWidthInteger = $ImplementsInterface_IBinaryInteger<__AnyType> && $ImplementsInterface_ICheckedArithmetic<__AnyType> && $ImplementsInterface_IMinMaxValue<__AnyType> && $HasMethodImplementation_35b9f9e372426186<__AnyType> && $HasMethodImplementation_0a0a2e23972d34e5<__AnyType> && $HasMethodImplementation_get26922ba847793738<__AnyType> && $HasMethodImplementation_get3f3b768bb6eb3c92<__AnyType> && $HasMethodImplementation_get665fab3da1b5e3e6<__AnyType> && $HasMethodImplementation_get5367f87a71b97c03<__AnyType> && $HasMethodImplementation_getb19b2fc8cff79316<__AnyType> && $HasMethodImplementation_get0086861b5b67defa<__AnyType> && $HasMethodImplementation_getb34511533df386e5<__AnyType> && $HasMethodImplementation_get3579f3ef47d5a1c5<__AnyType> && $HasMethodImplementation_get3e722405a4336922<__AnyType> && $HasMethodImplementation_getb782232fe3924292<__AnyType>;
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	class IFixedWidthInteger final : public Builtin::InterfaceRef {
		public: using $self = IFixedWidthInteger;
		public: using $vtable = $vtables::$vtable_IFixedWidthInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IFixedWidthInteger$Unowned;
		friend class IFixedWidthInteger$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IFixedWidthInteger$Unowned;
		public: using $weak_ref = IFixedWidthInteger$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IFixedWidthInteger<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IFixedWidthInteger);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFixedWidthInteger(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IFixedWidthInteger& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IFixedWidthInteger(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFixedWidthInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFixedWidthInteger_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFixedWidthInteger(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IFixedWidthInteger_for<__FixedType> } { static_assert($ImplementsInterface_IFixedWidthInteger<__FixedType>, "Cannot initialize interface IFixedWidthInteger from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IFixedWidthInteger& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFixedWidthInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IFixedWidthInteger<std::decay_t<__AnyType>>,"Cannot initialize interface IFixedWidthInteger from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IFixedWidthInteger_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IFixedWidthInteger& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IFixedWidthInteger<__FixedType>, "Cannot initialize interface IFixedWidthInteger from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IFixedWidthInteger_for<__FixedType>; return *this; }
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_35b9f9e372426186(_obj, amount)); }
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(Builtin::i32 amount) const { ADV_EXPRESSION_BODY(_vtable->fnptr_0a0a2e23972d34e5(_obj, amount)); }
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		public: template<$ImplementsInterface_IFixedWidthInteger T> static const T DefaultLeadingZeroCount(T value) ;
		
	};
	class IFixedWidthInteger$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IFixedWidthInteger$Unowned;
		public: using $vtable = $vtables::$vtable_IFixedWidthInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IFixedWidthInteger;
		public: using $strong_ref = IFixedWidthInteger;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IFixedWidthInteger$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IFixedWidthInteger$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IFixedWidthInteger$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IFixedWidthInteger$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IFixedWidthInteger$Weak;
		public: using $vtable = $vtables::$vtable_IFixedWidthInteger;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IFixedWidthInteger;
		public: using $strong_ref = IFixedWidthInteger;
		public: using $unowned_ref = IFixedWidthInteger$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IFixedWidthInteger$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IFixedWidthInteger$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IFixedWidthInteger<__AnyType> IFixedWidthInteger$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IFixedWidthInteger_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateLeft(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_35b9f9e372426186(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> RotateRight(const __AnyInterface& iface, Builtin::i32 amount)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_0a0a2e23972d34e5(Builtin::GetObjectReferenceFromInterface(&iface), amount)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::u32 getLeadingZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLeadingZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::u32 getLeadingOneCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLeadingOneCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::u32 getPopCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getPopCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::u32 getZeroCount(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getZeroCount(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::u32 getShortestBitLength(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getShortestBitLength(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getByteSwapped(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getByteSwapped(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getReverseBits(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getReverseBits(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBigEndian(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBigEndian(Builtin::GetObjectReferenceFromInterface(&iface)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IFixedWidthInteger::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getLittleEndian(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getLittleEndian(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Free function declarations
//###############################################################################
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_lt_lt_not(T lhs, Builtin::i32 shiftAmount)  -> const T;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_gt_gt_not(T lhs, Builtin::i32 shiftAmount)  -> const T;
//###############################################################################
//# Function definitions
//###############################################################################

#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_lt_lt_not(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateLeft)(lhs.$ref(), shiftAmount)); 
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto _operator_gt_gt_not(T lhs, Builtin::i32 shiftAmount)  -> const T
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(RotateRight)(lhs.$ref(), shiftAmount)); 
	}
template<$ImplementsInterface_IFixedWidthInteger T> inline const T IFixedWidthInteger::DefaultLeadingZeroCount(T value) 
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		static_assert(Builtin::IsStructType<T>, "T must be a struct");
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		Builtin::Auto<decltype(T{ADV_UPCS(ByteCount)(value.$ref()) * Builtin::u64(8ULL)})> bitCount = T{ADV_UPCS(ByteCount)(value.$ref()) * Builtin::u64(8ULL)}; 
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		if (value == ADV_USPCS(Zero, T)()) {
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
			return T{bitCount};
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
		return (bitCount - ADV_USPCS(One, T)()) ^ ADV_UPCS(Log2)(value.$ref());
	}
	#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IFixedWidthInteger.ast"
	

}