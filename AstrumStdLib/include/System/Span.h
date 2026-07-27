#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "MutableSpan.h"

namespace System {
namespace __Unsafe {} namespace __Span_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class Span;
//###############################################################################
//# Type definitions
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] Span final : public Builtin::RefStruct {
		public: using __self = Span<T>;
		public: using __class = __self;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		public: 
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using __self = Iterator;
			public: using __class = __self;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class Span; template<class T> friend class __Class_Span;
			public: Iterator() = default;
			#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(Span<T> span) noexcept;
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> const T&;
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::Ref<T> _ref;
			#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		public: Span() = default;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr  Span(MutableSpan<T> span) noexcept;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length) ;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr Span(const T& data, Builtin::usize length) noexcept;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  Span(const Builtin::InlineArray<S, T>& arr) noexcept;
		public: inline constexpr const T& getAt(Builtin::i32 index);
		inline constexpr const T& getAt(Builtin::i32 index) const;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: inline constexpr const T& getAt(Index index);
		inline constexpr const T& getAt(Index index) const;
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index) const;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  LIFETIMEBOUND -> const T&;
		public: inline constexpr const __self getAt(IndexRange range);
		inline constexpr const __self getAt(IndexRange range) const;
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const __self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const __self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const __self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const __self;
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const __self;
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const __self;
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==(__self other) const noexcept -> const bool;
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::Ref<T>;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(const T& data, Builtin::usize length)  -> const __self;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using __extension_Span_134_Span = Span<T>;
	#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength(__extension_Span_134_Span<T> const& __this ) -> const Builtin::usize;
	#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty(__extension_Span_134_Span<T> const& __this ) -> const bool;
	#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes(__extension_Span_134_Span<T> const& __this ) -> const Span<Builtin::u8>;
	} namespace System{
using __extensions::getLength;
using __extensions::getIsEmpty;
using __extensions::getAsBytes;

	//###############################################################################
//# Function definitions
//###############################################################################

#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(MutableSpan<T> span) noexcept :
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	Span(ADV_UFCS(GetDataReference)(span.__ref()), ADV_UPCS(Length)(span.__ref()))
	{
	}
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length)  : 
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard15{};
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(const T& data, Builtin::usize length) noexcept : 
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{data}, 
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t S> inline constexpr Span<T>::Span(const Builtin::InlineArray<S, T>& arr) noexcept : 
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.__ref())}, 
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{S}
	{
	}
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::i32 index) const  -> const T&
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T&
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Index index) const  -> const T&
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)); 
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Index index) const  -> const T& { return _operator_subscript(index); }
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Index index) const  -> const T&
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.__ref(), _length)));
	}
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const T& { return _operator_subscript(index); }
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  -> const __self
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)); 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), _length))> len = ADV_UFCS(Length)(range.__ref(), _length); 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  const  -> const __self
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length)); 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), _length))> len = ADV_UFCS(Length)(range.__ref(), _length); 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range)  -> const __self { return _operator_subscript(range); }
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range) const  -> const __self { return _operator_subscript(range); }
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const __self
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length))), ADV_UFCS(Length)(range.__ref(), _length)};
	}
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const __self
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), _length))), ADV_UFCS(Length)(range.__ref(), _length)};
	}
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const __self { return _operator_subscript(range); }
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const __self { return _operator_subscript(range); }
#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start) const  -> const __self
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const __self
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::operator==(__self other) const noexcept -> const bool
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.__ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.__ref()));
	}
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetDataReference() const noexcept -> const Builtin::Ref<T>
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Iterator::Iterator(Span<T> span) noexcept : 
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.__ref())}, 
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.__ref())}, 
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::Reset() noexcept -> void
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrentRef() const  -> const T&
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterate() const  -> const typename Span<T>::Iterator
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::UnsafeCreate(const T& data, Builtin::usize length)  -> const __self
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return __self{data, length};
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace __extensions { using namespace System;
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength(__extension_Span_134_Span<T> const& __this ) -> const Builtin::usize
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty(__extension_Span_134_Span<T> const& __this ) -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)(__this.__ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes(__extension_Span_134_Span<T> const& __this ) -> const Span<Builtin::u8>
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard140{};
			#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)(__this.__ref()))))), ADV_UPCS(Length)(__this.__ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	

}