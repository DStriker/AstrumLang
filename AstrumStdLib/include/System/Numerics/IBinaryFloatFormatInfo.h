#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IBinaryFloatingPointIeee754.h"
#include "IMinMaxValue.h"

namespace System::Numerics {
namespace __Unsafe {} namespace __IBinaryFloatFormatInfo$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IBinaryFloatFormatInfo;
class IBinaryFloatFormatInfo$Unowned;
class IBinaryFloatFormatInfo$Weak;
} namespace $extensions {
} namespace System::Numerics {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Numerics::IBinaryFloatFormatInfo> = false;

namespace System::Numerics {
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_FromBits
} namespace $extensions { template<class _TT> struct $static_FromBits{ template<class... __Args> static Builtin::FakeTypeTag get(__Args... _) noexcept { return {}; } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_FromBits
#endif
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_66e0fae685bd8488 = requires { {__AnyType::$class::FromBits(std::declval<typename __AnyType::BitsType>())} -> std::convertible_to<typename __AnyType::$self>; }  || requires { { [] { using namespace $extensions; return $static_FromBits<typename __AnyType::$self>::get(std::declval<typename __AnyType::$self::BitsType>());}() } -> std::convertible_to<typename __AnyType::$self>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NumberBufferLength
} namespace $extensions { template<class _TT> struct $static_getNumberBufferLength{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NumberBufferLength
#endif
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get6feafaea987c3098 = requires { __AnyType::$self::NumberBufferLength; } || requires { { [] { using namespace $extensions; return $static_getNumberBufferLength<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_ZeroBits
} namespace $extensions { template<class _TT> struct $static_getZeroBits{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_ZeroBits
#endif
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3f2807d3aeb2a301 = requires { __AnyType::$self::ZeroBits; } || requires { { [] { using namespace $extensions; return $static_getZeroBits<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_InfinityBits
} namespace $extensions { template<class _TT> struct $static_getInfinityBits{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_InfinityBits
#endif
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get68adf1615e33a45f = requires { __AnyType::$self::InfinityBits; } || requires { { [] { using namespace $extensions; return $static_getInfinityBits<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NormalMantissaMask
} namespace $extensions { template<class _TT> struct $static_getNormalMantissaMask{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NormalMantissaMask
#endif
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get659bb417c0feaefc = requires { __AnyType::$self::NormalMantissaMask; } || requires { { [] { using namespace $extensions; return $static_getNormalMantissaMask<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_DenormalMantissaMask
} namespace $extensions { template<class _TT> struct $static_getDenormalMantissaMask{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_DenormalMantissaMask
#endif
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb06b59a9de335d93 = requires { __AnyType::$self::DenormalMantissaMask; } || requires { { [] { using namespace $extensions; return $static_getDenormalMantissaMask<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MinBinaryExponent
} namespace $extensions { template<class _TT> struct $static_getMinBinaryExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MinBinaryExponent
#endif
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get1700a6e5550768fb = requires { __AnyType::$self::MinBinaryExponent; } || requires { { [] { using namespace $extensions; return $static_getMinBinaryExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxBinaryExponent
} namespace $extensions { template<class _TT> struct $static_getMaxBinaryExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxBinaryExponent
#endif
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get7e6b543d50155d41 = requires { __AnyType::$self::MaxBinaryExponent; } || requires { { [] { using namespace $extensions; return $static_getMaxBinaryExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MinDecimalExponent
} namespace $extensions { template<class _TT> struct $static_getMinDecimalExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MinDecimalExponent
#endif
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd3ff6a4dfc298a7b = requires { __AnyType::$self::MinDecimalExponent; } || requires { { [] { using namespace $extensions; return $static_getMinDecimalExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxDecimalExponent
} namespace $extensions { template<class _TT> struct $static_getMaxDecimalExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxDecimalExponent
#endif
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3c0879944b2c2d2d = requires { __AnyType::$self::MaxDecimalExponent; } || requires { { [] { using namespace $extensions; return $static_getMaxDecimalExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_ExponentBias
} namespace $extensions { template<class _TT> struct $static_getExponentBias{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_ExponentBias
#endif
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd3ca1d3c81b170fd = requires { __AnyType::$self::ExponentBias; } || requires { { [] { using namespace $extensions; return $static_getExponentBias<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_ExponentBits
} namespace $extensions { template<class _TT> struct $static_getExponentBits{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_ExponentBits
#endif
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getd38a053c817b6440 = requires { __AnyType::$self::ExponentBits; } || requires { { [] { using namespace $extensions; return $static_getExponentBits<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_OverflowDecimalExponent
} namespace $extensions { template<class _TT> struct $static_getOverflowDecimalExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_OverflowDecimalExponent
#endif
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb3e2064aa6ca3def = requires { __AnyType::$self::OverflowDecimalExponent; } || requires { { [] { using namespace $extensions; return $static_getOverflowDecimalExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_InfinityExponent
} namespace $extensions { template<class _TT> struct $static_getInfinityExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_InfinityExponent
#endif
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get516b3b1883289be8 = requires { __AnyType::$self::InfinityExponent; } || requires { { [] { using namespace $extensions; return $static_getInfinityExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_NormalMantissaBits
} namespace $extensions { template<class _TT> struct $static_getNormalMantissaBits{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_NormalMantissaBits
#endif
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get299cc482cc833a0c = requires { __AnyType::$self::NormalMantissaBits; } || requires { { [] { using namespace $extensions; return $static_getNormalMantissaBits<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u16>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_DenormalMantissaBits
} namespace $extensions { template<class _TT> struct $static_getDenormalMantissaBits{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_DenormalMantissaBits
#endif
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get3ba4197fff907fb3 = requires { __AnyType::$self::DenormalMantissaBits; } || requires { { [] { using namespace $extensions; return $static_getDenormalMantissaBits<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u16>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MinFastFloatDecimalExponent
} namespace $extensions { template<class _TT> struct $static_getMinFastFloatDecimalExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MinFastFloatDecimalExponent
#endif
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get526cad9349d532ed = requires { __AnyType::$self::MinFastFloatDecimalExponent; } || requires { { [] { using namespace $extensions; return $static_getMinFastFloatDecimalExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxFastFloatDecimalExponent
} namespace $extensions { template<class _TT> struct $static_getMaxFastFloatDecimalExponent{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxFastFloatDecimalExponent
#endif
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getbc09544a477163fb = requires { __AnyType::$self::MaxFastFloatDecimalExponent; } || requires { { [] { using namespace $extensions; return $static_getMaxFastFloatDecimalExponent<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MinExponentRoundToEven
} namespace $extensions { template<class _TT> struct $static_getMinExponentRoundToEven{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MinExponentRoundToEven
#endif
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get91ac5ee594020a07 = requires { __AnyType::$self::MinExponentRoundToEven; } || requires { { [] { using namespace $extensions; return $static_getMinExponentRoundToEven<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxExponentRoundToEven
} namespace $extensions { template<class _TT> struct $static_getMaxExponentRoundToEven{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxExponentRoundToEven
#endif
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getfde9703437cb671d = requires { __AnyType::$self::MaxExponentRoundToEven; } || requires { { [] { using namespace $extensions; return $static_getMaxExponentRoundToEven<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxExponentFastPath
} namespace $extensions { template<class _TT> struct $static_getMaxExponentFastPath{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxExponentFastPath
#endif
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get180e3ef9dbecae05 = requires { __AnyType::$self::MaxExponentFastPath; } || requires { { [] { using namespace $extensions; return $static_getMaxExponentFastPath<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::i32>; };
	
#ifndef ADV_STATIC_EXTENSION_DEFINITION_MaxMantissaFastPath
} namespace $extensions { template<class _TT> struct $static_getMaxMantissaFastPath{ static void get() noexcept { } }; } namespace System::Numerics {
#define ADV_STATIC_EXTENSION_DEFINITION_MaxMantissaFastPath
#endif
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_get870be7109e212e12 = requires { __AnyType::$self::MaxMantissaFastPath; } || requires { { [] { using namespace $extensions; return $static_getMaxMantissaFastPath<typename __AnyType::$self>::get(); }() } -> std::convertible_to<Builtin::u128>; };
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $HasMethodImplementation_getb089927548f0f9df = requires(typename __AnyType::$class t) { {t.getBits()} -> std::convertible_to<typename __AnyType::$self::BitsType>; } || requires(typename __AnyType::$self t) { {getBits($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<typename __AnyType::$self::BitsType>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	ADV_CHECK_INTERFACE(IBinaryFloatingPointIeee754, IBinaryFloatingPointIeee754);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	namespace $vtables {
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
		struct $vtable_IBinaryFloatFormatInfo : public IBinaryFloatingPointIeee754::$vtable, public IMinMaxValue::$vtable
		{
			using fn_getBits = Builtin::OptionalStrongRef<Builtin::ObjectRef>(Builtin::Object*);
			fn_getBits* fnptr_getBits;
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
			template<class __AnyType> static Builtin::OptionalStrongRef<Builtin::ObjectRef> impl_getBits(Builtin::Object* obj) { return ADV_UFCS(getBits)(*static_cast<typename __AnyType::$class*>(obj)); }
			
		};
	}
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IBinaryFloatFormatInfo $vtable_IBinaryFloatFormatInfo_for = {$vtable_IBinaryFloatingPointIeee754_for<__AnyType>
		, $vtable_IMinMaxValue_for<__AnyType>
		, &$vtables::$vtable_IBinaryFloatFormatInfo::template impl_getBits<__AnyType>
		};
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	template<class __AnyType> concept $ImplementsInterface_IBinaryFloatFormatInfo = $ImplementsInterface_IBinaryFloatingPointIeee754<__AnyType> && $ImplementsInterface_IMinMaxValue<__AnyType> && $HasMethodImplementation_66e0fae685bd8488<__AnyType> && $HasMethodImplementation_get6feafaea987c3098<__AnyType> && $HasMethodImplementation_get3f2807d3aeb2a301<__AnyType> && $HasMethodImplementation_get68adf1615e33a45f<__AnyType> && $HasMethodImplementation_get659bb417c0feaefc<__AnyType> && $HasMethodImplementation_getb06b59a9de335d93<__AnyType> && $HasMethodImplementation_get1700a6e5550768fb<__AnyType> && $HasMethodImplementation_get7e6b543d50155d41<__AnyType> && $HasMethodImplementation_getd3ff6a4dfc298a7b<__AnyType> && $HasMethodImplementation_get3c0879944b2c2d2d<__AnyType> && $HasMethodImplementation_getd3ca1d3c81b170fd<__AnyType> && $HasMethodImplementation_getd38a053c817b6440<__AnyType> && $HasMethodImplementation_getb3e2064aa6ca3def<__AnyType> && $HasMethodImplementation_get516b3b1883289be8<__AnyType> && $HasMethodImplementation_get299cc482cc833a0c<__AnyType> && $HasMethodImplementation_get3ba4197fff907fb3<__AnyType> && $HasMethodImplementation_get526cad9349d532ed<__AnyType> && $HasMethodImplementation_getbc09544a477163fb<__AnyType> && $HasMethodImplementation_get91ac5ee594020a07<__AnyType> && $HasMethodImplementation_getfde9703437cb671d<__AnyType> && $HasMethodImplementation_get180e3ef9dbecae05<__AnyType> && $HasMethodImplementation_get870be7109e212e12<__AnyType> && $HasMethodImplementation_getb089927548f0f9df<__AnyType>;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	class IBinaryFloatFormatInfo final : public Builtin::InterfaceRef {
		public: using $self = IBinaryFloatFormatInfo;
		public: using $vtable = $vtables::$vtable_IBinaryFloatFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IBinaryFloatFormatInfo$Unowned;
		friend class IBinaryFloatFormatInfo$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IBinaryFloatFormatInfo$Unowned;
		public: using $weak_ref = IBinaryFloatFormatInfo$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IBinaryFloatFormatInfo);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryFloatFormatInfo(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IBinaryFloatFormatInfo& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IBinaryFloatFormatInfo(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryFloatFormatInfo(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IBinaryFloatFormatInfo_for<__FixedType> } { static_assert($ImplementsInterface_IBinaryFloatFormatInfo<__FixedType>, "Cannot initialize interface IBinaryFloatFormatInfo from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IBinaryFloatFormatInfo& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IBinaryFloatFormatInfo<std::decay_t<__AnyType>>,"Cannot initialize interface IBinaryFloatFormatInfo from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IBinaryFloatFormatInfo_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IBinaryFloatFormatInfo& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IBinaryFloatFormatInfo<__FixedType>, "Cannot initialize interface IBinaryFloatFormatInfo from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IBinaryFloatFormatInfo_for<__FixedType>; return *this; }
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
		public: const Builtin::OptionalStrongRef<Builtin::ObjectRef> $default_FromBits(Builtin::OptionalStrongRef<Builtin::ObjectRef> bits) const ;
		
	};
	class IBinaryFloatFormatInfo$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IBinaryFloatFormatInfo$Unowned;
		public: using $vtable = $vtables::$vtable_IBinaryFloatFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IBinaryFloatFormatInfo;
		public: using $strong_ref = IBinaryFloatFormatInfo;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IBinaryFloatFormatInfo$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IBinaryFloatFormatInfo$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IBinaryFloatFormatInfo$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IBinaryFloatFormatInfo$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IBinaryFloatFormatInfo$Weak;
		public: using $vtable = $vtables::$vtable_IBinaryFloatFormatInfo;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IBinaryFloatFormatInfo;
		public: using $strong_ref = IBinaryFloatFormatInfo;
		public: using $unowned_ref = IBinaryFloatFormatInfo$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IBinaryFloatFormatInfo$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IBinaryFloatFormatInfo$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IBinaryFloatFormatInfo<__AnyType> IBinaryFloatFormatInfo$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IBinaryFloatFormatInfo_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IBinaryFloatFormatInfo::$vtable> FORCE_INLINE const Builtin::OptionalStrongRef<Builtin::ObjectRef> getBits(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getBits(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Numerics\\IBinaryFloatFormatInfo.ast"
	

}