#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Range.h"
#include "Result.h"
#include "Delegates.h"
#include "System/Runtime/CompilerServices/Unsafe.h"
using namespace System::Runtime::CompilerServices;

namespace System {
namespace __Unsafe {} namespace __Span$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class Span;
template<class T> class MutableSpan;
template<class T> class Spliterator;
class ISpanConvertible;
class ISpanConvertible$Unowned;
class ISpanConvertible$Weak;
class IMutableSpanConvertible;
class IMutableSpanConvertible$Unowned;
class IMutableSpanConvertible$Weak;
namespace __Span$Protected { class SpanHelpers; }
//###############################################################################
//# Type definitions
//###############################################################################
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] Span final : public Builtin::RefStruct {
		public: using $self = Span<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class Span; template<class T> friend class $Class_Span;
			public: Iterator() = default;
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(Span<T> span) noexcept;
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> const T&;
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::Ref<T> _ref;
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
		public: 
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] ReverseIterator final : public Builtin::RefStruct {
			public: using $self = ReverseIterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class Span; template<class T> friend class $Class_Span;
			public: ReverseIterator() = default;
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr explicit ReverseIterator(Span<T> span) noexcept;
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> const T&;
			#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::Ref<T> _ref;
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using SpanType = $self;
		public: Span() = default;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr  Span(MutableSpan<T> span) noexcept;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length) ;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr Span(const T& data, Builtin::usize length) noexcept;
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  Span(const Builtin::InlineArray<S, T>& arr) noexcept;
		public: inline constexpr const T& getAt(Builtin::i32 index);
		inline constexpr const T& getAt(Builtin::i32 index) const;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: inline constexpr const T& getAt(Index index);
		inline constexpr const T& getAt(Index index) const;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index) const;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  LIFETIMEBOUND -> const T&;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Get(Builtin::usize index) const  -> const Builtin::Nullable<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start) const  -> const $self;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::Ref<T>;
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Overlaps(const $self& other) const noexcept -> const bool;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(const T& data, Builtin::usize length)  -> const $self;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(System::Span<T> val) const  -> const bool;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(const T& val) const  -> const $self;
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(System::Span<T> vals) const  -> const $self;
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(const T& val) const  -> const $self;
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(System::Span<T> vals) const  -> const $self;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(const T& val) const  -> const $self;
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(System::Span<T> vals) const  -> const $self;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_418_Span = Span<T>;
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_418_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_418_Span<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_418_Span<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_418_Span<T> const& $this ) -> const Builtin::usize;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_418_Span<T> const& $this ) -> const bool;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_418_Span<T> const& $this ) -> const typename $extension_Span_418_Span<T>::ReverseIterator;
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_418_Span<T> const& $this ) -> const Span<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using $self = MutableSpan<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: Iterator() = default;
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		public: 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] ReverseIterator final : public Builtin::RefStruct {
			public: using $self = ReverseIterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: ReverseIterator() = default;
			#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr explicit ReverseIterator(MutableSpan<T> span) noexcept;
			#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using SpanType = Span<T>;
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using MutableSpanType = $self;
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ImmutableType = Span<T>;
		public: MutableSpan() = default;
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Get(Builtin::usize index) const  -> const Builtin::Nullable<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start) const  -> const $self;
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto _operator_dol_eq(typename Builtin::template InitializerList<T> initializer) const  -> const $self;
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto _operator_dol_eq(System::Span<T> other) const  -> const $self;
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Overlaps(const System::Span<T>& other) const noexcept -> const bool;
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self;
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val) const  -> const bool;
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Clear() const  -> void;
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(const T& val) const  -> const $self;
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(System::Span<T> vals) const  -> const $self;
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(const T& val) const  -> const $self;
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(System::Span<T> vals) const  -> const $self;
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(const T& val) const  -> const $self;
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(System::Span<T> vals) const  -> const $self;
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::MutableRef<T> _data;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_739_MutableSpan = MutableSpan<T>;
	#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_739_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_739_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_739_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_739_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>;
	template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_739_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_739_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } 
	#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_739_MutableSpan<T> const& $this ) -> const Builtin::usize;
	#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_739_MutableSpan<T> const& $this ) -> const bool;
	#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_739_MutableSpan<T> const& $this ) -> const typename $extension_Span_739_MutableSpan<T>::ReverseIterator;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_739_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] Spliterator final : public Builtin::RefStruct {
		public: using $self = Spliterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: Spliterator() = default;
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, const T& separator) ;
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, System::Span<T> separators) ;
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, System::Span<T> separators, bool single) ;
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetSource() const  -> const System::Span<T>;
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _src;
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Nullable<T> _separator;
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _separatorBuffer;
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _startCurrent;
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _endCurrent;
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _startNext;
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isBuffer{};
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isAny{};
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Type T should implement ISelfEquatable");
		
	};
	
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::ISpanConvertible> = false;

