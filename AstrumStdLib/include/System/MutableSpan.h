#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Range.h"
#include "System/Runtime/CompilerServices/Unsafe.h"
using namespace System::Runtime::CompilerServices;

namespace System {
namespace __Unsafe {} namespace __MutableSpan_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class MutableSpan;
//###############################################################################
//# Type definitions
//###############################################################################
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using __self = MutableSpan<T>;
		public: using __class = __self;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		public: 
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using __self = Iterator;
			public: using __class = __self;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			public: using ElementType = T;
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class __Class_MutableSpan;
			public: Iterator() = default;
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			private: Builtin::usize _length;
			#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: using ElementType = T;
		public: MutableSpan() = default;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const __self getAt(IndexRange range);
		inline constexpr const __self getAt(IndexRange range) const;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const __self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const __self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const __self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const __self;
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const __self;
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const __self;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto operator==(__self other) const noexcept -> const bool;
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const __self;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		private: Builtin::MutableRef<T> _data;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace __extensions { using namespace System;
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> using __extension_MutableSpan_127_MutableSpan = MutableSpan<T>;
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getLength(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const Builtin::usize;
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getIsEmpty(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const bool;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getAsBytes(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const MutableSpan<Builtin::u8>;
	} namespace System{
using __extensions::getLength;
using __extensions::getIsEmpty;
using __extensions::getAsBytes;

	//###############################################################################
//# Function definitions
//###############################################################################

#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_data{(*(ptr))}, 
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __MutableSpan_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard12{};
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if (ptr == nullptr) {
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_data(__data__), 
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> template<size_t S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept : 
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_data{ADV_UFCS(GetDataReference)(arr.__ref())}, 
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_length{S}
	{
	}
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)); 
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)); 
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)));
	}
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)));
	}
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const __self
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)); 
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), _length))> len = ADV_UFCS(Length)(range.__ref(), _length); 
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const __self
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)); 
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), _length))> len = ADV_UFCS(Length)(range.__ref(), _length); 
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const __self { return _operator_subscript(range); }
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const __self { return _operator_subscript(range); }
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const __self
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length))), ADV_UFCS(Length)(range.__ref(), _length)};
	}
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const __self
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length))), ADV_UFCS(Length)(range.__ref(), _length)};
	}
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const __self { return _operator_subscript(range); }
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const __self { return _operator_subscript(range); }
#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const __self
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((start <=> _length) >= 0) {
			#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const __self
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((start + length <=> _length) >= 0) {
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==(__self other) const noexcept -> const bool
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return _length == ADV_UPCS(_length)(other.__ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.__ref()));
	}
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_ref{ADV_UFCS(GetDataReference)(span.__ref())}, 
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_length{ADV_UPCS(Length)(span.__ref())}, 
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		if ((newIndex <=> _length) < 0) {
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			_index = newIndex;
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			return Builtin::Boolean(true);
		}
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return Builtin::Boolean(false);
	}
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const __self
	{
		T& data = __data__;
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		return __self{Builtin::MutableRef(data), length}; ADV_CHECK_REF_STRUCT_PARAM_RETURN(data, "self", __self);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	
} namespace __extensions { using namespace System;
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getLength(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const Builtin::usize
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getIsEmpty(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const bool
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)(__this.__ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	template<class T> inline constexpr auto getAsBytes(__extension_MutableSpan_127_MutableSpan<T> const& __this ) -> const MutableSpan<Builtin::u8>
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __MutableSpan_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard133{};
			#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)(__this.__ref()))))), ADV_UPCS(Length)(__this.__ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	

}