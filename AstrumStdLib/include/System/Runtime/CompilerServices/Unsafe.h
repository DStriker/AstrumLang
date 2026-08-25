#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Runtime::CompilerServices {
namespace __Unsafe {} namespace __Unsafe$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Unsafe;
//###############################################################################
//# Type definitions
//###############################################################################
#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	struct Unsafe : public Builtin::StaticClass {
		public: using $self = Unsafe;
		private: Unsafe() = default;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Add(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto Add(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto AddByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto AddByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto AddressOf(const T& src)  -> const Builtin::usize;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto AreSame(const T& a, const T& b)  -> const bool;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class TTo, class TFrom> inline constexpr static auto As(Builtin::MutableRef<TFrom> __src__)  -> const Builtin::MutableRef<TTo>;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class TTo, class TFrom> requires(std::is_lvalue_reference_v<TFrom>) inline constexpr static auto As(TFrom&& src)  -> const Builtin::Ref<TTo>;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto AsMutableRef(T&& src)  -> const Builtin::MutableRef<std::remove_cvref_t<T>>;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class TTo, class TFrom> inline constexpr static auto BitCast(const TFrom& src)  -> const TTo;
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto ByteOffset(T&& origin, T&& target)  -> const Builtin::isize;
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T, class... Args> inline constexpr static auto Construct(Builtin::MutableRef<Builtin::u8> __dest__, Args&&... args)  -> const Builtin::MutableRef<T>;
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class TTo, class TFrom> requires(std::is_lvalue_reference_v<TFrom>) inline static auto Copy(Builtin::MutableRef<TTo> __dest__, TFrom&& src)  -> void;
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: inline static auto CopyBlock(Builtin::MutableRef<Builtin::u8> __dest__, Builtin::Ref<Builtin::u8> src, Builtin::usize bytesCount)  -> void;
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: inline static auto CopyBlockNonOverlapping(Builtin::MutableRef<Builtin::u8> __dest__, Builtin::Ref<Builtin::u8> src, Builtin::usize bytesCount)  -> void;
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Destroy(Builtin::MutableRef<T> __dest__)  -> void;
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Destroy(Builtin::Ref<T> dest)  -> void;
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto Destroy(T&& dest)  -> void;
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: inline static auto InitBlock(Builtin::MutableRef<Builtin::u8> __start__, Builtin::u8 initialValue, Builtin::usize bytesCount)  -> void;
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressGreaterThan(const T& lhs, const T& rhs)  -> const bool;
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressGreaterThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool;
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressLessThan(const T& lhs, const T& rhs)  -> const bool;
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressLessThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool;
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsNullRef(const T& src)  -> const bool;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto NullRef()  -> const Builtin::MutableRef<T>;
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemCmp(Builtin::Unsafe::__RawPtr<const void> lhs, Builtin::Unsafe::__RawPtr<const void> rhs, Builtin::usize count)  -> const Builtin::i32;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemCpy(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto);
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemMove(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto);
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemSet(Builtin::Unsafe::__RawPtr<void> dest, Builtin::i32 ch, Builtin::usize count)  -> decltype(auto);
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Read(const Builtin::u8& src)  -> const T;
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Subtract(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto Subtract(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto SubtractByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto SubtractByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Swap(Builtin::MutableRef<T> __x__, Builtin::MutableRef<T> __y__)  -> void;
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto SwapSequence(Builtin::MutableRef<T> __x__, Builtin::MutableRef<T> __y__, Builtin::usize length)  -> void;
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Write(Builtin::MutableRef<Builtin::u8> __dest__, const T& val)  -> void;
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_ByteOffset;
template<class __TT> struct $static_getByteOffset;
template<class __TT> struct $static_memcpy;
template<class __TT> struct $static_getmemcpy;
template<class __TT> struct $static_AreSame;
template<class __TT> struct $static_getAreSame;
template<class __TT> struct $static_memmove;
template<class __TT> struct $static_getmemmove;
template<class __TT> struct $static_AsMutableRef;
template<class __TT> struct $static_getAsMutableRef;
template<class __TT> struct $static_memset;
template<class __TT> struct $static_getmemset;
template<class __TT> struct $static_memcmp;
template<class __TT> struct $static_getmemcmp;
template<class __TT> struct $static_IsNullRef;
template<class __TT> struct $static_getIsNullRef;
template<class __TT> struct $static_AddByteOffset;
template<class __TT> struct $static_getAddByteOffset;
template<class __TT> struct $static_Copy;
template<class __TT> struct $static_getCopy;
template<class __TT> struct $static_CopyBlock;
template<class __TT> struct $static_getCopyBlock;
template<class __TT> struct $static_InitBlock;
template<class __TT> struct $static_getInitBlock;
template<class __TT> struct $static_Write;
template<class __TT> struct $static_getWrite;
template<class __TT> struct $static_Destroy;
template<class __TT> struct $static_getDestroy;
template<class __TT> struct $static_Subtract;
template<class __TT> struct $static_getSubtract;
template<class __TT> struct $static_SubtractByteOffset;
template<class __TT> struct $static_getSubtractByteOffset;
} namespace System::Runtime::CompilerServices {
//###############################################################################
//# Function definitions
//###############################################################################

#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Add(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard9{};
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef(ADV_UFCS(_operator_subscript)(((__RawPtr(std::addressof(src)))).$ref(), offset));
		}
		return {};
	}
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Add(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard19{};
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return ADV_UFCS(_operator_subscript)(((__RawPtr(std::addressof(src)))).$ref(), offset);
		}
		return {};
	}
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AddByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard29{};
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) + offset))));
		}
		return {};
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::AddByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard39{};
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) + offset)));
		}
		return {};
	}
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AddressOf(const T& src)  -> const Builtin::usize
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard47{};
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return UnsafeCastToUsize((__RawPtr(std::addressof(src))));
		}
		return {};
	}
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AreSame(const T& a, const T& b)  -> const bool
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard55{};
			#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (__RawPtr(std::addressof(a))) == (__RawPtr(std::addressof(b)));
		}
		return {};
	}
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class TTo, class TFrom> inline constexpr auto Unsafe::As(Builtin::MutableRef<TFrom> __src__)  -> const Builtin::MutableRef<TTo>
	{
		TFrom& src = __src__;
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard65{};
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<TTo>((__RawPtr(std::addressof(src)))))));
		}
		return {};
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class TTo, class TFrom> requires(std::is_lvalue_reference_v<TFrom>) inline constexpr auto Unsafe::As(TFrom&& src)  -> const Builtin::Ref<TTo>
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard76{};
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<TTo>((__RawPtr(std::addressof(src)))))));
		}
		return {};
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::AsMutableRef(T&& src)  -> const Builtin::MutableRef<std::remove_cvref_t<T>>
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard85{};
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<std::remove_cvref_t<T>>((__RawPtr(std::addressof(src)))))));
		}
		return {};
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class TTo, class TFrom> inline constexpr auto Unsafe::BitCast(const TFrom& src)  -> const TTo
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(Builtin::BitCast<TTo>(src)); 
	}
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::ByteOffset(T&& origin, T&& target)  -> const Builtin::isize
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard98{};
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return ((__RawPtr(std::addressof(target))) - (__RawPtr(std::addressof(origin)))) * Builtin::usize(sizeof(std::remove_cvref_t<T>));
		}
		return {};
	}
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T, class... Args> inline constexpr auto Unsafe::Construct(Builtin::MutableRef<Builtin::u8> __dest__, Args&&... args)  -> const Builtin::MutableRef<T>
	{
		Builtin::u8& dest = __dest__;
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard108{};
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			auto ptr = new (std::addressof(dest)) T(std::forward<Args>(args)...);
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(ptr)));
		}
		return {};
	}
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class TTo, class TFrom> requires(std::is_lvalue_reference_v<TFrom>) inline auto Unsafe::Copy(Builtin::MutableRef<TTo> __dest__, TFrom&& src)  -> void
	{
		TTo& dest = __dest__;
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard120{};
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memcpy((__RawPtr(std::addressof(dest))), (__RawPtr(std::addressof(src))), Builtin::usize(sizeof (TFrom)));
		}
	}
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::CopyBlock(Builtin::MutableRef<Builtin::u8> __dest__, Builtin::Ref<Builtin::u8> src, Builtin::usize bytesCount)  -> void
	{
		Builtin::u8& dest = __dest__;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard130{};
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memmove((__RawPtr(std::addressof(dest))), (__RawPtr(std::addressof(src))), bytesCount);
		}
	}
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::CopyBlockNonOverlapping(Builtin::MutableRef<Builtin::u8> __dest__, Builtin::Ref<Builtin::u8> src, Builtin::usize bytesCount)  -> void
	{
		Builtin::u8& dest = __dest__;
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard140{};
			#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memcpy((__RawPtr(std::addressof(dest))), (__RawPtr(std::addressof(src))), bytesCount);
		}
	}
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Destroy(Builtin::MutableRef<T> __dest__)  -> void
	{
		T& dest = __dest__;
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.$ref().~TOrigin();
	}
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Destroy(Builtin::Ref<T> dest)  -> void
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.$ref().~TOrigin();
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Destroy(T&& dest)  -> void
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.~TOrigin();
	}
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::InitBlock(Builtin::MutableRef<Builtin::u8> __start__, Builtin::u8 initialValue, Builtin::usize bytesCount)  -> void
	{
		Builtin::u8& start = __start__;
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard178{};
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memset((__RawPtr(std::addressof(start))), initialValue, bytesCount);
		}
	}
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressGreaterThan(const T& lhs, const T& rhs)  -> const bool
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard186{};
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) > 0;
		}
		return {};
	}