namespace System {
	#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_2adf06fb9ba1e2e8 = requires { typename __AnyType::SpanType; };
	namespace $vtables {
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_ISpanConvertible
		{
			
		};
	}
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ISpanConvertible $vtable_ISpanConvertible_for = {};
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_ISpanConvertible = $HasAssociatedType_2adf06fb9ba1e2e8<__AnyType>;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	class ISpanConvertible final : public Builtin::InterfaceRef {
		public: using $self = ISpanConvertible;
		public: using $vtable = $vtables::$vtable_ISpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class ISpanConvertible$Unowned;
		friend class ISpanConvertible$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = ISpanConvertible$Unowned;
		public: using $weak_ref = ISpanConvertible$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_ISpanConvertible<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(ISpanConvertible);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ISpanConvertible(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		ISpanConvertible& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> ISpanConvertible(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ISpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface ISpanConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ISpanConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ISpanConvertible(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_ISpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface ISpanConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ISpanConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ISpanConvertible(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_ISpanConvertible_for<__FixedType> } { static_assert($ImplementsInterface_ISpanConvertible<__FixedType>, "Cannot initialize interface ISpanConvertible from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> ISpanConvertible& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_ISpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface ISpanConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ISpanConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> ISpanConvertible& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_ISpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface ISpanConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_ISpanConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> ISpanConvertible& operator=(__AnyType&& value) { static_assert($ImplementsInterface_ISpanConvertible<__FixedType>, "Cannot initialize interface ISpanConvertible from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_ISpanConvertible_for<__FixedType>; return *this; }
		
	};
	class ISpanConvertible$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = ISpanConvertible$Unowned;
		public: using $vtable = $vtables::$vtable_ISpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class ISpanConvertible;
		public: using $strong_ref = ISpanConvertible;
		public: using $unowned_ref = $self;
		public: using $weak_ref = ISpanConvertible$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(ISpanConvertible$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> ISpanConvertible$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ISpanConvertible$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> ISpanConvertible$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> ISpanConvertible$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class ISpanConvertible$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = ISpanConvertible$Weak;
		public: using $vtable = $vtables::$vtable_ISpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class ISpanConvertible;
		public: using $strong_ref = ISpanConvertible;
		public: using $unowned_ref = ISpanConvertible$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(ISpanConvertible$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		ISpanConvertible$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> ISpanConvertible$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_ISpanConvertible<__AnyType> ISpanConvertible$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_ISpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::IMutableSpanConvertible> = false;

namespace System {
	#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_d9e004e898fa60a8 = requires { typename __AnyType::MutableSpanType; };
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	ADV_CHECK_INTERFACE(ISpanConvertible, ISpanConvertible);
	namespace $vtables {
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_IMutableSpanConvertible : public ISpanConvertible::$vtable
		{
			
		};
	}
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IMutableSpanConvertible $vtable_IMutableSpanConvertible_for = {$vtable_ISpanConvertible_for<__AnyType>
		};
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_IMutableSpanConvertible = $ImplementsInterface_ISpanConvertible<__AnyType> && $HasAssociatedType_d9e004e898fa60a8<__AnyType>;
	#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	class IMutableSpanConvertible final : public Builtin::InterfaceRef {
		public: using $self = IMutableSpanConvertible;
		public: using $vtable = $vtables::$vtable_IMutableSpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef;
		private: friend class IMutableSpanConvertible$Unowned;
		friend class IMutableSpanConvertible$Weak;
		public: using $strong_ref = $self;
		public: using $unowned_ref = IMutableSpanConvertible$Unowned;
		public: using $weak_ref = IMutableSpanConvertible$Weak;
		public: template<class __AnyType> static constexpr bool $ImplementsInterface = $ImplementsInterface_IMutableSpanConvertible<__AnyType>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IMutableSpanConvertible);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMutableSpanConvertible(__AnyType&& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMutableSpanConvertible& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IMutableSpanConvertible(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IMutableSpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IMutableSpanConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IMutableSpanConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMutableSpanConvertible(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			static_assert($ImplementsInterface_IMutableSpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IMutableSpanConvertible from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IMutableSpanConvertible_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IMutableSpanConvertible(__AnyType&& value) : $super((Builtin::Object*)&value), _vtable{ &$vtable_IMutableSpanConvertible_for<__FixedType> } { static_assert($ImplementsInterface_IMutableSpanConvertible<__FixedType>, "Cannot initialize interface IMutableSpanConvertible from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IMutableSpanConvertible& operator=(const __AnyType& value) {
			static_assert($ImplementsInterface_IMutableSpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IMutableSpanConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IMutableSpanConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMutableSpanConvertible& operator=(__AnyType&& value) {
			static_assert($ImplementsInterface_IMutableSpanConvertible<std::decay_t<__AnyType>>,"Cannot initialize interface IMutableSpanConvertible from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::$class))) typename std::remove_cvref_t<__AnyType>::$class(value);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &$vtable_IMutableSpanConvertible_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::$self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IMutableSpanConvertible& operator=(__AnyType&& value) { static_assert($ImplementsInterface_IMutableSpanConvertible<__FixedType>, "Cannot initialize interface IMutableSpanConvertible from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &$vtable_IMutableSpanConvertible_for<__FixedType>; return *this; }
		
	};
	class IMutableSpanConvertible$Unowned final : public Builtin::InterfaceRef$Unowned {
		public: using $self = IMutableSpanConvertible$Unowned;
		public: using $vtable = $vtables::$vtable_IMutableSpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::InterfaceRef$Unowned;
		private: friend class IMutableSpanConvertible;
		public: using $strong_ref = IMutableSpanConvertible;
		public: using $unowned_ref = $self;
		public: using $weak_ref = IMutableSpanConvertible$Weak;
		public: FORCE_INLINE decltype(auto) $ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) $ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IMutableSpanConvertible$Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible$Unowned(const __AnyType& value) : $super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible$Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> IMutableSpanConvertible$Unowned(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMutableSpanConvertible$Unowned(__AnyType&& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> IMutableSpanConvertible$Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMutableSpanConvertible$Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef$Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IMutableSpanConvertible$Weak final : public Builtin::ObjectRef$Weak {
		public: using $self = IMutableSpanConvertible$Weak;
		public: using $vtable = $vtables::$vtable_IMutableSpanConvertible;
		public: using $class = Builtin::Object;
		public: using $super = Builtin::ObjectRef$Weak;
		private: friend class IMutableSpanConvertible;
		public: using $strong_ref = IMutableSpanConvertible;
		public: using $unowned_ref = IMutableSpanConvertible$Unowned;
		public: using $weak_ref = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: const $vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IMutableSpanConvertible$Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible$Weak(const __AnyType& value) : $super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::$vtable, $vtable>
		IMutableSpanConvertible$Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> IMutableSpanConvertible$Weak(const __AnyType& value) : $super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires $ImplementsInterface_IMutableSpanConvertible<__AnyType> IMutableSpanConvertible$Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<$vtable,typename std::remove_cvref_t<__AnyType>::$vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &$vtable_IMutableSpanConvertible_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	
		} namespace $extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_836_TLeft = TLeft;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right, TComparer compare)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> inline auto _operator_lt_eq_gt_mul(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto Split(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAny(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	} namespace System{
using $extensions::CopyTo;
using $extensions::BinarySearch;
using $extensions::BinarySearch;
using $extensions::Mismatch;
using $extensions::Mismatch;
using $extensions::IndexOf;
using $extensions::IndexOf;
using $extensions::IndexOfAny;
using $extensions::ContainsAny;
using $extensions::IndexOfAny;
using $extensions::ContainsAny;
using $extensions::IndexOfAny;
using $extensions::ContainsAny;
using $extensions::IndexOfAny;
using $extensions::ContainsAny;
using $extensions::IndexOfAnyExcept;
using $extensions::ContainsAnyExcept;
using $extensions::IndexOfAnyExcept;
using $extensions::ContainsAnyExcept;
using $extensions::IndexOfAnyExcept;
using $extensions::ContainsAnyExcept;
using $extensions::IndexOfAnyExcept;
using $extensions::ContainsAnyExcept;
using $extensions::LastIndexOf;
using $extensions::LastIndexOf;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAnyExcept;
using $extensions::LastIndexOfAnyExcept;
using $extensions::LastIndexOfAnyExcept;
using $extensions::LastIndexOfAnyExcept;
using $extensions::CountAny;
using $extensions::CountAny;
using $extensions::StartsWith;
using $extensions::StartsWith;
using $extensions::EndsWith;
using $extensions::EndsWith;
using $extensions::SequenceCompare;
using $extensions::SequenceCompare;
using $extensions::_operator_lt_eq_gt_mul;
using $extensions::Split;
using $extensions::SplitAny;

		} namespace $extensions { using namespace System;
#line 2212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_2212_TLeft = TLeft;
	#line 2215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Sort(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto SortByDescending(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Sort(TLeft&& $this , TRight&& right)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Sort(TLeft&& $this , TRight&& val, TComparer compare)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	} namespace System{
using $extensions::MoveTo;
using $extensions::Replace;
using $extensions::Replace;
using $extensions::Fill;
using $extensions::Reverse;
using $extensions::Sort;
using $extensions::SortByDescending;
using $extensions::Sort;
using $extensions::Sort;

	namespace __Span$Protected { 
		#line 2405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct SpanHelpers : public Builtin::StaticClass {
			public: using $self = SpanHelpers;
			private: SpanHelpers() = default;
			#line 2406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool;
			#line 2451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool;
			#line 2464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool;
			#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool;
			#line 2490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool;
			#line 2503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize;
			#line 2513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize;
			#line 2526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize;
			#line 2539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize;
			#line 2552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize;
			#line 2565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
			#line 2613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void;
			#line 4663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceByte(System::MutableSpan<Builtin::u8> buf, Builtin::u8 oldValue, Builtin::u8 newValue)  -> void;
			#line 4676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceWord(System::MutableSpan<Builtin::u16> buf, Builtin::u16 oldValue, Builtin::u16 newValue)  -> void;
			#line 4689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceDword(System::MutableSpan<Builtin::u32> buf, Builtin::u32 oldValue, Builtin::u32 newValue)  -> void;
			#line 4702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceQword(System::MutableSpan<Builtin::u64> buf, Builtin::u64 oldValue, Builtin::u64 newValue)  -> void;
			#line 4715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
			#line 4760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool;
			#line 4773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool;
			#line 4786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool;
			#line 4799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool;
			#line 4812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceCompareGeneralCase(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 4822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceCompareByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 4834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceCompareWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 4846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReverseGeneralCase(System::MutableSpan<T> buf)  -> void;
			#line 4859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseBytes(System::MutableSpan<Builtin::u8> buf)  -> void;
			#line 4872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseWords(System::MutableSpan<Builtin::u16> buf)  -> void;
			#line 4885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseDwords(System::MutableSpan<Builtin::u32> buf)  -> void;
			#line 4898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseQwords(System::MutableSpan<Builtin::u64> buf)  -> void;
			#line 4911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimStartCount(System::Span<T> span, const T& val)  -> const Builtin::usize;
			#line 4923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimStartCount(System::Span<T> span, System::Span<T> vals)  -> const Builtin::usize;
			#line 4935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimEndCount(System::Span<T> span, const T& val, Builtin::usize start)  -> const Builtin::usize;
			#line 4947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimEndCount(System::Span<T> span, System::Span<T> vals, Builtin::usize start)  -> const Builtin::usize;
			#line 4959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto Sort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 4963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class TKey, class TValue> static auto Sort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 4967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto IntroSort(System::MutableSpan<T> buf, Builtin::usize depthLimit, Comparator<T> compare)  -> void;
			#line 4997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto PickPivotAndPartition(System::MutableSpan<T> buf, Comparator<T> compare)  -> const Builtin::usize;
			#line 5022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto InsertionSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 5036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto HeapSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 5047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto HeapDown(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize n, Comparator<T> compare)  -> void;
			#line 5063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto SwapIfGreater(System::MutableSpan<T> buf, Comparator<T> compare, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto Swap(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto IntroSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize depthLimit, Comparator<TKey> compare)  -> void;
			#line 5109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto PickPivotAndPartition(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> const Builtin::usize;
			#line 5134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto InsertionSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 5151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto HeapSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 5162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto HeapDown(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize n, Comparator<TKey> compare)  -> void;
			#line 5181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto SwapIfGreater(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto Swap(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize j)  -> void;
			
		};
		
	}
	} namespace $extensions {
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_ContainsQword;
template<class __TT> struct $static_getContainsQword;
template<class __TT> struct $static_GetLength;
template<class __TT> struct $static_getGetLength;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_End;
template<class __TT> struct $static_getEnd;
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_SortByDescending;
template<class __TT> struct $static_getSortByDescending;
template<class __TT> struct $static_IndexOfDword;
template<class __TT> struct $static_getIndexOfDword;
template<class __TT> struct $static__length;
template<class __TT> struct $static_get_length;
template<class __TT> struct $static_SequenceEqualsGeneralCase;
template<class __TT> struct $static_getSequenceEqualsGeneralCase;
template<class __TT> struct $static_AreSame;
template<class __TT> struct $static_getAreSame;
template<class __TT> struct $static__data;
template<class __TT> struct $static_get_data;
template<class __TT> struct $static_IsEmpty;
template<class __TT> struct $static_getIsEmpty;
template<class __TT> struct $static_NarrowToUsize;
template<class __TT> struct $static_getNarrowToUsize;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_ContainsByte;
template<class __TT> struct $static_getContainsByte;
template<class __TT> struct $static_Contains;
template<class __TT> struct $static_getContains;
template<class __TT> struct $static_ContainsWord;
template<class __TT> struct $static_getContainsWord;
template<class __TT> struct $static_LastIndexOfAnyWord;
template<class __TT> struct $static_getLastIndexOfAnyWord;
template<class __TT> struct $static_size;
template<class __TT> struct $static_getsize;
template<class __TT> struct $static_ContainsDword;
template<class __TT> struct $static_getContainsDword;
template<class __TT> struct $static_IndexOfAnyInRangeWord;
template<class __TT> struct $static_getIndexOfAnyInRangeWord;
template<class __TT> struct $static_StartsWith;
template<class __TT> struct $static_getStartsWith;
template<class __TT> struct $static_ContainsGeneralCase;
template<class __TT> struct $static_getContainsGeneralCase;
template<class __TT> struct $static_Min;
template<class __TT> struct $static_getMin;
template<class __TT> struct $static_CountBytes;
template<class __TT> struct $static_getCountBytes;
template<class __TT> struct $static_ReplaceDword;
template<class __TT> struct $static_getReplaceDword;
template<class __TT> struct $static_GetStart;
template<class __TT> struct $static_getGetStart;
template<class __TT> struct $static_CountWords;
template<class __TT> struct $static_getCountWords;
template<class __TT> struct $static_SequenceEquals;
template<class __TT> struct $static_getSequenceEquals;
template<class __TT> struct $static_CountDwords;
template<class __TT> struct $static_getCountDwords;
template<class __TT> struct $static_IndexOfAny;
template<class __TT> struct $static_getIndexOfAny;
template<class __TT> struct $static_IndexOfAnyInRangeDword;
template<class __TT> struct $static_getIndexOfAnyInRangeDword;
template<class __TT> struct $static_CountQwords;
template<class __TT> struct $static_getCountQwords;
template<class __TT> struct $static_IndexOfAnyInRangeGeneralCase;
template<class __TT> struct $static_getIndexOfAnyInRangeGeneralCase;
template<class __TT> struct $static_CountGeneralCase;
template<class __TT> struct $static_getCountGeneralCase;
template<class __TT> struct $static_IndexOfAnyInRangeByte;
template<class __TT> struct $static_getIndexOfAnyInRangeByte;
template<class __TT> struct $static_IndexOf;
template<class __TT> struct $static_getIndexOf;
template<class __TT> struct $static_IndexOfAnyInRangeQword;
template<class __TT> struct $static_getIndexOfAnyInRangeQword;
template<class __TT> struct $static_IndexOfInternal;
template<class __TT> struct $static_getIndexOfInternal;
template<class __TT> struct $static_SequenceEqualsByte;
template<class __TT> struct $static_getSequenceEqualsByte;
template<class __TT> struct $static_SequenceEqualsWord;
template<class __TT> struct $static_getSequenceEqualsWord;
template<class __TT> struct $static_SequenceEqualsDword;
template<class __TT> struct $static_getSequenceEqualsDword;
template<class __TT> struct $static_SequenceEqualsQword;
template<class __TT> struct $static_getSequenceEqualsQword;
template<class __TT> struct $static_IndexOfGeneralCase;
template<class __TT> struct $static_getIndexOfGeneralCase;
template<class __TT> struct $static_TrimStartCount;
template<class __TT> struct $static_getTrimStartCount;
template<class __TT> struct $static_IndexOfWord;
template<class __TT> struct $static_getIndexOfWord;
template<class __TT> struct $static_TrimEndCount;
template<class __TT> struct $static_getTrimEndCount;
template<class __TT> struct $static_IndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_CopyBlock;
template<class __TT> struct $static_getCopyBlock;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_AsSpan;
template<class __TT> struct $static_getAsSpan;
template<class __TT> struct $static_IndexOfAnyGeneralCase;
template<class __TT> struct $static_getIndexOfAnyGeneralCase;
template<class __TT> struct $static_IndexOfByte;
template<class __TT> struct $static_getIndexOfByte;
template<class __TT> struct $static_Count;
template<class __TT> struct $static_getCount;
template<class __TT> struct $static_AsBytes;
template<class __TT> struct $static_getAsBytes;
template<class __TT> struct $static_InitBlock;
template<class __TT> struct $static_getInitBlock;
template<class __TT> struct $static_BinarySearch;
template<class __TT> struct $static_getBinarySearch;
template<class __TT> struct $static_IndexOfAnyExceptWord;
template<class __TT> struct $static_getIndexOfAnyExceptWord;
template<class __TT> struct $static_Mismatch;
template<class __TT> struct $static_getMismatch;
template<class __TT> struct $static_IndexOfQword;
template<class __TT> struct $static_getIndexOfQword;
template<class __TT> struct $static_IndexOfAnyByte;
template<class __TT> struct $static_getIndexOfAnyByte;
template<class __TT> struct $static_IndexOfAnyInternal;
template<class __TT> struct $static_getIndexOfAnyInternal;
template<class __TT> struct $static_IndexOfAnyWord;
template<class __TT> struct $static_getIndexOfAnyWord;
template<class __TT> struct $static_GetEnd;
template<class __TT> struct $static_getGetEnd;
template<class __TT> struct $static_IndexOfAnyExceptGeneralCase;
template<class __TT> struct $static_getIndexOfAnyExceptGeneralCase;
template<class __TT> struct $static_IndexOfAnyExceptByte;
template<class __TT> struct $static_getIndexOfAnyExceptByte;
template<class __TT> struct $static_IndexOfAnyExceptInternal;
template<class __TT> struct $static_getIndexOfAnyExceptInternal;
template<class __TT> struct $static_IndexOfAnyExceptInRangeWord;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeWord;
template<class __TT> struct $static_ReplaceByte;
template<class __TT> struct $static_getReplaceByte;
template<class __TT> struct $static_IndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_IndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_IndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_IndexOfAnyExcept;
template<class __TT> struct $static_getIndexOfAnyExcept;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_LastIndexOfInternal;
template<class __TT> struct $static_getLastIndexOfInternal;
template<class __TT> struct $static_LastIndexOfByte;
template<class __TT> struct $static_getLastIndexOfByte;
template<class __TT> struct $static_LastIndexOfWord;
template<class __TT> struct $static_getLastIndexOfWord;
template<class __TT> struct $static_LastIndexOfDword;
template<class __TT> struct $static_getLastIndexOfDword;
template<class __TT> struct $static_LastIndexOfQword;
template<class __TT> struct $static_getLastIndexOfQword;
template<class __TT> struct $static_LastIndexOfGeneralCase;
template<class __TT> struct $static_getLastIndexOfGeneralCase;
template<class __TT> struct $static_LastIndexOf;
template<class __TT> struct $static_getLastIndexOf;
template<class __TT> struct $static_EqualsAny;
template<class __TT> struct $static_getEqualsAny;
template<class __TT> struct $static_LastIndexOfAnyByte;
template<class __TT> struct $static_getLastIndexOfAnyByte;
template<class __TT> struct $static_LastIndexOfAnyInternal;
template<class __TT> struct $static_getLastIndexOfAnyInternal;
template<class __TT> struct $static_LastIndexOfAnyInRangeByte;
template<class __TT> struct $static_getLastIndexOfAnyInRangeByte;
template<class __TT> struct $static_LastIndexOfAnyInRangeWord;
template<class __TT> struct $static_getLastIndexOfAnyInRangeWord;
template<class __TT> struct $static_LastIndexOfAnyInRangeDword;
template<class __TT> struct $static_getLastIndexOfAnyInRangeDword;
template<class __TT> struct $static_ReplaceWord;
template<class __TT> struct $static_getReplaceWord;
template<class __TT> struct $static_LastIndexOfAnyInRangeQword;
template<class __TT> struct $static_getLastIndexOfAnyInRangeQword;
template<class __TT> struct $static_LastIndexOfAnyInRangeGeneralCase;
template<class __TT> struct $static_getLastIndexOfAnyInRangeGeneralCase;
template<class __TT> struct $static_LastIndexOfAnyGeneralCase;
template<class __TT> struct $static_getLastIndexOfAnyGeneralCase;
template<class __TT> struct $static_LastIndexOfAnyExceptByte;
template<class __TT> struct $static_getLastIndexOfAnyExceptByte;
template<class __TT> struct $static_LastIndexOfAnyExceptInternal;
template<class __TT> struct $static_getLastIndexOfAnyExceptInternal;
template<class __TT> struct $static_LastIndexOfAnyExceptWord;
template<class __TT> struct $static_getLastIndexOfAnyExceptWord;
template<class __TT> struct $static_LastIndexOfAnyExceptGeneralCase;
template<class __TT> struct $static_getLastIndexOfAnyExceptGeneralCase;
template<class __TT> struct $static_LastIndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_getLastIndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_LastIndexOfAnyExceptInRangeWord;
template<class __TT> struct $static_getLastIndexOfAnyExceptInRangeWord;
template<class __TT> struct $static_LastIndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_getLastIndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_LastIndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_getLastIndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_LastIndexOfAnyExcept;
template<class __TT> struct $static_getLastIndexOfAnyExcept;
template<class __TT> struct $static_LastIndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_getLastIndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_SequenceCompareByte;
template<class __TT> struct $static_getSequenceCompareByte;
template<class __TT> struct $static_SequenceCompareWord;
template<class __TT> struct $static_getSequenceCompareWord;
template<class __TT> struct $static_SequenceCompareGeneralCase;
template<class __TT> struct $static_getSequenceCompareGeneralCase;
template<class __TT> struct $static_ReverseGeneralCase;
template<class __TT> struct $static_getReverseGeneralCase;
template<class __TT> struct $static_SequenceCompare;
template<class __TT> struct $static_getSequenceCompare;
template<class __TT> struct $static_ReplaceQword;
template<class __TT> struct $static_getReplaceQword;
template<class __TT> struct $static_ReplaceGeneralCase;
template<class __TT> struct $static_getReplaceGeneralCase;
template<class __TT> struct $static_ReverseBytes;
template<class __TT> struct $static_getReverseBytes;
template<class __TT> struct $static_ReverseWords;
template<class __TT> struct $static_getReverseWords;
template<class __TT> struct $static_ReverseDwords;
template<class __TT> struct $static_getReverseDwords;
template<class __TT> struct $static_AsMutableSpan;
template<class __TT> struct $static_getAsMutableSpan;
template<class __TT> struct $static_ReverseQwords;
template<class __TT> struct $static_getReverseQwords;
template<class __TT> struct $static_Sort;
template<class __TT> struct $static_getSort;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_NarrowToIsize;
template<class __TT> struct $static_getNarrowToIsize;
template<class __TT> struct $static_SliceUnchecked;
template<class __TT> struct $static_getSliceUnchecked;
template<class __TT> struct $static_Subtract;
template<class __TT> struct $static_getSubtract;
template<class __TT> struct $static_IsAddressLessThan;
template<class __TT> struct $static_getIsAddressLessThan;
template<class __TT> struct $static_Reversed;
template<class __TT> struct $static_getReversed;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_FirstSet;
template<class __TT> struct $static_getFirstSet;
template<class __TT> struct $static_ScalarMask;
template<class __TT> struct $static_getScalarMask;
template<class __TT> struct $static_LastSet;
template<class __TT> struct $static_getLastSet;
template<class __TT> struct $static_StoreUnsafe;
template<class __TT> struct $static_getStoreUnsafe;
template<class __TT> struct $static_EqualsAll;
template<class __TT> struct $static_getEqualsAll;
template<class __TT> struct $static_All;
template<class __TT> struct $static_getAll;
template<class __TT> struct $static_NarrowToInt32;
template<class __TT> struct $static_getNarrowToInt32;
template<class __TT> struct $static_Error;
template<class __TT> struct $static_getError;
template<class __TT> struct $static_Trim;
template<class __TT> struct $static_getTrim;
template<class __TT> struct $static_Split;
template<class __TT> struct $static_getSplit;
template<class __TT> struct $static_SplitAny;
template<class __TT> struct $static_getSplitAny;
template<class __TT> struct $static_LastIndexOfAny;
template<class __TT> struct $static_getLastIndexOfAny;
template<class __TT> struct $static_CountAny;
template<class __TT> struct $static_getCountAny;
template<class __TT> struct $static_Overlaps;
template<class __TT> struct $static_getOverlaps;
template<class __TT> struct $static_Replace;
template<class __TT> struct $static_getReplace;
template<class __TT> struct $static_Reverse;
template<class __TT> struct $static_getReverse;
template<class __TT> struct $static_Clear;
template<class __TT> struct $static_getClear;
template<class __TT> struct $static_Fill;
template<class __TT> struct $static_getFill;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(MutableSpan<T> span) noexcept :
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	Span(ADV_UFCS(GetDataReference)(span.$ref()), ADV_UPCS(Length)(span.$ref()))
	{
	}
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length)  : 
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard21{};
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(const T& data, Builtin::usize length) noexcept : 
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{data}, 
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
	}
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr Span<T>::Span(const Builtin::InlineArray<$tparam$S, T>& arr) noexcept : 
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::i32 index) const  -> const T&
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T&
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Index index) const  -> const T&
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Index index) const  -> const T& { return _operator_subscript(index); }
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Index index) const  -> const T&
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const T& { return _operator_subscript(index); }
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Get(Builtin::usize index) const  -> const Builtin::Nullable<T>
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((index <=> _length) >= 0) {
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, index);
	}
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::SliceUnchecked(Builtin::usize start) const  -> const $self
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::operator==($self other) const noexcept -> const bool
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetDataReference() const noexcept -> const Builtin::Ref<T>
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Overlaps(const $self& other) const noexcept -> const bool
	{
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)((*this).$ref()) || ADV_UPCS(IsEmpty)(other.$ref())) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(_data, other.$ref()._data).$ref()))> offset = ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(_data, other.$ref()._data).$ref()); 
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (offset <=> (_length * Builtin::usize(sizeof (T)))) < 0 || (offset <=> UnsafeCast<Builtin::usize>(-(Builtin::isize{ADV_UPCS(_length)(other.$ref()) * Builtin::usize(sizeof (T))}))) > 0;
	}
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Iterator::Iterator(Span<T> span) noexcept : 
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::Reset() noexcept -> void
	{
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrentRef() const  -> const T&
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterate() const  -> const typename Span<T>::Iterator
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::ReverseIterator::ReverseIterator(Span<T> span) noexcept : 
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{_length}
	{
	}
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::ReverseIterator::MoveNext() noexcept -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::ReverseIterator::Reset() noexcept -> void
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = _length;
	}
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::ReverseIterator::GetCurrentRef() const  -> const T&
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::UnsafeCreate(const T& data, Builtin::usize length)  -> const $self
	{
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{data, length};
	}
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Contains(const T& val) const  -> const bool
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_205 = (*this); auto $for_iter_205 = ADV_UFCS(Iterate)($for_init_205.$ref()); while($for_iter_205.$ref().MoveNext()) {
			auto&& i = $for_iter_205.$ref().GetCurrent(); {
				#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
			}}}
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		} else {
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						} else {
							#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
							} else {
								#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
								}
							}
						}
					}
				} else {
					#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsGeneralCase)((*this), val);
					}
				}
				#else
				#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsGeneralCase)((*this), val);
				#endif
			}
		}
		return {};
	}
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val, equals) != nullptr); 
	}
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val) != nullptr); 
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val, equals) != nullptr); 
	}
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize result{}; 
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_255 = (*this); auto $for_iter_255 = ADV_UFCS(Iterate)($for_init_255.$ref()); while($for_iter_255.$ref().MoveNext()) {
			auto&& i = $for_iter_255.$ref().GetCurrent(); {
				#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++result;
				}
			}}}
			#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return result;
		} else {
			#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), CountBytes)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), CountWords)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						} else {
							#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), CountDwords)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
							} else {
								#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), CountQwords)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
								}
							}
						}
					}
				} else {
					#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), CountGeneralCase)((*this), val);
					}
				}
				#else
				#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), CountGeneralCase)((*this), val);
				#endif
			}
		}
		return {};
	}
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_291 = (*this); auto $for_iter_291 = ADV_UFCS(Iterate)($for_init_291.$ref()); while($for_iter_291.$ref().MoveNext()) {
		auto&& i = $for_iter_291.$ref().GetCurrent(); {
			#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(i, val)) {
				#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++count;
			}
		}}}
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_302 = Builtin::Cast<false, std::decay_t<decltype(ADV_UPCS(Length)(val.$ref()))>::$self>(ADV_UPCS(Length)(val.$ref()));
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp__valid_302.IsValid() && Builtin::Is(*__tmp__valid_302, Builtin::u32(0U)))  {
				#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			else {
				#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_302.IsValid() && Builtin::Is(*__tmp__valid_302, Builtin::u32(1U)))  {
					#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Count(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
				}
				else {
					#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::usize count{}; 
						#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype((*this))> span = (*this); 
						#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(ADV_UFCS(IndexOf)(span.$ref(), val))> pos = ADV_UFCS(IndexOf)(span.$ref(), val); 
						#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						while (pos) 
						{
							#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							span = ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange(((*(pos)) + ADV_UPCS(Length)(val.$ref())), System::Index::End, false));
							#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							pos = ADV_UFCS(IndexOf)(span.$ref(), val);
							#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							++count;
						}
						#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return count;
					}
					
				}
			}
		}

		return {};
	}
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_321 = Builtin::Cast<false, std::decay_t<decltype(ADV_UPCS(Length)(val.$ref()))>::$self>(ADV_UPCS(Length)(val.$ref()));
			#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp__valid_321.IsValid() && Builtin::Is(*__tmp__valid_321, Builtin::u32(0U)))  {
				#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			else {
				#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_321.IsValid() && Builtin::Is(*__tmp__valid_321, Builtin::u32(1U)))  {
					#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Count(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals);
				}
				else {
					#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::usize count{}; 
						#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype((*this))> span = (*this); 
						#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(ADV_UFCS(IndexOf)(span.$ref(), val, equals))> pos = ADV_UFCS(IndexOf)(span.$ref(), val, equals); 
						#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						while (pos) 
						{
							#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							span = ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange(((*(pos)) + ADV_UPCS(Length)(val.$ref())), System::Index::End, false));
							#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							pos = ADV_UFCS(IndexOf)(span.$ref(), val, equals);
							#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							++count;
						}
						#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return count;
					}
					
				}
			}
		}

		return {};
	}
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "SequenceEquals available only for ISelfEquatable types");
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((*this) == other) {
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_length != ADV_UPCS(_length)(other.$ref())) {
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_346 = System::Range<Builtin::Auto<decltype(_length)>, false>({}, _length); auto $for_iter_346 = ADV_UFCS(Iterate)($for_init_346.$ref()); while($for_iter_346.$ref().MoveNext()) {
			auto&& i = $for_iter_346.$ref().GetCurrent(); {
				#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i)) {
					#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		} else {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
					} else {
						#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
						} else {
							#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
							} else {
								#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
								}
							}
						}
					}
				} else {
					#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsGeneralCase)((*this), other);
					}
				}
				#else
				#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsGeneralCase)((*this), other);
				#endif
			}
		}
		return {};
	}
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((*this) == other) {
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_length != ADV_UPCS(_length)(other.$ref())) {
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_386 = System::Range<Builtin::Auto<decltype(_length)>, false>({}, _length); auto $for_iter_386 = ADV_UFCS(Iterate)($for_init_386.$ref()); while($for_iter_386.$ref().MoveNext()) {
		auto&& i = $for_iter_386.$ref().GetCurrent(); {
			#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::TrimStart(const T& val) const  -> const $self
	{
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange((ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)((*this), val)), System::Index::End, false))); 
	}
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::TrimStart(System::Span<T> vals) const  -> const $self
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange(std::make_tuple(__Span$Protected::SpanHelpers, TrimStartCount((*this), vals)), System::Index::End, false))); 
	}
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::TrimEnd(const T& val) const  -> const $self
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype(std::make_tuple(__Span$Protected::SpanHelpers, TrimEndCount((*this), val, Builtin::u32(0U))))>, false>({}, std::make_tuple(__Span$Protected::SpanHelpers, TrimEndCount((*this), val, Builtin::u32(0U)))))); 
	}
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::TrimEnd(System::Span<T> vals) const  -> const $self
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype((ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), vals, Builtin::u32(0U))))>, false>({}, (ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), vals, Builtin::u32(0U)))))); 
	}
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Trim(const T& val) const  -> const $self
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)((*this), val))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)((*this), val); 
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), val, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), val, start); 
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Trim(System::Span<T> vals) const  -> const $self
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)((*this), vals))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)((*this), vals); 
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), vals, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)((*this), vals, start); 
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard445{};
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data(__data__), 
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<$tparam$S, T>> arr) noexcept : 
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Get(Builtin::usize index) const  -> const Builtin::Nullable<T>
	{
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((index <=> _length) >= 0) {
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, index);
	}
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start) const  -> const $self
	{
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::_operator_dol_eq(typename Builtin::template InitializerList<T> initializer) const  -> const $self
	{
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(size)(initializer.$ref()))> count = ADV_UFCS(size)(initializer.$ref()); 
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((_length <=> count) < 0) {
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_534 = initializer; auto $for_iter_534 = ADV_UFCS(Iterate)($for_init_534.$ref()); while($for_iter_534.$ref().MoveNext()) {
		auto&& i = $for_iter_534.$ref().GetCurrent(); {
			#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, index++) = i;
		}}}
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (*this);
	}
