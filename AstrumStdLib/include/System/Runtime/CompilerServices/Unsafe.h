#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Runtime::CompilerServices {
namespace __Unsafe {} namespace __Unsafe_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Unsafe;
//###############################################################################
//# Type definitions
//###############################################################################
#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	struct Unsafe : public Builtin::StaticClass {
		public: using __self = Unsafe;
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
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Destroy(Builtin::MutableRef<T> __dest__)  -> void;
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Destroy(Builtin::Ref<T> dest)  -> void;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto Destroy(T&& dest)  -> void;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: inline static auto InitBlock(Builtin::MutableRef<Builtin::u8> __start__, Builtin::u8 initialValue, Builtin::usize bytesCount)  -> void;
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressGreaterThan(const T& lhs, const T& rhs)  -> const bool;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressGreaterThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressLessThan(const T& lhs, const T& rhs)  -> const bool;
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsAddressLessThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto IsNullRef(const T& src)  -> const bool;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto NullRef()  -> const Builtin::MutableRef<T>;
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemCmp(Builtin::Unsafe::__RawPtr<const void> lhs, Builtin::Unsafe::__RawPtr<const void> rhs, Builtin::usize count)  -> const Builtin::i32;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemCpy(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto);
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemMove(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto);
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: [[clang::annotate("unsafe")]] inline static auto MemSet(Builtin::Unsafe::__RawPtr<void> dest, Builtin::i32 ch, Builtin::usize count)  -> decltype(auto);
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Read(const Builtin::u8& src)  -> const T;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Subtract(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto Subtract(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto SubtractByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr static auto SubtractByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>;
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: template<class T> inline constexpr static auto Write(Builtin::MutableRef<Builtin::u8> __dest__, const T& val)  -> void;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Add(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard9{};
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef(ADV_UFCS(_operator_subscript)(((__RawPtr(std::addressof(src)))).__ref(), offset));
		}
		return {};
	}
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Add(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard19{};
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return ADV_UFCS(_operator_subscript)(((__RawPtr(std::addressof(src)))).__ref(), offset);
		}
		return {};
	}
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AddByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard29{};
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) + offset))));
		}
		return {};
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::AddByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard39{};
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) + offset)));
		}
		return {};
	}
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AddressOf(const T& src)  -> const Builtin::usize
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard47{};
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return UnsafeCastToUsize((__RawPtr(std::addressof(src))));
		}
		return {};
	}
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::AreSame(const T& a, const T& b)  -> const bool
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard55{};
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
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard65{};
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<TTo>((__RawPtr(std::addressof(src)))))));
		}
		return {};
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class TTo, class TFrom> requires(std::is_lvalue_reference_v<TFrom>) inline constexpr auto Unsafe::As(TFrom&& src)  -> const Builtin::Ref<TTo>
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard76{};
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<TTo>((__RawPtr(std::addressof(src)))))));
		}
		return {};
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::AsMutableRef(T&& src)  -> const Builtin::MutableRef<std::remove_cvref_t<T>>
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard85{};
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
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard98{};
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
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard108{};
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
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard120{};
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memcpy((__RawPtr(std::addressof(dest))), (__RawPtr(std::addressof(src))), Builtin::usize(sizeof (TFrom)));
		}
	}
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::CopyBlock(Builtin::MutableRef<Builtin::u8> __dest__, Builtin::Ref<Builtin::u8> src, Builtin::usize bytesCount)  -> void
	{
		Builtin::u8& dest = __dest__;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard130{};
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memmove((__RawPtr(std::addressof(dest))), (__RawPtr(std::addressof(src))), bytesCount);
		}
	}
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Destroy(Builtin::MutableRef<T> __dest__)  -> void
	{
		T& dest = __dest__;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.__ref().~TOrigin();
	}
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Destroy(Builtin::Ref<T> dest)  -> void
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.__ref().~TOrigin();
	}
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Destroy(T&& dest)  -> void
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		dest.~TOrigin();
	}
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::InitBlock(Builtin::MutableRef<Builtin::u8> __start__, Builtin::u8 initialValue, Builtin::usize bytesCount)  -> void
	{
		Builtin::u8& start = __start__;
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard168{};
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			std::memset((__RawPtr(std::addressof(start))), initialValue, bytesCount);
		}
	}
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressGreaterThan(const T& lhs, const T& rhs)  -> const bool
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard176{};
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) > 0;
		}
		return {};
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressGreaterThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard184{};
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) >= 0;
		}
		return {};
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressLessThan(const T& lhs, const T& rhs)  -> const bool
	{
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard192{};
			#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) < 0;
		}
		return {};
	}
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsAddressLessThanOrEqualTo(const T& lhs, const T& rhs)  -> const bool
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard200{};
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (UnsafeCastToUsize((__RawPtr(std::addressof(lhs)))) <=> UnsafeCastToUsize((__RawPtr(std::addressof(rhs))))) <= 0;
		}
		return {};
	}
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::IsNullRef(const T& src)  -> const bool
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard208{};
			#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (__RawPtr(std::addressof(src))) == nullptr;
		}
		return {};
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::NullRef()  -> const Builtin::MutableRef<T>
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(BitCast<typename Builtin::MutableRef<T>>(Builtin::usize(0U))); 
	}
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemCmp(Builtin::Unsafe::__RawPtr<const void> lhs, Builtin::Unsafe::__RawPtr<const void> rhs, Builtin::usize count)  -> const Builtin::i32
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memcmp(lhs, rhs, count)); 
	}
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemCpy(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memcpy(dest, src, count)); 
	}
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemMove(Builtin::Unsafe::__RawPtr<void> dest, Builtin::Unsafe::__RawPtr<const void> src, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memmove(dest, src, count)); 
	}
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	inline auto Unsafe::MemSet(Builtin::Unsafe::__RawPtr<void> dest, Builtin::i32 ch, Builtin::usize count)  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_EXPRESSION_BODY(std::memset(dest, ch, count)); 
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Read(const Builtin::u8& src)  -> const T
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard226{};
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<T>((__RawPtr(std::addressof(src))))));
		}
		return {};
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Subtract(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard236{};
			#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(((__RawPtr(std::addressof(src))) - offset))));
		}
		return {};
	}
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::Subtract(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard246{};
			#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(((__RawPtr(std::addressof(src))) - offset)));
		}
		return {};
	}
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::SubtractByteOffset(Builtin::MutableRef<T> __src__, Builtin::usize offset)  -> const Builtin::MutableRef<T>
	{
		T& src = __src__;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard256{};
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return Builtin::MutableRef((*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) - offset))));
		}
		return {};
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> requires(std::is_lvalue_reference_v<T>) inline constexpr auto Unsafe::SubtractByteOffset(T&& src, Builtin::usize offset)  -> const Builtin::Ref<T>
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard266{};
			#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			return (*(UnsafePointerCast<std::remove_cvref_t<T>>(UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(src)))) - offset)));
		}
		return {};
	}
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	template<class T> inline constexpr auto Unsafe::Write(Builtin::MutableRef<Builtin::u8> __dest__, const T& val)  -> void
	{
		Builtin::u8& dest = __dest__;
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Unsafe_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard278{};
			#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
			(*(UnsafePointerCast<std::remove_cvref_t<T>>((__RawPtr(std::addressof(dest)))))) = val;
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	

}