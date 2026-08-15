#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __IConvertible$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class IConvertible;
class IConvertible$Unowned;
class IConvertible$Weak;
} namespace $extensions {
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::IConvertible> = false;

namespace System {
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_6cb9b83fd65f6f2b = requires(typename __AnyType::$class t) { {t.ToBoolean()} -> std::convertible_to<bool>; }  || requires(typename __AnyType::$self t) { {ToBoolean($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<bool>; };
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_184c43ec34144bde = requires(typename __AnyType::$class t) { {t.ToInt8()} -> std::convertible_to<Builtin::i8>; }  || requires(typename __AnyType::$self t) { {ToInt8($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i8>; };
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_5a69b5d76f050837 = requires(typename __AnyType::$class t) { {t.ToUInt8()} -> std::convertible_to<Builtin::u8>; }  || requires(typename __AnyType::$self t) { {ToUInt8($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u8>; };
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_5dcb545c7e686cbd = requires(typename __AnyType::$class t) { {t.ToInt16()} -> std::convertible_to<Builtin::i16>; }  || requires(typename __AnyType::$self t) { {ToInt16($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i16>; };
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_a6898c11a572da6e = requires(typename __AnyType::$class t) { {t.ToUInt16()} -> std::convertible_to<Builtin::u16>; }  || requires(typename __AnyType::$self t) { {ToUInt16($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u16>; };
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_5dc4c05c7e630593 = requires(typename __AnyType::$class t) { {t.ToInt32()} -> std::convertible_to<Builtin::i32>; }  || requires(typename __AnyType::$self t) { {ToInt32($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i32>; };
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_a6907811a578d720 = requires(typename __AnyType::$class t) { {t.ToUInt32()} -> std::convertible_to<Builtin::u32>; }  || requires(typename __AnyType::$self t) { {ToUInt32($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u32>; };
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_5dced05c7e6b7548 = requires(typename __AnyType::$class t) { {t.ToInt64()} -> std::convertible_to<Builtin::i64>; }  || requires(typename __AnyType::$self t) { {ToInt64($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i64>; };
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_a6860c11a56fcb17 = requires(typename __AnyType::$class t) { {t.ToUInt64()} -> std::convertible_to<Builtin::u64>; }  || requires(typename __AnyType::$self t) { {ToUInt64($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u64>; };
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_c8df562acb64f48b = requires(typename __AnyType::$class t) { {t.ToInt128()} -> std::convertible_to<Builtin::i128>; }  || requires(typename __AnyType::$self t) { {ToInt128($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::i128>; };
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_6ea0cffc22345666 = requires(typename __AnyType::$class t) { {t.ToUInt128()} -> std::convertible_to<Builtin::u128>; }  || requires(typename __AnyType::$self t) { {ToUInt128($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u128>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_76958f0e61f46359 = requires(typename __AnyType::$class t) { {t.ToIsize()} -> std::convertible_to<Builtin::isize>; }  || requires(typename __AnyType::$self t) { {ToIsize($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::isize>; };
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_9a0367b9d59d4625 = requires(typename __AnyType::$class t) { {t.ToUsize()} -> std::convertible_to<Builtin::usize>; }  || requires(typename __AnyType::$self t) { {ToUsize($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::usize>; };
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_20a3ca2de889c674 = requires(typename __AnyType::$class t) { {t.ToFloat32()} -> std::convertible_to<Builtin::f32>; }  || requires(typename __AnyType::$self t) { {ToFloat32($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::f32>; };
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_20b4c62de89832db = requires(typename __AnyType::$class t) { {t.ToFloat64()} -> std::convertible_to<Builtin::f64>; }  || requires(typename __AnyType::$self t) { {ToFloat64($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::f64>; };
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_465c3fc2b12f998b = requires(typename __AnyType::$class t) { {t.ToByte()} -> std::convertible_to<Builtin::u8>; }  || requires(typename __AnyType::$self t) { {ToByte($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::u8>; };
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $HasMethodImplementation_5a7991b7ec07c629 = requires(typename __AnyType::$class t) { {t.ToChar()} -> std::convertible_to<Builtin::char32>; }  || requires(typename __AnyType::$self t) { {ToChar($extensions::$proxy<typename __AnyType::$self>{t})} -> std::convertible_to<Builtin::char32>; };
	namespace $vtables {
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		struct $vtable_IConvertible
		{
			using fn_6cb9b83fd65f6f2b = const bool(Builtin::Object*);
			fn_6cb9b83fd65f6f2b* fnptr_6cb9b83fd65f6f2b;
			#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const bool impl_6cb9b83fd65f6f2b(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToBoolean)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_184c43ec34144bde = const Builtin::i8(Builtin::Object*);
			fn_184c43ec34144bde* fnptr_184c43ec34144bde;
			#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::i8 impl_184c43ec34144bde(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToInt8)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5a69b5d76f050837 = const Builtin::u8(Builtin::Object*);
			fn_5a69b5d76f050837* fnptr_5a69b5d76f050837;
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u8 impl_5a69b5d76f050837(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt8)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5dcb545c7e686cbd = const Builtin::i16(Builtin::Object*);
			fn_5dcb545c7e686cbd* fnptr_5dcb545c7e686cbd;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::i16 impl_5dcb545c7e686cbd(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToInt16)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_a6898c11a572da6e = const Builtin::u16(Builtin::Object*);
			fn_a6898c11a572da6e* fnptr_a6898c11a572da6e;
			#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u16 impl_a6898c11a572da6e(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt16)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5dc4c05c7e630593 = const Builtin::i32(Builtin::Object*);
			fn_5dc4c05c7e630593* fnptr_5dc4c05c7e630593;
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::i32 impl_5dc4c05c7e630593(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToInt32)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_a6907811a578d720 = const Builtin::u32(Builtin::Object*);
			fn_a6907811a578d720* fnptr_a6907811a578d720;
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u32 impl_a6907811a578d720(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt32)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5dced05c7e6b7548 = const Builtin::i64(Builtin::Object*);
			fn_5dced05c7e6b7548* fnptr_5dced05c7e6b7548;
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::i64 impl_5dced05c7e6b7548(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToInt64)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_a6860c11a56fcb17 = const Builtin::u64(Builtin::Object*);
			fn_a6860c11a56fcb17* fnptr_a6860c11a56fcb17;
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u64 impl_a6860c11a56fcb17(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt64)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_c8df562acb64f48b = const Builtin::i128(Builtin::Object*);
			fn_c8df562acb64f48b* fnptr_c8df562acb64f48b;
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::i128 impl_c8df562acb64f48b(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToInt128)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_6ea0cffc22345666 = const Builtin::u128(Builtin::Object*);
			fn_6ea0cffc22345666* fnptr_6ea0cffc22345666;
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u128 impl_6ea0cffc22345666(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUInt128)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_76958f0e61f46359 = const Builtin::isize(Builtin::Object*);
			fn_76958f0e61f46359* fnptr_76958f0e61f46359;
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::isize impl_76958f0e61f46359(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToIsize)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_9a0367b9d59d4625 = const Builtin::usize(Builtin::Object*);
			fn_9a0367b9d59d4625* fnptr_9a0367b9d59d4625;
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::usize impl_9a0367b9d59d4625(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToUsize)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_20a3ca2de889c674 = const Builtin::f32(Builtin::Object*);
			fn_20a3ca2de889c674* fnptr_20a3ca2de889c674;
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::f32 impl_20a3ca2de889c674(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToFloat32)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_20b4c62de89832db = const Builtin::f64(Builtin::Object*);
			fn_20b4c62de89832db* fnptr_20b4c62de89832db;
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::f64 impl_20b4c62de89832db(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToFloat64)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_465c3fc2b12f998b = const Builtin::u8(Builtin::Object*);
			fn_465c3fc2b12f998b* fnptr_465c3fc2b12f998b;
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::u8 impl_465c3fc2b12f998b(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToByte)(*static_cast<typename __AnyType::$class*>(obj))); }
			using fn_5a7991b7ec07c629 = const Builtin::char32(Builtin::Object*);
			fn_5a7991b7ec07c629* fnptr_5a7991b7ec07c629;
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
			template<class __AnyType> static const Builtin::char32 impl_5a7991b7ec07c629(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(ToChar)(*static_cast<typename __AnyType::$class*>(obj))); }
			
		};
	}
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IConvertible $vtable_IConvertible_for = {&$vtables::$vtable_IConvertible::template impl_6cb9b83fd65f6f2b<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_184c43ec34144bde<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_5a69b5d76f050837<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_5dcb545c7e686cbd<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_a6898c11a572da6e<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_5dc4c05c7e630593<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_a6907811a578d720<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_5dced05c7e6b7548<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_a6860c11a56fcb17<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_c8df562acb64f48b<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_6ea0cffc22345666<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_76958f0e61f46359<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_9a0367b9d59d4625<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_20a3ca2de889c674<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_20b4c62de89832db<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_465c3fc2b12f998b<__AnyType>
		, &$vtables::$vtable_IConvertible::template impl_5a7991b7ec07c629<__AnyType>
		};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	template<class __AnyType> concept $ImplementsInterface_IConvertible = $HasMethodImplementation_6cb9b83fd65f6f2b<__AnyType> && $HasMethodImplementation_184c43ec34144bde<__AnyType> && $HasMethodImplementation_5a69b5d76f050837<__AnyType> && $HasMethodImplementation_5dcb545c7e686cbd<__AnyType> && $HasMethodImplementation_a6898c11a572da6e<__AnyType> && $HasMethodImplementation_5dc4c05c7e630593<__AnyType> && $HasMethodImplementation_a6907811a578d720<__AnyType> && $HasMethodImplementation_5dced05c7e6b7548<__AnyType> && $HasMethodImplementation_a6860c11a56fcb17<__AnyType> && $HasMethodImplementation_c8df562acb64f48b<__AnyType> && $HasMethodImplementation_6ea0cffc22345666<__AnyType> && $HasMethodImplementation_76958f0e61f46359<__AnyType> && $HasMethodImplementation_9a0367b9d59d4625<__AnyType> && $HasMethodImplementation_20a3ca2de889c674<__AnyType> && $HasMethodImplementation_20b4c62de89832db<__AnyType> && $HasMethodImplementation_465c3fc2b12f998b<__AnyType> && $HasMethodImplementation_5a7991b7ec07c629<__AnyType>;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	class IConvertible final : public Builtin::InterfaceRef {
		public: using $self = IConvertible;
		public: using $vtable = $vtables::$vtable_IConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IConvertible$Unowned;
		friend class IConvertible$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IConvertible$Unowned;
		public: using $weak_ref = IConvertible$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IConvertible<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IConvertible);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IConvertible(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IConvertible& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IConvertible(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IConvertible(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IConvertible(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IConvertible_for<__FixedType> } { static_assert($ImplementsInterface_IConvertible<__FixedType>, "Cannot initialize interface IConvertible from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IConvertible& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IConvertible& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IConvertible& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IConvertible<__FixedType>, "Cannot initialize interface IConvertible from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IConvertible_for<__FixedType>; return *this; }
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const bool ToBoolean() const { ADV_EXPRESSION_BODY(_vtable->fnptr_6cb9b83fd65f6f2b(_obj)); }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::i8 ToInt8() const { ADV_EXPRESSION_BODY(_vtable->fnptr_184c43ec34144bde(_obj)); }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u8 ToUInt8() const { ADV_EXPRESSION_BODY(_vtable->fnptr_5a69b5d76f050837(_obj)); }
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::i16 ToInt16() const { ADV_EXPRESSION_BODY(_vtable->fnptr_5dcb545c7e686cbd(_obj)); }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u16 ToUInt16() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a6898c11a572da6e(_obj)); }
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::i32 ToInt32() const { ADV_EXPRESSION_BODY(_vtable->fnptr_5dc4c05c7e630593(_obj)); }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u32 ToUInt32() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a6907811a578d720(_obj)); }
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::i64 ToInt64() const { ADV_EXPRESSION_BODY(_vtable->fnptr_5dced05c7e6b7548(_obj)); }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u64 ToUInt64() const { ADV_EXPRESSION_BODY(_vtable->fnptr_a6860c11a56fcb17(_obj)); }
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::i128 ToInt128() const { ADV_EXPRESSION_BODY(_vtable->fnptr_c8df562acb64f48b(_obj)); }
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u128 ToUInt128() const { ADV_EXPRESSION_BODY(_vtable->fnptr_6ea0cffc22345666(_obj)); }
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::isize ToIsize() const { ADV_EXPRESSION_BODY(_vtable->fnptr_76958f0e61f46359(_obj)); }
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::usize ToUsize() const { ADV_EXPRESSION_BODY(_vtable->fnptr_9a0367b9d59d4625(_obj)); }
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::f32 ToFloat32() const { ADV_EXPRESSION_BODY(_vtable->fnptr_20a3ca2de889c674(_obj)); }
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::f64 ToFloat64() const { ADV_EXPRESSION_BODY(_vtable->fnptr_20b4c62de89832db(_obj)); }
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::u8 ToByte() const { ADV_EXPRESSION_BODY(_vtable->fnptr_465c3fc2b12f998b(_obj)); }
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
		public: FORCE_INLINE const Builtin::char32 ToChar() const { ADV_EXPRESSION_BODY(_vtable->fnptr_5a7991b7ec07c629(_obj)); }
		
	};
	class IConvertible$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IConvertible$Unowned;
		public: using $vtable = $vtables::$vtable_IConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IConvertible;
		public: using $strong_ref = IConvertible;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IConvertible$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IConvertible$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> IConvertible$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IConvertible$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> IConvertible$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IConvertible$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IConvertible$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IConvertible$Weak;
		public: using $vtable = $vtables::$vtable_IConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IConvertible;
		public: using $strong_ref = IConvertible;
		public: using $unowned_ref = IConvertible$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IConvertible$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IConvertible$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> IConvertible$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IConvertible<__AnyType> IConvertible$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const bool ToBoolean(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6cb9b83fd65f6f2b(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::i8 ToInt8(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_184c43ec34144bde(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u8 ToUInt8(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5a69b5d76f050837(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::i16 ToInt16(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5dcb545c7e686cbd(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u16 ToUInt16(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a6898c11a572da6e(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::i32 ToInt32(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5dc4c05c7e630593(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u32 ToUInt32(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a6907811a578d720(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::i64 ToInt64(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5dced05c7e6b7548(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u64 ToUInt64(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a6860c11a56fcb17(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::i128 ToInt128(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_c8df562acb64f48b(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u128 ToUInt128(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_6ea0cffc22345666(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::isize ToIsize(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_76958f0e61f46359(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::usize ToUsize(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_9a0367b9d59d4625(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::f32 ToFloat32(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_20a3ca2de889c674(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::f64 ToFloat64(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_20b4c62de89832db(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::u8 ToByte(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_465c3fc2b12f998b(Builtin::GetObjectReferenceFromInterface(&iface))); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::$vtable, typename IConvertible::$vtable> FORCE_INLINE const Builtin::char32 ToChar(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_5a7991b7ec07c629(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\IConvertible.ast"
	

}