#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::_operator_dol_eq(System::Span<T> other) const  -> const $self
	{
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(other.$ref()._length)> count = other.$ref()._length; 
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((_length <=> count) < 0) {
			#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(_data, ADV_UPCS(_data)(other.$ref()), count * Builtin::usize(sizeof (T)));
		} else {
			#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_548 = System::Range<Builtin::Auto<decltype(count)>, false>({}, count); auto $for_iter_548 = ADV_UFCS(Iterate)($for_init_548.$ref()); while($for_iter_548.$ref().MoveNext()) {
				auto&& i = $for_iter_548.$ref().GetCurrent(); {
					#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (*this);
	}
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Overlaps(const System::Span<T>& other) const noexcept -> const bool
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)((*this).$ref()) || ADV_UPCS(IsEmpty)(other.$ref())) {
			#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> constSpan = (*this); 
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()))> offset = ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()); 
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (offset <=> (_length * Builtin::usize(sizeof (T)))) < 0 || (offset <=> UnsafeCast<Builtin::usize>(-(Builtin::isize{ADV_UPCS(_length)(other.$ref()) * Builtin::usize(sizeof (T))}))) > 0;
	}
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==($self other) const noexcept -> const bool
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::Reset() noexcept -> void
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::ReverseIterator::ReverseIterator(MutableSpan<T> span) noexcept : 
	#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{_length}
	{
	}
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::MoveNext() noexcept -> const bool
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)); 
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Reset() noexcept -> void
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = _length;
	}
