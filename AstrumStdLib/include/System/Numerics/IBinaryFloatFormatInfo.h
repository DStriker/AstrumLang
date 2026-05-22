#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryFloatingPointIeee754.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryFloatFormatInfo_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryFloatFormatInfo;
class IBinaryFloatFormatInfo__Unowned;
class IBinaryFloatFormatInfo__Weak;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryFloatFormatInfo> = false;

namespace System::Numerics {
	} namespace __extensions { template<class _TT> struct __static_FromBits; } namespace System::Numerics {
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_66e0fae685bd8488 = requires { {__AnyType::__class::FromBits(std::declval<typename __AnyType::BitsType>())} -> std::convertible_to<typename __AnyType::__self>; }  || requires { { [] { using namespace __extensions; return __static_FromBits<typename __AnyType::__self>::get(std::declval<typename __AnyType::__self::BitsType>());}() } -> std::convertible_to<typename __AnyType::__self>; };
	} namespace __extensions { template<class _TT> struct __static_getNumberBufferLength; } namespace System::Numerics {
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get6feafaea987c3098 = requires { __AnyType::__self::NumberBufferLength; } || requires { [] { using namespace __extensions; __static_getNumberBufferLength<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getZeroBits; } namespace System::Numerics {
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3f2807d3aeb2a301 = requires { __AnyType::__self::ZeroBits; } || requires { [] { using namespace __extensions; __static_getZeroBits<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getInfinityBits; } namespace System::Numerics {
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get68adf1615e33a45f = requires { __AnyType::__self::InfinityBits; } || requires { [] { using namespace __extensions; __static_getInfinityBits<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getNormalMantissaMask; } namespace System::Numerics {
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get659bb417c0feaefc = requires { __AnyType::__self::NormalMantissaMask; } || requires { [] { using namespace __extensions; __static_getNormalMantissaMask<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getDenormalMantissaMask; } namespace System::Numerics {
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb06b59a9de335d93 = requires { __AnyType::__self::DenormalMantissaMask; } || requires { [] { using namespace __extensions; __static_getDenormalMantissaMask<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMinBinaryExponent; } namespace System::Numerics {
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get1700a6e5550768fb = requires { __AnyType::__self::MinBinaryExponent; } || requires { [] { using namespace __extensions; __static_getMinBinaryExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxBinaryExponent; } namespace System::Numerics {
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get7e6b543d50155d41 = requires { __AnyType::__self::MaxBinaryExponent; } || requires { [] { using namespace __extensions; __static_getMaxBinaryExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMinDecimalExponent; } namespace System::Numerics {
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getd3ff6a4dfc298a7b = requires { __AnyType::__self::MinDecimalExponent; } || requires { [] { using namespace __extensions; __static_getMinDecimalExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxDecimalExponent; } namespace System::Numerics {
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3c0879944b2c2d2d = requires { __AnyType::__self::MaxDecimalExponent; } || requires { [] { using namespace __extensions; __static_getMaxDecimalExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getExponentBias; } namespace System::Numerics {
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getd3ca1d3c81b170fd = requires { __AnyType::__self::ExponentBias; } || requires { [] { using namespace __extensions; __static_getExponentBias<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getExponentBits; } namespace System::Numerics {
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getd38a053c817b6440 = requires { __AnyType::__self::ExponentBits; } || requires { [] { using namespace __extensions; __static_getExponentBits<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getOverflowDecimalExponent; } namespace System::Numerics {
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb3e2064aa6ca3def = requires { __AnyType::__self::OverflowDecimalExponent; } || requires { [] { using namespace __extensions; __static_getOverflowDecimalExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getInfinityExponent; } namespace System::Numerics {
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get516b3b1883289be8 = requires { __AnyType::__self::InfinityExponent; } || requires { [] { using namespace __extensions; __static_getInfinityExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getNormalMantissaBits; } namespace System::Numerics {
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get299cc482cc833a0c = requires { __AnyType::__self::NormalMantissaBits; } || requires { [] { using namespace __extensions; __static_getNormalMantissaBits<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getDenormalMantissaBits; } namespace System::Numerics {
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get3ba4197fff907fb3 = requires { __AnyType::__self::DenormalMantissaBits; } || requires { [] { using namespace __extensions; __static_getDenormalMantissaBits<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMinFastFloatDecimalExponent; } namespace System::Numerics {
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get526cad9349d532ed = requires { __AnyType::__self::MinFastFloatDecimalExponent; } || requires { [] { using namespace __extensions; __static_getMinFastFloatDecimalExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxFastFloatDecimalExponent; } namespace System::Numerics {
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getbc09544a477163fb = requires { __AnyType::__self::MaxFastFloatDecimalExponent; } || requires { [] { using namespace __extensions; __static_getMaxFastFloatDecimalExponent<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMinExponentRoundToEven; } namespace System::Numerics {
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get91ac5ee594020a07 = requires { __AnyType::__self::MinExponentRoundToEven; } || requires { [] { using namespace __extensions; __static_getMinExponentRoundToEven<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxExponentRoundToEven; } namespace System::Numerics {
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getfde9703437cb671d = requires { __AnyType::__self::MaxExponentRoundToEven; } || requires { [] { using namespace __extensions; __static_getMaxExponentRoundToEven<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxExponentFastPath; } namespace System::Numerics {
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get180e3ef9dbecae05 = requires { __AnyType::__self::MaxExponentFastPath; } || requires { [] { using namespace __extensions; __static_getMaxExponentFastPath<typename __AnyType::__self>::get(); }(); };
	} namespace __extensions { template<class _TT> struct __static_getMaxMantissaFastPath; } namespace System::Numerics {
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_get870be7109e212e12 = requires { __AnyType::__self::MaxMantissaFastPath; } || requires { [] { using namespace __extensions; __static_getMaxMantissaFastPath<typename __AnyType::__self>::get(); }(); };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __HasMethodImplementation_getb089927548f0f9df = requires(typename __AnyType::__class t) { {t.getBits()} -> std::convertible_to<typename __AnyType::__self::BitsType>; } || requires(typename __AnyType::__self t) { {getBits(__extensions::__proxy<typename __AnyType::__self>{t})} -> std::convertible_to<typename __AnyType::__self::BitsType>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace __vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
		struct __vtable_IBinaryFloatFormatInfo : public IBinaryFloatingPointIeee754::__vtable, public IMinMaxValue::__vtable
		{
			using fn_getBits = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBits* fnptr_getBits;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBits(Builtin::Object* obj) { return ADV_UFCS(getBits)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IBinaryFloatFormatInfo __vtable_IBinaryFloatFormatInfo_for = {__vtable_IBinaryFloatingPointIeee754_for<__AnyType>
		, __vtable_IMinMaxValue_for<__AnyType>
		, &__vtables::__vtable_IBinaryFloatFormatInfo::template impl_getBits<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept __ImplementsInterface_IBinaryFloatFormatInfo = __ImplementsInterface_IBinaryFloatingPointIeee754<__AnyType> && __ImplementsInterface_IMinMaxValue<__AnyType> && __HasMethodImplementation_66e0fae685bd8488<__AnyType> && __HasMethodImplementation_get6feafaea987c3098<__AnyType> && __HasMethodImplementation_get3f2807d3aeb2a301<__AnyType> && __HasMethodImplementation_get68adf1615e33a45f<__AnyType> && __HasMethodImplementation_get659bb417c0feaefc<__AnyType> && __HasMethodImplementation_getb06b59a9de335d93<__AnyType> && __HasMethodImplementation_get1700a6e5550768fb<__AnyType> && __HasMethodImplementation_get7e6b543d50155d41<__AnyType> && __HasMethodImplementation_getd3ff6a4dfc298a7b<__AnyType> && __HasMethodImplementation_get3c0879944b2c2d2d<__AnyType> && __HasMethodImplementation_getd3ca1d3c81b170fd<__AnyType> && __HasMethodImplementation_getd38a053c817b6440<__AnyType> && __HasMethodImplementation_getb3e2064aa6ca3def<__AnyType> && __HasMethodImplementation_get516b3b1883289be8<__AnyType> && __HasMethodImplementation_get299cc482cc833a0c<__AnyType> && __HasMethodImplementation_get3ba4197fff907fb3<__AnyType> && __HasMethodImplementation_get526cad9349d532ed<__AnyType> && __HasMethodImplementation_getbc09544a477163fb<__AnyType> && __HasMethodImplementation_get91ac5ee594020a07<__AnyType> && __HasMethodImplementation_getfde9703437cb671d<__AnyType> && __HasMethodImplementation_get180e3ef9dbecae05<__AnyType> && __HasMethodImplementation_get870be7109e212e12<__AnyType> && __HasMethodImplementation_getb089927548f0f9df<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	class IBinaryFloatFormatInfo final : public Builtin::InterfaceRef {
		public: using __self = IBinaryFloatFormatInfo;
		public: using __vtable = __vtables::__vtable_IBinaryFloatFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IBinaryFloatFormatInfo__Unowned;
		friend class IBinaryFloatFormatInfo__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IBinaryFloatFormatInfo__Unowned;
		public: using __weak_ref = IBinaryFloatFormatInfo__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryFloatFormatInfo);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryFloatFormatInfo(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryFloatFormatInfo& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryFloatFormatInfo(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryFloatFormatInfo(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IBinaryFloatFormatInfo_for<__FixedType> } { static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<__FixedType>, "Cannot initialize interface IBinaryFloatFormatInfo from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryFloatFormatInfo& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryFloatFormatInfo& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IBinaryFloatFormatInfo<__FixedType>, "Cannot initialize interface IBinaryFloatFormatInfo from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IBinaryFloatFormatInfo_for<__FixedType>; return *this; }
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
		public: const Builtin::OptionalStrongRef<Builtin::ObjectRef> __default_FromBits(Builtin::OptionalStrongRef<Builtin::ObjectRef> bits) const ;
		
	};
	class IBinaryFloatFormatInfo__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IBinaryFloatFormatInfo__Unowned;
		public: using __vtable = __vtables::__vtable_IBinaryFloatFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IBinaryFloatFormatInfo;
		public: using __strong_ref = IBinaryFloatFormatInfo;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IBinaryFloatFormatInfo__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryFloatFormatInfo__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryFloatFormatInfo__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IBinaryFloatFormatInfo__Weak;
		public: using __vtable = __vtables::__vtable_IBinaryFloatFormatInfo;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IBinaryFloatFormatInfo;
		public: using __strong_ref = IBinaryFloatFormatInfo;
		public: using __unowned_ref = IBinaryFloatFormatInfo__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryFloatFormatInfo__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IBinaryFloatFormatInfo__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IBinaryFloatFormatInfo::__vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBits(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBits(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	

}