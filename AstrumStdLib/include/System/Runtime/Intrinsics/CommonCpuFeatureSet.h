#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __CommonCpuFeatureSet$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CommonCpuFeatureSet;
class CommonCpuFeatureSet$Unowned;
class CommonCpuFeatureSet$Weak;
class $Class_CommonCpuFeatureSet;
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Runtime::Intrinsics::CommonCpuFeatureSet> = false;

namespace System::Runtime::Intrinsics {
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	class CommonCpuFeatureSet : public Builtin::ObjectRef {
		public: using $self = CommonCpuFeatureSet;
		private: using $super = Builtin::ObjectRef;
		public: using $class = $Class_CommonCpuFeatureSet;
		private: friend class CommonCpuFeatureSet$Unowned;
		friend class $Class_CommonCpuFeatureSet;
		friend class CommonCpuFeatureSet$Weak;
		public: using $strong_ref = CommonCpuFeatureSet;
		public: using $unowned_ref = CommonCpuFeatureSet$Unowned;
		public: using $weak_ref = CommonCpuFeatureSet$Weak;
		public: FORCE_INLINE decltype(auto) $ref() const noexcept { return *reinterpret_cast<$class*>(_obj); }
		ADV_CLASS_FROM_PTR(CommonCpuFeatureSet)
		public: inline CommonCpuFeatureSet();
		ADV_CLASS_INIT(CommonCpuFeatureSet)
		ADV_CLASS_STRONG_COMMON_CTORS(CommonCpuFeatureSet)
		#define ADV_PROPERTY_SELF $class
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, OsXsave, getOsXsave, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsSseEnabled, getIsSseEnabled, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsAvxEnabled, getIsAvxEnabled, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsAvx512Enabled, getIsAvx512Enabled, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, ManufacturerId, getManufacturerId, Builtin::Str);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, CpuFamily, getCpuFamily, Builtin::u32);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, CpuModel, getCpuModel, Builtin::u32);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse2, getSse2, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse3, getSse3, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Ssse3, getSsse3, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse41, getSse41, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse42, getSse42, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Popcnt, getPopcnt, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Fma3, getFma3, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Fma4, getFma4, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx, getAvx, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx_128, getAvx_128, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, AesNi, getAesNi, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, F16C, getF16C, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Rdrnd, getRdrnd, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Bmi1, getBmi1, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Bmi2, getBmi2, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, EfficientBmi2, getEfficientBmi2, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx2, getAvx2, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx2_128, getAvx2_128, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512F, getAvx512F, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512DQ, getAvx512DQ, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, RdSeed, getRdSeed, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Adx, getAdx, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sha, getSha, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Gfni, getGfni, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Vaes, getVaes, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Vpclmulqdq, getVpclmulqdq, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Ifma, getAvx512Ifma, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Pf, getAvx512Pf, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Er, getAvx512Er, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Cd, getAvx512Cd, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512BW, getAvx512BW, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl, getAvx512Vl, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl_128, getAvx512Vl_128, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl_256, getAvx512Vl_256, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vbmi, getAvx512Vbmi, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vbmi2, getAvx512Vbmi2, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512VnniBW, getAvx512VnniBW, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512BitAlg, getAvx512BitAlg, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vpopcntdq, getAvx512Vpopcntdq, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512_4Vnniw, getAvx512_4Vnniw, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512_4Fmaps, getAvx512_4Fmaps, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vp2Intersect, getAvx512Vp2Intersect, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Fp16, getAvx512Fp16, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Bf16, getAvx512Bf16, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, AvxVnni, getAvxVnni, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Neon, getNeon, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Neon64, getNeon64, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sve, getSve, bool);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, SveBytes, getSveBytes, Builtin::usize);
		public: ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, I8mm, getI8mm, bool);
		#define ADV_PROPERTY_SELF $self
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	class CommonCpuFeatureSet$Unowned : public Builtin::ObjectRef$Unowned {
		public: using $self = CommonCpuFeatureSet;
		public: using $strong_ref = CommonCpuFeatureSet;
		public: using $unowned_ref = CommonCpuFeatureSet$Unowned;
		public: using $weak_ref = CommonCpuFeatureSet$Weak;
		private: using $super = Builtin::ObjectRef$Unowned;
		public: using $class = $Class_CommonCpuFeatureSet;
		public: FORCE_INLINE decltype(auto) $ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<$class*>(_obj); }
		ADV_CLASS_FROM_PTR(CommonCpuFeatureSet$Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(CommonCpuFeatureSet$Unowned)
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	class CommonCpuFeatureSet$Weak : public Builtin::ObjectRef$Weak {
		public: using $self = CommonCpuFeatureSet;
		public: using $strong_ref = CommonCpuFeatureSet;
		public: using $unowned_ref = CommonCpuFeatureSet$Unowned;
		public: using $weak_ref = CommonCpuFeatureSet$Weak;
		private: using $super = Builtin::ObjectRef$Weak;
		public: using $class = $Class_CommonCpuFeatureSet;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(CommonCpuFeatureSet$Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(CommonCpuFeatureSet$Weak)
		#define ADV_PROPERTY_SELF $self
	};
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	class $Class_CommonCpuFeatureSet : public Builtin::Object {
		public: using $self = CommonCpuFeatureSet;
		private: using $super = Builtin::Object;
		public: using $selfClass = $Class_CommonCpuFeatureSet;
		friend class $self;
		friend class $self::$weak_ref;
		#define ADV_PROPERTY_SELF $selfClass
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getOsXsave()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, OsXsave, getOsXsave, bool);
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getIsSseEnabled()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsSseEnabled, getIsSseEnabled, bool);
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getIsAvxEnabled()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsAvxEnabled, getIsAvxEnabled, bool);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getIsAvx512Enabled()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, IsAvx512Enabled, getIsAvx512Enabled, bool);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getManufacturerId()  -> Builtin::Str;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, ManufacturerId, getManufacturerId, Builtin::Str);
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getCpuFamily()  -> Builtin::u32;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, CpuFamily, getCpuFamily, Builtin::u32);
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getCpuModel()  -> Builtin::u32;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, CpuModel, getCpuModel, Builtin::u32);
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSse2()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse2, getSse2, bool);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSse3()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse3, getSse3, bool);
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSsse3()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Ssse3, getSsse3, bool);
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSse41()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse41, getSse41, bool);
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSse42()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sse42, getSse42, bool);
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getPopcnt()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Popcnt, getPopcnt, bool);
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getFma3()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Fma3, getFma3, bool);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getFma4()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Fma4, getFma4, bool);
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx, getAvx, bool);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx_128()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx_128, getAvx_128, bool);
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAesNi()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, AesNi, getAesNi, bool);
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getF16C()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, F16C, getF16C, bool);
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getRdrnd()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Rdrnd, getRdrnd, bool);
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getBmi1()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Bmi1, getBmi1, bool);
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getBmi2()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Bmi2, getBmi2, bool);
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getEfficientBmi2()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, EfficientBmi2, getEfficientBmi2, bool);
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx2()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx2, getAvx2, bool);
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx2_128()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx2_128, getAvx2_128, bool);
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512F()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512F, getAvx512F, bool);
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512DQ()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512DQ, getAvx512DQ, bool);
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getRdSeed()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, RdSeed, getRdSeed, bool);
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAdx()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Adx, getAdx, bool);
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSha()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sha, getSha, bool);
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getGfni()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Gfni, getGfni, bool);
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getVaes()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Vaes, getVaes, bool);
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getVpclmulqdq()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Vpclmulqdq, getVpclmulqdq, bool);
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Ifma()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Ifma, getAvx512Ifma, bool);
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Pf()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Pf, getAvx512Pf, bool);
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Er()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Er, getAvx512Er, bool);
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Cd()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Cd, getAvx512Cd, bool);
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512BW()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512BW, getAvx512BW, bool);
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vl()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl, getAvx512Vl, bool);
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vl_128()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl_128, getAvx512Vl_128, bool);
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vl_256()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vl_256, getAvx512Vl_256, bool);
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vbmi()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vbmi, getAvx512Vbmi, bool);
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vbmi2()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vbmi2, getAvx512Vbmi2, bool);
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512VnniBW()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512VnniBW, getAvx512VnniBW, bool);
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512BitAlg()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512BitAlg, getAvx512BitAlg, bool);
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vpopcntdq()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vpopcntdq, getAvx512Vpopcntdq, bool);
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512_4Vnniw()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512_4Vnniw, getAvx512_4Vnniw, bool);
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512_4Fmaps()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512_4Fmaps, getAvx512_4Fmaps, bool);
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Vp2Intersect()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Vp2Intersect, getAvx512Vp2Intersect, bool);
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Fp16()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Fp16, getAvx512Fp16, bool);
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvx512Bf16()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Avx512Bf16, getAvx512Bf16, bool);
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getAvxVnni()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, AvxVnni, getAvxVnni, bool);
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getNeon()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Neon, getNeon, bool);
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getNeon64()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Neon64, getNeon64, bool);
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSve()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Sve, getSve, bool);
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getSveBytes()  -> Builtin::usize;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, SveBytes, getSveBytes, Builtin::usize);
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		public: inline static auto getI8mm()  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, I8mm, getI8mm, bool);
		