#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrentRef() const  -> T&
	{
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self
	{
		T& data = __data__;
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{Builtin::MutableRef(data), length};
	}
#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Contains(const T& val) const  -> const bool
	{
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto MutableSpan<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Clear() const  -> void
	{
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), Builtin::u8(0U), _length * Builtin::usize(sizeof (T)));
		} else {
			#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_700 = (*this); auto $for_iter_700 = ADV_UFCS(Iterate)($for_init_700.$ref()); while($for_iter_700.$ref().MoveNext()) {
				auto& i = $for_iter_700.$ref().GetCurrentRef(); {
					#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = T{};
				}}}
			}
		}
	}
#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other);
	}
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other, equals);
	}
#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimStart(const T& val) const  -> const $self
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange((ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val)), System::Index::End, false))); 
	}
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimStart(System::Span<T> vals) const  -> const $self
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange((ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals)), System::Index::End, false))); 
	}
#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimEnd(const T& val) const  -> const $self
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype((ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, Builtin::u32(0U))))>, false>({}, (ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, Builtin::u32(0U)))))); 
	}
#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimEnd(System::Span<T> vals) const  -> const $self
	{
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype((ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, Builtin::u32(0U))))>, false>({}, (ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, Builtin::u32(0U)))))); 
	}
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Trim(const T& val) const  -> const $self
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val); 
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, start); 
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Trim(System::Span<T> vals) const  -> const $self
	{
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals); 
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, start); 
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, const T& separator)  : 
	#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separator{separator}
	{
	}
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, System::Span<T> separators)  : 
	#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separatorBuffer{separators}, 
	#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_isAny{Builtin::Boolean(true)}
	{
	}