#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressGreaterThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard194{};
			#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) >= 0;
		}
		return {};
	}
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressLessThan(const T& lhs, const T& rhs)  -> const bool
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard202{};
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) < 0;
		}
		return {};
	}
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressLessThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard210{};
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) <= 0;
		}
		return {};
	}
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsNullRef(const T& src)  -> const bool
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard218{};
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (__RawPtr(std::addressof(src))) == nullptr;
		}
		return {};
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::NullRef()  -> const Builtin::MutableRef<T>
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(BitCast<typename Builtin::template MutableRef<T>>(Builtin::usize(0U))); 
	}
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemCmp(Builtin::Unsafe::__RawPtr<const void> lhs, Builtin::Unsafe::__RawPtr<const void> rhs, Builtin::usize count)  -> const Builtin::i32
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe$Protected__Unsafe;
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memcmp(lhs, rhs, count)); 
	}
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemCpy(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe$Protected__Unsafe;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memcpy(dest, src, count)); 
	}
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemMove(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe$Protected__Unsafe;
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memmove(dest, src, count)); 
	}
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemSet(Builtin::Unsafe::__RawPtr<void> dest, Builtin::i32 ch, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe$Protected__Unsafe;
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memset(dest, ch, count)); 
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Read(const Builtin::u8& src)  -> const T
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard236{};
			#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<T>((__RawPtr(std::addressof(src))))));
		}
		return {};
	}
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Subtract(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard246{};
			#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(((__RawPtr(std::addressof(src))) - offset))));
		}
		return {};
	}
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Subtract(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard256{};
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(((__RawPtr(std::addressof(src))) - offset)));
		}
		return {};
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::SubtractByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard266{};
			#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) - offset))));
		}
		return {};
	}
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::SubtractByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard276{};
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) - offset)));
		}
		return {};
	}
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Swap(Builtin::MutableRef<T> __x__, Builtin::MutableRef<T> __y__)  -> void
	{
		T& x = __x__;
		T& y = __y__;
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		const Builtin::Auto<decltype(Builtin::Move(x))> tmp = Builtin::Move(x); 
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		x = Builtin::Move(y);
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		y = Builtin::Move(tmp);
	}
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::SwapSequence(Builtin::MutableRef<T> __x__, Builtin::MutableRef<T> __y__, Builtin::usize length)  -> void
	{
		T& x = __x__;
		T& y = __y__;
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard290{};
			#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			Builtin::Auto<decltype((__RawPtr(std::addressof(x))))> px = (__RawPtr(std::addressof(x))); 
			#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			Builtin::Auto<decltype((__RawPtr(std::addressof(y))))> py = (__RawPtr(std::addressof(y))); 
			#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			for (Builtin::Auto<decltype(Builtin::i32(0))> i = Builtin::i32(0); (i <=> length) < 0; ++i) 
			{
				#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
				const Builtin::Auto<decltype(Builtin::Move(((*(px)))))> tmp = Builtin::Move(((*(px)))); 
				#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
				(*(px)) = Builtin::Move(((*(py))));
				#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
				(*(py)) = Builtin::Move(tmp);
				#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
				++px;
				#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
				++py;
			}
		}
	}
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Write(Builtin::MutableRef<Builtin::u8> __dest__, const T& val)  -> void
	{
		Builtin::u8& dest = __dest__;
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::CompilerServices::__Unsafe;	using namespace __Unsafe$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard310{};
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			(*(UnsafePointerCast<std::remove_cvref_t<T>>((__RawPtr(std::addressof(dest)))))) = val;
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	

}