#define ADV_PROPERTY_SELF $self
	};
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	ADV_CHECK_FOR_CONCRETE(CommonCpuFeatureSet);
	
} namespace $extensions {
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Function definitions
//###############################################################################

#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getOsXsave()  -> bool 
	{
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getIsSseEnabled()  -> bool 
	{
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getIsAvxEnabled()  -> bool 
	{
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getIsAvx512Enabled()  -> bool 
	{
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getManufacturerId()  -> Builtin::Str 
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{"<unknown>"}); 
	}
	
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getCpuFamily()  -> Builtin::u32 
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getCpuModel()  -> Builtin::u32 
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSse2()  -> bool 
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSse3()  -> bool 
	{
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSsse3()  -> bool 
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSse41()  -> bool 
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSse42()  -> bool 
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getPopcnt()  -> bool 
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getFma3()  -> bool 
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getFma4()  -> bool 
	{
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx()  -> bool 
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx_128()  -> bool 
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAesNi()  -> bool 
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getF16C()  -> bool 
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getRdrnd()  -> bool 
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getBmi1()  -> bool 
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getBmi2()  -> bool 
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getEfficientBmi2()  -> bool 
	{
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx2()  -> bool 
	{
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx2_128()  -> bool 
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512F()  -> bool 
	{
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512DQ()  -> bool 
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getRdSeed()  -> bool 
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAdx()  -> bool 
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSha()  -> bool 
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getGfni()  -> bool 
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getVaes()  -> bool 
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getVpclmulqdq()  -> bool 
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Ifma()  -> bool 
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Pf()  -> bool 
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Er()  -> bool 
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Cd()  -> bool 
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512BW()  -> bool 
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vl()  -> bool 
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vl_128()  -> bool 
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vl_256()  -> bool 
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vbmi()  -> bool 
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vbmi2()  -> bool 
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512VnniBW()  -> bool 
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512BitAlg()  -> bool 
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vpopcntdq()  -> bool 
	{
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512_4Vnniw()  -> bool 
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512_4Fmaps()  -> bool 
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Vp2Intersect()  -> bool 
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Fp16()  -> bool 
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvx512Bf16()  -> bool 
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getAvxVnni()  -> bool 
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getNeon()  -> bool 
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getNeon64()  -> bool 
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSve()  -> bool 
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getSveBytes()  -> Builtin::usize 
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(0U)); 
	}
	
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline auto $Class_CommonCpuFeatureSet::getI8mm()  -> bool 
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(false)); 
	}
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonCpuFeatureSet.ast"
	inline CommonCpuFeatureSet::ADV_CLASS_DEFAULT_CTOR(CommonCpuFeatureSet)
	inline CommonCpuFeatureSet::ADV_CLASS_STRONG_CTOR_REF(CommonCpuFeatureSet)
	inline CommonCpuFeatureSet& CommonCpuFeatureSet::ADV_CLASS_STRONG_ASSIGN_REF(CommonCpuFeatureSet)
	inline CommonCpuFeatureSet$Unowned::ADV_CLASS_UNOWNED_CTOR_REF(CommonCpuFeatureSet$Unowned)
	inline CommonCpuFeatureSet$Unowned& CommonCpuFeatureSet$Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(CommonCpuFeatureSet$Unowned)
	inline CommonCpuFeatureSet$Weak::ADV_CLASS_WEAK_CTOR_REF(CommonCpuFeatureSet$Weak)
	inline CommonCpuFeatureSet$Weak& CommonCpuFeatureSet$Weak::ADV_CLASS_WEAK_ASSIGN_REF(CommonCpuFeatureSet$Weak)
	

}