#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, System::Span<T> separators, bool single) 
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((single), "single");
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_src = src;
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_separatorBuffer = separators;
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::MoveNext()  -> const bool
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Nullable<Builtin::usize> separatorIndex{}; 
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize separatorLength{}; 
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_isAny) {
			#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorIndex = ADV_UFCS(IndexOfAny)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBuffer);
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorLength = Builtin::u32(1U);
		} else {
			#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (_isBuffer) {
				#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBuffer);
				#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorLength = ADV_UPCS(Length)(_separatorBuffer.$ref());
			} else {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (_separator) {
					#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), (*(_separator)));
					#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorLength = Builtin::u32(1U);
				} else {
					#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Boolean(false);
					}
				}
			}
		}
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_startCurrent = _startNext;
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (separatorIndex) {
			#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_endCurrent = _startCurrent + (*(separatorIndex));
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_startNext = _endCurrent + separatorLength;
		} else {
			#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_endCurrent = ADV_UPCS(Length)(_src.$ref());
				#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_startNext = ADV_UPCS(Length)(_src.$ref());
				#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_separator = nullptr;
				#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isBuffer = Builtin::Boolean(false);
				#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isAny = Builtin::Boolean(false);
			}
		}
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent))); 
	}
#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::GetSource() const  -> const System::Span<T>
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_src); 
	}
#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::Iterate() const  -> const $self
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
namespace __Span$Protected {
		#line 2406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool
		{
			#line 2407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 2409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) == val) {
					#line 2421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 2427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val) {
					#line 2435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 2441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val) {
					#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
	}
namespace __Span$Protected {
		#line 2503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize
		{
			#line 2504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize count{}; 
			#line 2505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2505 = data; auto $for_iter_2505 = ADV_UFCS(Iterate)($for_init_2505.$ref()); while($for_iter_2505.$ref().MoveNext()) {
			auto&& i = $for_iter_2505.$ref().GetCurrent(); {
				#line 2506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 2507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++count;
				}
			}}}
			#line 2510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return count;
		}
	}
namespace __Span$Protected {
		#line 2613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 2629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) == val) {
					#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) == val) {
					#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) == val) {
					#line 2645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) == val) {
					#line 2649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 2668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 2672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 2747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 2748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 2749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 2750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 2753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 2754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 2755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 2756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 2759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(IndexOf)(ADV_UFCS(SliceUnchecked)(data.$ref(), index, remainingLength).$ref(), valueHead)) {
					{
						#line 2759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 2760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += relativeIndex;
					}
				} else {
					#line 2761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 2762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
				#line 2765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), index + Builtin::u32(1U), valueTailLength).$ref(), valueTail)) {
					#line 2766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 2780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2780 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_2780 = ADV_UFCS(Iterate)($for_init_2780.$ref()); while($for_iter_2780.$ref().MoveNext()) {
			auto&& i = $for_iter_2780.$ref().GetCurrent(); {
				#line 2781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 2782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2782 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_2782 = ADV_UFCS(Iterate)($for_init_2782.$ref()); while($for_iter_2782.$ref().MoveNext()) {
				auto&& j = $for_iter_2782.$ref().GetCurrent(); {
					#line 2783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 2784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
			#line 2788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2970 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_2970 = ADV_UFCS(Iterate)($for_init_2970.$ref()); while($for_iter_2970.$ref().MoveNext()) {
			auto&& i = $for_iter_2970.$ref().GetCurrent(); {
				#line 2971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 2972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 2973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 2976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3095 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_3095 = ADV_UFCS(Iterate)($for_init_3095.$ref()); while($for_iter_3095.$ref().MoveNext()) {{
			auto&& i = $for_iter_3095.$ref().GetCurrent(); {
				#line 3096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 3097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3097 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3097 = ADV_UFCS(Iterate)($for_init_3097.$ref()); while($for_iter_3097.$ref().MoveNext()) {
				auto&& j = $for_iter_3097.$ref().GetCurrent(); {
					#line 3098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 3102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			} ADV_LOOP_LABELS(outer) }}}
			#line 3104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 3119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 3123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 3127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) != val) {
					#line 3131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) != val) {
					#line 3135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) != val) {
					#line 3139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) != val) {
					#line 3143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 3158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 3162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 3166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3361 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_3361 = ADV_UFCS(Iterate)($for_init_3361.$ref()); while($for_iter_3361.$ref().MoveNext()) {
			auto&& i = $for_iter_3361.$ref().GetCurrent(); {
				#line 3362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 3363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 3367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 3646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 3650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 3654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) == val) {
					#line 3658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) == val) {
					#line 3662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) == val) {
					#line 3666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) == val) {
					#line 3670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 3685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 3689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 3693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return dataLength;
			}
			#line 3768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 3769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 3770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 3771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueTailLength == Builtin::i32(0)) {
				#line 3772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UFCS(LastIndexOf)(data.$ref(), valueHead);
			}
			#line 3775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 3778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 3779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 3780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 3781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 3784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(remainingLength)>, false>({}, remainingLength)).$ref(), valueHead)) {
					{
						#line 3784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 3785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), relativeIndex + Builtin::i32(1), valueTailLength).$ref(), valueTail)) {
							#line 3786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return relativeIndex;
						}
						#line 3788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += remainingLength - relativeIndex;
					}
				} else {
					#line 3789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 3790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
			#line 3793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 3804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 3805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3805 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3805 = ADV_UFCS(Iterate)($for_init_3805.$ref()); while($for_iter_3805.$ref().MoveNext()) {
				auto&& j = $for_iter_3805.$ref().GetCurrent(); {
					#line 3806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
			#line 3811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 3841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 3846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 3851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 3856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 3929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 3934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 3939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 3944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 3993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 3994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 3998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 4111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 4112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 4113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 4116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) {
			{
				#line 4118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 4119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_4119 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_4119 = ADV_UFCS(Iterate)($for_init_4119.$ref()); while($for_iter_4119.$ref().MoveNext()) {
				auto&& j = $for_iter_4119.$ref().GetCurrent(); {
					#line 4120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 4121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 4124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			} ADV_LOOP_LABELS(outer) }
			#line 4126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 4141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 4145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 4149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) != val) {
					#line 4153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) != val) {
					#line 4157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) != val) {
					#line 4161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) != val) {
					#line 4165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 4180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 4184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 4188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 4383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 4384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 4385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 4388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void
		{
			#line 4656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4656 = buf; auto $for_iter_4656 = ADV_UFCS(Iterate)($for_init_4656.$ref()); while($for_iter_4656.$ref().MoveNext()) {
			auto& i = $for_iter_4656.$ref().GetCurrentRef(); {
				#line 4657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == oldValue) {
					#line 4658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = newValue;
				}
			}}}
		}
	}
namespace __Span$Protected {
		#line 4715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
		{
			#line 4716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 4718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7))) {
					#line 4730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 4736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3))) {
					#line 4744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 4750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset)) {
					#line 4753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 4757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
	}
namespace __Span$Protected {
		#line 4812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceCompareGeneralCase(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 4813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4813 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_4813 = ADV_UFCS(Iterate)($for_init_4813.$ref()); while($for_iter_4813.$ref().MoveNext()) {
			auto&& i = $for_iter_4813.$ref().GetCurrent(); {
				#line 4814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i))> result = ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i); 
				#line 4815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (result != Builtin::i32(0)) {
					#line 4816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return result;
				}
			}}}
			#line 4819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UPCS(Length)(lhs.$ref()) <=> ADV_UPCS(Length)(rhs.$ref());
		}
	}
namespace __Span$Protected {
		#line 4846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReverseGeneralCase(System::MutableSpan<T> buf)  -> void
		{
			#line 4847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::u32(2U)) >= 0), "buf.Length>=2u");
			#line 4848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> first = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))); 
			#line 4849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> last = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U)))); 
			#line 4850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			do 
			#line 4850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 4851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move(first))> tmp = Builtin::Move(first); 
				#line 4852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = Builtin::Move(last);
				#line 4853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = Builtin::Move(tmp);
				#line 4854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = ADV_USFCS((Unsafe), Add)(first, Builtin::u32(1U));
				#line 4855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = ADV_USFCS((Unsafe), Subtract)(last, Builtin::u32(1U));
			} while (ADV_USFCS((Unsafe), IsAddressLessThan)(first, last));
		}
	}
namespace __Span$Protected {
		#line 4911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimStartCount(System::Span<T> span, const T& val)  -> const Builtin::usize
		{
			#line 4912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 4913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize start{}; 
			#line 4914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4914 = span; auto $for_iter_4914 = ADV_UFCS(Iterate)($for_init_4914.$ref()); while($for_iter_4914.$ref().MoveNext()) {
			auto&& i = $for_iter_4914.$ref().GetCurrent(); {
				#line 4915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i != val) {
					#line 4916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 4918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++start;
			}}}
			#line 4920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return start;
		}
	}
namespace __Span$Protected {
		#line 4923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimStartCount(System::Span<T> span, System::Span<T> vals)  -> const Builtin::usize
		{
			#line 4924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 4925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize start{}; 
			#line 4926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4926 = span; auto $for_iter_4926 = ADV_UFCS(Iterate)($for_init_4926.$ref()); while($for_iter_4926.$ref().MoveNext()) {
			auto&& i = $for_iter_4926.$ref().GetCurrent(); {
				#line 4927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(vals, i)) {
					#line 4928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 4930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++start;
			}}}
			#line 4932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return start;
		}
	}
namespace __Span$Protected {
		#line 4935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimEndCount(System::Span<T> span, const T& val, Builtin::usize start)  -> const Builtin::usize
		{
			#line 4936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 4937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> end = ADV_UPCS(Length)(span.$ref()); 
			#line 4938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4938 = ADV_UPCS(Reversed)(span.$ref()); auto $for_iter_4938 = ADV_UFCS(Iterate)($for_init_4938.$ref()); while($for_iter_4938.$ref().MoveNext()) {
			auto&& i = $for_iter_4938.$ref().GetCurrent(); {
				#line 4939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i != val) {
					#line 4940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 4942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--end;
			}}}
			#line 4944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return end - start;
		}
	}
namespace __Span$Protected {
		#line 4947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimEndCount(System::Span<T> span, System::Span<T> vals, Builtin::usize start)  -> const Builtin::usize
		{
			#line 4948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 4949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> end = ADV_UPCS(Length)(span.$ref()); 
			#line 4950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4950 = ADV_UPCS(Reversed)(span.$ref()); auto $for_iter_4950 = ADV_UFCS(Iterate)($for_init_4950.$ref()); while($for_iter_4950.$ref().MoveNext()) {
			auto&& i = $for_iter_4950.$ref().GetCurrent(); {
				#line 4951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(vals, i)) {
					#line 4952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 4954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--end;
			}}}
			#line 4956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return end - start;
		}
	}
namespace __Span$Protected {
		#line 4959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::Sort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 4960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			IntroSort(buf, (ADV_UPCS(Log2)(ADV_UPCS(Length)(buf.$ref()).$ref()) + Builtin::u32(1U)) * Builtin::u32(2U), compare);
		}
	}
namespace __Span$Protected {
		#line 4963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::Sort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 4964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			IntroSort(keys, values, (ADV_UPCS(Log2)(ADV_UPCS(Length)(keys.$ref()).$ref()) + Builtin::u32(1U)) * Builtin::u32(2U), compare);
		}
	}
namespace __Span$Protected {
		#line 4967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IntroSort(System::MutableSpan<T> buf, Builtin::usize depthLimit, Comparator<T> compare)  -> void
		{
			#line 4968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(16U))> SORT_SIZE_THRESHOLD = Builtin::u32(16U);
			#line 4969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> partitionSize = ADV_UPCS(Length)(buf.$ref()); 
			#line 4970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((partitionSize <=> Builtin::u32(1U)) > 0) 
			{
				#line 4971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((partitionSize <=> SORT_SIZE_THRESHOLD) <= 0) {
					#line 4972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(2U)) {
						#line 4973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 4974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 4976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(3U)) {
						#line 4977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 4978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(2U));
						#line 4979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(1U), Builtin::u32(2U));
						#line 4980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 4983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					InsertionSort(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 4984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 4986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (depthLimit == Builtin::i32(0)) {
					#line 4987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					HeapSort(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 4988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 4990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--depthLimit;
				#line 4991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(PickPivotAndPartition(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare))> p = PickPivotAndPartition(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare); 
				#line 4992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				IntroSort(ADV_UFCS(_operator_subscript)(buf.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), depthLimit, compare);
				#line 4993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				partitionSize = p;
			}
		}
	}
namespace __Span$Protected {
		#line 4997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::PickPivotAndPartition(System::MutableSpan<T> buf, Comparator<T> compare)  -> const Builtin::usize
		{
			#line 4998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::u32(16U)) >= 0), "buf.Length>=16u");
			#line 4999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U))> hi = ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U); 
			#line 5000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(hi >> Builtin::i32(1))> mid = hi >> Builtin::i32(1); 
			#line 5001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, Builtin::u32(0U), mid);
			#line 5002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, Builtin::u32(0U), hi);
			#line 5003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, mid, hi);
			#line 5004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, mid))> pivot = ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, mid); 
			#line 5005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Swap(buf, mid, hi - Builtin::u32(1U));
			#line 5006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize left{}; 
			#line 5007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(hi - Builtin::u32(1U))> right = hi - Builtin::u32(1U); 
			#line 5008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((left <=> right) < 0) 
			{
				#line 5009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(ADV_UFCS(_operator_subscript)(buf.$ref(), ++left), pivot) <=> Builtin::i32(0)) < 0) 
				{
					#line 5009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(pivot, ADV_UFCS(_operator_subscript)(buf.$ref(), --right)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((left <=> right) >= 0) {
					#line 5012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, left, right);
			}
			#line 5016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (left != (hi - Builtin::u32(1U))) {
				#line 5017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, left, hi - Builtin::u32(1U));
			}
			#line 5019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return left;
		}
	}
namespace __Span$Protected {
		#line 5022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::InsertionSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 5023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U))> length = ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U); 
			#line 5024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5024 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_5024 = ADV_UFCS(Iterate)($for_init_5024.$ref()); while($for_iter_5024.$ref().MoveNext()) {
			auto&& i = $for_iter_5024.$ref().GetCurrent(); {
				#line 5025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i)> j = i; 
				#line 5027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((j <=> length) < 0 && (compare(tmp, ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_sub_sub_mod)(j);
				}
				#line 5031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_add_add_mod)(j);
				#line 5032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
			}}}
		}
	}
namespace __Span$Protected {
		#line 5036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::HeapSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 5037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length >> Builtin::i32(1))> i = length >> Builtin::i32(1); (i <=> Builtin::i32(0)) > 0; --i) 
			{
				#line 5039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(buf, i, length, compare);
			}
			#line 5041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length)> i = length; (i <=> Builtin::i32(1)) > 0; --i) 
			{
				#line 5042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, Builtin::u32(0U), i - Builtin::u32(1U));
				#line 5043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(buf, Builtin::u32(1U), i - Builtin::u32(1U), compare);
			}
		}
	}
namespace __Span$Protected {
		#line 5047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::HeapDown(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize n, Comparator<T> compare)  -> void
		{
			#line 5048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U))))> tmp = Builtin::Move(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U))); 
			#line 5049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((i <=> (n >> Builtin::i32(1))) <= 0) 
			{
				#line 5050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i * Builtin::u32(2U))> child = i * Builtin::u32(2U); 
				#line 5051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((child <=> n) < 0 && (compare(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U)), ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child)) <=> Builtin::i32(0)) < 0) {
					#line 5052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++child;
				}
				#line 5054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((compare(tmp, ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))) <=> Builtin::i32(0)) >= 0) {
					#line 5055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = child;
			}
			#line 5060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmp);
		}
	}
namespace __Span$Protected {
		#line 5063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SwapIfGreater(System::MutableSpan<T> buf, Comparator<T> compare, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((compare(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) > 0) {
				#line 5066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
			}
		}
	}
namespace __Span$Protected {
		#line 5072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::Swap(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
		}
	}
namespace __Span$Protected {
		#line 5079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::IntroSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize depthLimit, Comparator<TKey> compare)  -> void
		{
			#line 5080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(16U))> SORT_SIZE_THRESHOLD = Builtin::u32(16U);
			#line 5081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()))> partitionSize = ADV_UPCS(Length)(keys.$ref()); 
			#line 5082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((partitionSize <=> Builtin::u32(1U)) > 0) 
			{
				#line 5083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((partitionSize <=> SORT_SIZE_THRESHOLD) <= 0) {
					#line 5084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(2U)) {
						#line 5085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(3U)) {
						#line 5089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(2U));
						#line 5091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(1U), Builtin::u32(2U));
						#line 5092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					InsertionSort(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (depthLimit == Builtin::i32(0)) {
					#line 5099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					HeapSort(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--depthLimit;
				#line 5103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(PickPivotAndPartition(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare))> p = PickPivotAndPartition(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare); 
				#line 5104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				IntroSort(ADV_UFCS(_operator_subscript)(keys.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), depthLimit, compare);
				#line 5105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				partitionSize = p;
			}
		}
	}
namespace __Span$Protected {
		#line 5109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::PickPivotAndPartition(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> const Builtin::usize
		{
			#line 5110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(keys.$ref()) <=> Builtin::u32(16U)) >= 0), "keys.Length>=16u");
			#line 5111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U))> hi = ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U); 
			#line 5112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(hi >> Builtin::i32(1))> mid = hi >> Builtin::i32(1); 
			#line 5113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, Builtin::u32(0U), mid);
			#line 5114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, Builtin::u32(0U), hi);
			#line 5115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, mid, hi);
			#line 5116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, mid))> pivot = ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, mid); 
			#line 5117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Swap(keys, values, mid, hi - Builtin::u32(1U));
			#line 5118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize left{}; 
			#line 5119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(hi - Builtin::u32(1U))> right = hi - Builtin::u32(1U); 
			#line 5120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((left <=> right) < 0) 
			{
				#line 5121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(ADV_UFCS(_operator_subscript)(keys.$ref(), ++left), pivot) <=> Builtin::i32(0)) < 0) 
				{
					#line 5121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(pivot, ADV_UFCS(_operator_subscript)(keys.$ref(), --right)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((left <=> right) >= 0) {
					#line 5124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, left, right);
			}
			#line 5128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (left != (hi - Builtin::u32(1U))) {
				#line 5129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, left, hi - Builtin::u32(1U));
			}
			#line 5131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return left;
		}
	}
namespace __Span$Protected {
		#line 5134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::InsertionSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 5135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U))> length = ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U); 
			#line 5136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5136 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_5136 = ADV_UFCS(Iterate)($for_init_5136.$ref()); while($for_iter_5136.$ref().MoveNext()) {
			auto&& i = $for_iter_5136.$ref().GetCurrent(); {
				#line 5137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i)> j = i; 
				#line 5140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((j <=> length) < 0 && (compare(tmpKey, ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_sub_sub_mod)(j);
				}
				#line 5145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_add_add_mod)(j);
				#line 5146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
				#line 5147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
			}}}
		}
	}
namespace __Span$Protected {
		#line 5151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::HeapSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 5152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()))> length = ADV_UPCS(Length)(keys.$ref()); 
			#line 5153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length >> Builtin::i32(1))> i = length >> Builtin::i32(1); (i <=> Builtin::i32(0)) > 0; --i) 
			{
				#line 5154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(keys, values, i, length, compare);
			}
			#line 5156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length)> i = length; (i <=> Builtin::i32(1)) > 0; --i) 
			{
				#line 5157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, Builtin::u32(0U), i - Builtin::u32(1U));
				#line 5158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(keys, values, Builtin::u32(1U), i - Builtin::u32(1U), compare);
			}
		}
	}
namespace __Span$Protected {
		#line 5162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::HeapDown(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize n, Comparator<TKey> compare)  -> void
		{
			#line 5163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))); 
			#line 5164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))); 
			#line 5165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((i <=> (n >> Builtin::i32(1))) <= 0) 
			{
				#line 5166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i * Builtin::u32(2U))> child = i * Builtin::u32(2U); 
				#line 5167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((child <=> n) < 0 && (compare(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U)), ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child)) <=> Builtin::i32(0)) < 0) {
					#line 5168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++child;
				}
				#line 5170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((compare(tmpKey, ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))) <=> Builtin::i32(0)) >= 0) {
					#line 5171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = child;
			}
			#line 5177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmpKey);
			#line 5178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmpVal);
		}
	}
namespace __Span$Protected {
		#line 5181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::SwapIfGreater(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((compare(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) > 0) {
				#line 5184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
				#line 5187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
			}
		}
	}
namespace __Span$Protected {
		#line 5193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::Swap(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
			#line 5198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_418_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_418_Span<T> const & $this ) -> const Builtin::usize
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_418_Span<T> const & $this ) -> const bool
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_418_Span<T> const & $this ) -> const typename $extension_Span_418_Span<T>::ReverseIterator
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_418_Span<T>::ReverseIterator;
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_418_Span<T> const & $this ) -> const Span<Builtin::u8>
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard428{};
			#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_739_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_739_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>
	{
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_739_MutableSpan<T> const & $this ) -> const Builtin::usize
	{
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_739_MutableSpan<T> const & $this ) -> const bool
	{
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_739_MutableSpan<T> const & $this ) -> const typename $extension_Span_739_MutableSpan<T>::ReverseIterator
	{
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_739_MutableSpan<T>::ReverseIterator;
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_739_MutableSpan<T> const & $this ) -> const MutableSpan<Builtin::u8>
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard749{};
			#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_854 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_854 = ADV_UFCS(Iterate)($for_init_854.$ref()); while($for_iter_854.$ref().MoveNext()) {
				auto&& i = $for_iter_854.$ref().GetCurrent(); {
					#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Binary search available only for comparable types. Use overload with custom comparator instead.");
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(BinarySearch)($this.$ref(), std::forward<decltype(val)>(val), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (length == Builtin::i32(0)) {
			#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return TResult::Err(Builtin::u32(0U));
		}
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize lo{}; 
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(length - Builtin::i32(1))> hi = length - Builtin::i32(1); 
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((lo <=> hi) <= 0) 
		{
			#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype((hi + lo) >> Builtin::i32(1))> index = (hi + lo) >> Builtin::i32(1); 
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::i32 cmp = compare(std::forward<decltype(val)>(val), ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, index)); 
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp__valid_893 = Builtin::Cast<false, std::decay_t<decltype(cmp)>::$self>(cmp);
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_893.IsValid() && Builtin::Is(*__tmp__valid_893, Builtin::i32(0)))  {
					#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const auto& cmp = *__tmp__valid_893;
					#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				else {
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if(__tmp__valid_893.IsValid() && Builtin::IsGreater(*__tmp__valid_893, Builtin::i32(0)))  {
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						const auto& cmp = *__tmp__valid_893;
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						lo = index + Builtin::i32(1);
					}
					else {
						#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						hi = index - Builtin::i32(1);
						
					}
				}
			}

		}
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TResult::Err(lo);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::usize(sizeof (T)))> size = Builtin::usize(sizeof (T));
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size))> index = ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size); 
			#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((index <=> length) < 0 || !isSameLength) {
				#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		} else {
			#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_929 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_929 = ADV_UFCS(Iterate)($for_init_929.$ref()); while($for_iter_929.$ref().MoveNext()) {
				auto&& i = $for_iter_929.$ref().GetCurrent(); {
					#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i)) {
						#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
				#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!isSameLength) {
					#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return length;
				}
			}
		}
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_957 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_957 = ADV_UFCS(Iterate)($for_init_957.$ref()); while($for_iter_957.$ref().MoveNext()) {
		auto&& i = $for_iter_957.$ref().GetCurrent(); {
			#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!isSameLength) {
			#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return length;
		}
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(span, valSpan);
		} else {
			#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::usize index{}; 
					#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_990 = span; auto $for_iter_990 = ADV_UFCS(Iterate)($for_init_990.$ref()); while($for_iter_990.$ref().MoveNext()) {
					auto&& i = $for_iter_990.$ref().GetCurrent(); {
						#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (i == val) {
							#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return index;
						}
						#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						++index;
					}}}
					#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize totalIndex{}; 
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(IndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false));
						#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return totalIndex + pos;
						}
						#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						totalIndex += pos + Builtin::u32(1U);
					}
				} else {
					#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1056 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1056 = ADV_UFCS(Iterate)($for_init_1056.$ref()); while($for_iter_1056.$ref().MoveNext()) {
				auto&& i = $for_iter_1056.$ref().GetCurrent(); {
					#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val)) {
						#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			} else {
				#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1083 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(0))) {
							#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1083;
							return nullptr;
						}
						else {
							#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(1))) {
								#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1083;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(2))) {
									#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1083;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(3))) {
										#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1083;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(4))) {
											#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1083;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1083.IsValid() && Builtin::Is(*__tmp__valid_1083, Builtin::i32(5))) {
												#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1083;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
											}
											else {
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
												
											}
										}
									}
								}
							}
						}
					}
ADV_WARNING_POP
					();
				} else {
					#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1102 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(0))) {
								#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1102;
								return nullptr;
							}
							else {
								#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(1))) {
									#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1102;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(2))) {
										#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1102;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(3))) {
											#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1102;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(4))) {
												#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1102;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1102.IsValid() && Builtin::Is(*__tmp__valid_1102, Builtin::i32(5))) {
													#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1102;
													return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
												}
												else {
													return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
													
												}
											}
										}
									}
								}
							}
						}
ADV_WARNING_POP
						();
					}
				}
			}
			#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
		} else {
			#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1168 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1168 = ADV_UFCS(Iterate)($for_init_1168.$ref()); while($for_iter_1168.$ref().MoveNext()) {
			auto&& i = $for_iter_1168.$ref().GetCurrent(); {
				#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1169 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1169 = ADV_UFCS(Iterate)($for_init_1169.$ref()); while($for_iter_1169.$ref().MoveNext()) {
				auto&& j = $for_iter_1169.$ref().GetCurrent(); {
					#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
		} else {
			#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1211 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1211 = ADV_UFCS(Iterate)($for_init_1211.$ref()); while($for_iter_1211.$ref().MoveNext()) {
			auto&& i = $for_iter_1211.$ref().GetCurrent(); {
				#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1259 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1259 = ADV_UFCS(Iterate)($for_init_1259.$ref()); while($for_iter_1259.$ref().MoveNext()) {
		auto&& i = $for_iter_1259.$ref().GetCurrent(); {
			#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1286 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(0))) {
							#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1286;
							return nullptr;
						}
						else {
							#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(1))) {
								#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1286;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(2))) {
									#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1286;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(3))) {
										#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1286;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(4))) {
											#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1286;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1286.IsValid() && Builtin::Is(*__tmp__valid_1286, Builtin::i32(5))) {
												#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1286;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
											}
											else {
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
												
											}
										}
									}
								}
							}
						}
					}
ADV_WARNING_POP
					();
				} else {
					#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1305 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(0))) {
								#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1305;
								return nullptr;
							}
							else {
								#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(1))) {
									#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1305;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(2))) {
										#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1305;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(3))) {
											#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1305;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(4))) {
												#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1305;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1305.IsValid() && Builtin::Is(*__tmp__valid_1305, Builtin::i32(5))) {
													#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1305;
													return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
												}
												else {
													return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
													
												}
											}
										}
									}
								}
							}
						}
ADV_WARNING_POP
						();
					}
				}
			}
			#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1386 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1386 = ADV_UFCS(Iterate)($for_init_1386.$ref()); while($for_iter_1386.$ref().MoveNext()) {{
				auto&& i = $for_iter_1386.$ref().GetCurrent(); {
					#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1387 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1387 = ADV_UFCS(Iterate)($for_init_1387.$ref()); while($for_iter_1387.$ref().MoveNext()) {
					auto&& j = $for_iter_1387.$ref().GetCurrent(); {
						#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				} ADV_LOOP_LABELS(outer) }}}
			} else {
				#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1396 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1396 = ADV_UFCS(Iterate)($for_init_1396.$ref()); while($for_iter_1396.$ref().MoveNext()) {
					auto&& i = $for_iter_1396.$ref().GetCurrent(); {
						#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val1)) {
							#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return i;
						}
					}}}
				}
			}
		} else {
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1439 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1439 = ADV_UFCS(Iterate)($for_init_1439.$ref()); while($for_iter_1439.$ref().MoveNext()) {
			auto&& i = $for_iter_1439.$ref().GetCurrent(); {
				#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1487 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1487 = ADV_UFCS(Iterate)($for_init_1487.$ref()); while($for_iter_1487.$ref().MoveNext()) {
		auto&& i = $for_iter_1487.$ref().GetCurrent(); {
			#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(span, valSpan);
		} else {
			#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)) == val) {
							#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
					#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UPCS(Length)(span.$ref());
			}
			#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(LastIndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return pos;
						}
						#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(pos)>, false>({}, pos));
					}
				} else {
					#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
				{
					#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val)) {
						#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}
			} else {
				#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1611 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(0))) {
							#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1611;
							return nullptr;
						}
						else {
							#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(1))) {
								#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1611;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(2))) {
									#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1611;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(3))) {
										#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1611;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(4))) {
											#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1611;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1611.IsValid() && Builtin::Is(*__tmp__valid_1611, Builtin::i32(5))) {
												#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1611;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
											}
											else {
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInternal)(span, values);
												
											}
										}
									}
								}
							}
						}
					}
ADV_WARNING_POP
					();
				} else {
					#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1630 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(0))) {
								#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1630;
								return nullptr;
							}
							else {
								#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(1))) {
									#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1630;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(2))) {
										#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1630;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(3))) {
											#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1630;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(4))) {
												#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1630;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1630.IsValid() && Builtin::Is(*__tmp__valid_1630, Builtin::i32(5))) {
													#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1630;
													return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
												}
												else {
													return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInternal)(span, values);
													
												}
											}
										}
									}
								}
							}
						}
ADV_WARNING_POP
						();
					}
				}
			}
			#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInternal)(span, values);
		} else {
			#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1695 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1695 = ADV_UFCS(Iterate)($for_init_1695.$ref()); while($for_iter_1695.$ref().MoveNext()) {
				auto&& j = $for_iter_1695.$ref().GetCurrent(); {
					#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
		} else {
			#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1804 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(0))) {
							#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1804;
							return nullptr;
						}
						else {
							#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(1))) {
								#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1804;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(2))) {
									#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1804;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(3))) {
										#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1804;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(4))) {
											#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1804;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1804.IsValid() && Builtin::Is(*__tmp__valid_1804, Builtin::i32(5))) {
												#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1804;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
											}
											else {
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInternal)(span, values);
												
											}
										}
									}
								}
							}
						}
					}
ADV_WARNING_POP
					();
				} else {
					#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1823 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(0))) {
								#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1823;
								return nullptr;
							}
							else {
								#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(1))) {
									#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1823;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(2))) {
										#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1823;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(3))) {
											#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1823;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(4))) {
												#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1823;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1823.IsValid() && Builtin::Is(*__tmp__valid_1823, Builtin::i32(5))) {
													#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1823;
													return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(4))));
												}
												else {
													return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInternal)(span, values);
													
												}
											}
										}
									}
								}
							}
						}
ADV_WARNING_POP
						();
					}
				}
			}
			#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) {
				{
					#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1902 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1902 = ADV_UFCS(Iterate)($for_init_1902.$ref()); while($for_iter_1902.$ref().MoveNext()) {
					auto&& j = $for_iter_1902.$ref().GetCurrent(); {
						#line 1903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				} ADV_LOOP_LABELS(outer) }
			} else {
				#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val1)) {
							#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
				}
			}
		} else {
			#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 2002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values); 
		#line 2017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 2018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values);
		}
		#line 2022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparer, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 2035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values, equals))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals); 
		#line 2037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 2038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals);
		}
		#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan);
				}
			}
		} else {
			#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) == val;
			} else {
				#line 2062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan, equals);
		} else {
			#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), val);
			} else {
				#line 2081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 2097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> spanLength) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan);
				}
			}
		} else {
			#line 2103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == val;
			} else {
				#line 2105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 2122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan, equals);
		} else {
			#line 2123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))), val);
			} else {
				#line 2125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search available only for ISelfComparable types");
		#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> leftSpan = $this; 
		#line 2139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> rightSpan = right; 
		#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_USFCS((Unsafe), AreSame)(ADV_UFCS(GetDataReference)(leftSpan.$ref()), ADV_UFCS(GetDataReference)(rightSpan.$ref()))) {
			#line 2141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref());
		}
		#line 2143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype((ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()))> length = (ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()); 
		#line 2144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported) {
			#line 2146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::u8>()) {
				#line 2147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareByte)(leftSpan, rightSpan, length);
			} else {
				#line 2148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::u16>()) {
					#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareWord)(leftSpan, rightSpan, length);
				}
			}
		}
		#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareGeneralCase)(leftSpan, rightSpan, length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right, TComparer compare)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparer, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 2162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> leftSpan = $this; 
		#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> rightSpan = right; 
		#line 2166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype((ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()))> length = (ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()); 
		#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2167 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_2167 = ADV_UFCS(Iterate)($for_init_2167.$ref()); while($for_iter_2167.$ref().MoveNext()) {
		auto&& i = $for_iter_2167.$ref().GetCurrent(); {
			#line 2168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(compare(ADV_UFCS(_operator_subscript)(leftSpan.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(rightSpan.$ref(), Builtin::UncheckedTag{}, i)))> result = compare(ADV_UFCS(_operator_subscript)(leftSpan.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(rightSpan.$ref(), Builtin::UncheckedTag{}, i)); 
			#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (result != Builtin::i32(0)) {
				#line 2170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return result;
			}
		}}}
		#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> inline auto _operator_lt_eq_gt_mul(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(SequenceCompare)($this.$ref(), std::forward<decltype(right)>(right))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto Split(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TRightReal, ISpanConvertible>()) {
			#line 2187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
			#line 2188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> separators = right; 
			#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Spliterator<T>{src, separators, Builtin::Boolean(true)};
		} else {
			#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TRightReal, T>) {
				#line 2191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Spliterator<T>{src, right};
			} else {
				#line 2192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "Type TRight should be T or array-like type");
				}
			}
		}
		#line 2195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Spliterator<T>{};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAny(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be an array-like type");
		#line 2205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> separators = right; 
		#line 2208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Spliterator<T>{src, separators};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 2215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 2218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 2221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> src = $this; 
		#line 2222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 2224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 2229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2230 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_2230 = ADV_UFCS(Iterate)($for_init_2230.$ref()); while($for_iter_2230.$ref().MoveNext()) {
				auto&& i = $for_iter_2230.$ref().GetCurrent(); {
					#line 2231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i)));
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Replace available only for ISelfEquatable types");
		#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		#if ADV_VERSION_X86 || ADV_VERSION_ARM
		#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 2248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceByte)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(newValue));
			} else {
				#line 2251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceWord)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(newValue));
				} else {
					#line 2254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceDword)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(newValue));
					} else {
						#line 2257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceQword)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(newValue));
						}
					}
				}
			}
		} else {
			#line 2261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
			}
		}
		#else
		#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
		#endif
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValue, T>, "ElementType mismatch");
		#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2279 = buf; auto $for_iter_2279 = ADV_UFCS(Iterate)($for_init_2279.$ref()); while($for_iter_2279.$ref().MoveNext()) {
		auto& i = $for_iter_2279.$ref().GetCurrentRef(); {
			#line 2280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(i, oldValue)) {
				#line 2281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = newValue;
			}
		}}}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T> && Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
			#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val), ADV_UPCS(Length)(buf.$ref()));
		} else {
			#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2296 = buf; auto $for_iter_2296 = ADV_UFCS(Iterate)($for_init_2296.$ref()); while($for_iter_2296.$ref().MoveNext()) {
				auto& i = $for_iter_2296.$ref().GetCurrentRef(); {
					#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = val;
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(2U)) < 0) {
			#line 2309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsTriviallyCopyable<T>) {
			#line 2314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_USFCS((__Span$Protected::SpanHelpers), ReverseBytes)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
				#line 2316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ;
			} else {
				#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((__Span$Protected::SpanHelpers), ReverseWords)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
					#line 2319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				} else {
					#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((__Span$Protected::SpanHelpers), ReverseDwords)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
						#line 2322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					} else {
						#line 2323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS((__Span$Protected::SpanHelpers), ReverseQwords)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
							#line 2325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ;
						}
					}
				}
			}
		}
		#line 2329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_USFCS((__Span$Protected::SpanHelpers), ReverseGeneralCase)(buf);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Sort(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Sort available only for ISelfComparable types");
		#line 2337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(Sort)($this.$ref(), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto SortByDescending(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Sort available only for ISelfComparable types");
		#line 2345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(Sort)($this.$ref(), DefaultDescendingComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Sort(TLeft&& $this , TRight&& right)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::i32(2)) < 0) {
			#line 2357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TRightReal, IMutableSpanConvertible>()) {
			#line 2360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			using TKey = T;
			#line 2361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			using TValue = typename TRightReal::ElementType;
			#line 2362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<TKey, ISelfComparable>(), "Sort available only for ISelfComparable types");
			#line 2363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UFCS(Sort)($this.$ref(), std::forward<decltype(right)>(right), DefaultComparator);
		} else {
			#line 2364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TRightReal, Comparator<T>>) {
				#line 2365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				try 
				{
					#line 2366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((__Span$Protected::SpanHelpers), Sort)(buf, right);
				} catch (const typename Builtin::IndexOutOfRangeException& e) 
				{
					#line 2368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Throw(Builtin::InvalidArgumentException{});
				} catch (...) 
				{
					#line 2370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Throw(Builtin::InvalidOperationException{});
				}
			} else {
				#line 2372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TRight should be Comparator<T> or mutable array-like type");
				}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Sort(TLeft&& $this , TRight&& val, TComparer compare)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, IMutableSpanConvertible>(), "TRight should be a mutable array-like type");
		#line 2384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TKey = typename TLeftReal::ElementType;
		#line 2385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValue = typename TRightReal::ElementType;
		#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<TKey>>, "TComparer should be Comparator<T>");
		#line 2387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<TKey> keys = $this; 
		#line 2388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<TValue> values = val; 
		#line 2389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(keys.$ref()) <=> Builtin::i32(2)) < 0) {
			#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(Length)(keys.$ref()) != ADV_UPCS(Length)(values.$ref())) {
			#line 2393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		try 
		{
			#line 2396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((__Span$Protected::SpanHelpers), Sort)(keys, values, compare);
		} catch (const typename Builtin::IndexOutOfRangeException& e) 
		{
			#line 2398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		} catch (...) 
		{
			#line 2400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
namespace __Span$Protected {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		
	}

}