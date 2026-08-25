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
template<class T> class ReverseSpliterator;
template<class T> class SlidingIterator;
template<class T> class ChunkIterator;
template<class T> class ReverseChunkIterator;
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
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SplitAt(Builtin::usize splitIndex) const  -> const std::tuple<$self, $self>;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_423_Span = Span<T>;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_423_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_423_Span<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_423_Span<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_423_Span<T> const& $this ) -> const Builtin::usize;
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_423_Span<T> const& $this ) -> const bool;
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_423_Span<T> const& $this ) -> const typename $extension_Span_423_Span<T>::ReverseIterator;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_423_Span<T> const& $this ) -> const Span<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using $self = MutableSpan<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: Iterator() = default;
			#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		public: 
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] ReverseIterator final : public Builtin::RefStruct {
			public: using $self = ReverseIterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: ReverseIterator() = default;
			#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr explicit ReverseIterator(MutableSpan<T> span) noexcept;
			#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using SpanType = Span<T>;
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using MutableSpanType = $self;
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ImmutableType = Span<T>;
		public: MutableSpan() = default;
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Get(Builtin::usize index) const  -> const Builtin::Nullable<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start) const  -> const $self;
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto _operator_dol_eq(typename Builtin::template InitializerList<T> initializer) const  -> const $self;
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto _operator_dol_eq(System::Span<T> other) const  -> const $self;
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Overlaps(const System::Span<T>& other) const noexcept -> const bool;
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self;
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val) const  -> const bool;
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Clear() const  -> void;
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(const T& val) const  -> const $self;
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimStart(System::Span<T> vals) const  -> const $self;
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(const T& val) const  -> const $self;
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto TrimEnd(System::Span<T> vals) const  -> const $self;
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(const T& val) const  -> const $self;
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Trim(System::Span<T> vals) const  -> const $self;
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SplitAt(Builtin::usize splitIndex) const  -> const std::tuple<$self, $self>;
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::MutableRef<T> _data;
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_749_MutableSpan = MutableSpan<T>;
	#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_749_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_749_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_749_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_749_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>;
	template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_749_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_749_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } 
	#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_749_MutableSpan<T> const& $this ) -> const Builtin::usize;
	#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_749_MutableSpan<T> const& $this ) -> const bool;
	#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_749_MutableSpan<T> const& $this ) -> const typename $extension_Span_749_MutableSpan<T>::ReverseIterator;
	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_749_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] Spliterator final : public Builtin::RefStruct {
		public: using $self = Spliterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: Spliterator() = default;
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, const T& separator) ;
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, System::Span<T> separators) ;
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr Spliterator(System::Span<T> src, System::Span<T> separators, bool single) ;
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetSource() const  -> const System::Span<T>;
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _src;
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Nullable<T> _separator;
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _separatorBuffer;
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _startCurrent;
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _endCurrent;
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _startNext;
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isBuffer{};
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isAny{};
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Type T should implement ISelfEquatable");
		
	};
	
	
	#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] ReverseSpliterator final : public Builtin::RefStruct {
		public: using $self = ReverseSpliterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: ReverseSpliterator() = default;
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr ReverseSpliterator(System::Span<T> src, const T& separator) ;
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr ReverseSpliterator(System::Span<T> src, System::Span<T> separators) ;
		#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr ReverseSpliterator(System::Span<T> src, System::Span<T> separators, bool single) ;
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetSource() const  -> const System::Span<T>;
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _src;
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Nullable<T> _separator;
		#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _separatorBuffer;
		#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _startCurrent;
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _endCurrent;
		#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _endNext;
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isBuffer{};
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: bool _isAny{};
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Type T should implement ISelfEquatable");
		
	};
	
	
	#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] SlidingIterator final : public Builtin::RefStruct {
		public: using $self = SlidingIterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: SlidingIterator() = default;
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr SlidingIterator(System::Span<T> src, Builtin::usize windowSize) ;
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetRemainingData() const  -> const System::Span<T>;
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _remaining;
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _currentWindow;
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _windowSize;
		
	};
	
	
	#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] ChunkIterator final : public Builtin::RefStruct {
		public: using $self = ChunkIterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: ChunkIterator() = default;
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr ChunkIterator(System::Span<T> src, Builtin::usize chunkSize) ;
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetRemainingData() const  -> const System::Span<T>;
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _remaining;
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _currentChunk;
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _chunkSize;
		
	};
	
	
	#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] ReverseChunkIterator final : public Builtin::RefStruct {
		public: using $self = ReverseChunkIterator<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = System::Span<T>;
		public: ReverseChunkIterator() = default;
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr ReverseChunkIterator(System::Span<T> src, Builtin::usize chunkSize) ;
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetCurrent() const  -> const System::Span<T>;
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetRemainingData() const  -> const System::Span<T>;
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _remaining;
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: System::Span<T> _currentChunk;
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _chunkSize;
		
	};
	
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::ISpanConvertible> = false;

namespace System {
	#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_2adf06fb9ba1e2e8 = requires { typename __AnyType::SpanType; };
	namespace $vtables {
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_ISpanConvertible
		{
			
		};
	}
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ISpanConvertible $vtable_ISpanConvertible_for = {};
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_ISpanConvertible = $HasAssociatedType_2adf06fb9ba1e2e8<__AnyType>;
	#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
	#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_d9e004e898fa60a8 = requires { typename __AnyType::MutableSpanType; };
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	ADV_CHECK_INTERFACE(ISpanConvertible, ISpanConvertible);
	namespace $vtables {
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_IMutableSpanConvertible : public ISpanConvertible::$vtable
		{
			
		};
	}
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IMutableSpanConvertible $vtable_IMutableSpanConvertible_for = {$vtable_ISpanConvertible_for<__AnyType>
		};
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_IMutableSpanConvertible = $ImplementsInterface_ISpanConvertible<__AnyType> && $HasAssociatedType_d9e004e898fa60a8<__AnyType>;
	#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_1027_TLeft = TLeft;
	#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right, TComparer compare)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> inline auto _operator_lt_eq_gt_mul(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto Split(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAny(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitReversed(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAnyReversed(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto Sliding(TLeft&& $this LIFETIMEBOUND, Builtin::usize windowSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto Chunks(TLeft&& $this LIFETIMEBOUND, Builtin::usize chunkSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto ChunksReversed(TLeft&& $this LIFETIMEBOUND, Builtin::usize chunkSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TComparer> auto IsSorted(TLeft&& $this LIFETIMEBOUND, TComparer&& compare)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) auto getIsSorted(TLeft&& $this ) -> const bool;
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
using $extensions::SplitReversed;
using $extensions::SplitAnyReversed;
using $extensions::Sliding;
using $extensions::Chunks;
using $extensions::ChunksReversed;
using $extensions::IsSorted;
using $extensions::getIsSorted;

		} namespace $extensions { using namespace System;
#line 2505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_2505_TLeft = TLeft;
	#line 2508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TGenerator> auto Generate(TLeft&& $this , TGenerator&& generate)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Sort(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto SortByDescending(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Sort(TLeft&& $this , TRight&& right)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Sort(TLeft&& $this , TRight&& val, TComparer compare)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto RotateLeft(TLeft&& $this , Builtin::usize mid)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto RotateRight(TLeft&& $this , Builtin::usize k)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	} namespace System{
using $extensions::MoveTo;
using $extensions::Replace;
using $extensions::Replace;
using $extensions::Fill;
using $extensions::Generate;
using $extensions::Reverse;
using $extensions::Sort;
using $extensions::SortByDescending;
using $extensions::Sort;
using $extensions::Sort;
using $extensions::RotateLeft;
using $extensions::RotateRight;

	namespace __Span$Protected { 
		#line 2738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct SpanHelpers : public Builtin::StaticClass {
			public: using $self = SpanHelpers;
			private: SpanHelpers() = default;
			#line 2739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool;
			#line 2784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool;
			#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool;
			#line 2810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool;
			#line 2823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool;
			#line 2836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize;
			#line 2846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize;
			#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize;
			#line 2872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize;
			#line 2885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize;
			#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
			#line 2946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void;
			#line 4996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceByte(System::MutableSpan<Builtin::u8> buf, Builtin::u8 oldValue, Builtin::u8 newValue)  -> void;
			#line 5009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceWord(System::MutableSpan<Builtin::u16> buf, Builtin::u16 oldValue, Builtin::u16 newValue)  -> void;
			#line 5022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceDword(System::MutableSpan<Builtin::u32> buf, Builtin::u32 oldValue, Builtin::u32 newValue)  -> void;
			#line 5035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceQword(System::MutableSpan<Builtin::u64> buf, Builtin::u64 oldValue, Builtin::u64 newValue)  -> void;
			#line 5048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
			#line 5093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool;
			#line 5106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool;
			#line 5119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool;
			#line 5132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool;
			#line 5145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceCompareGeneralCase(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 5155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceCompareByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 5167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceCompareWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs, Builtin::usize length)  -> const Builtin::i32;
			#line 5179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReverseGeneralCase(System::MutableSpan<T> buf)  -> void;
			#line 5192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseBytes(System::MutableSpan<Builtin::u8> buf)  -> void;
			#line 5205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseWords(System::MutableSpan<Builtin::u16> buf)  -> void;
			#line 5218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseDwords(System::MutableSpan<Builtin::u32> buf)  -> void;
			#line 5231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseQwords(System::MutableSpan<Builtin::u64> buf)  -> void;
			#line 5244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimStartCount(System::Span<T> span, const T& val)  -> const Builtin::usize;
			#line 5256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimStartCount(System::Span<T> span, System::Span<T> vals)  -> const Builtin::usize;
			#line 5268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimEndCount(System::Span<T> span, const T& val, Builtin::usize start)  -> const Builtin::usize;
			#line 5280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> inline constexpr static auto TrimEndCount(System::Span<T> span, System::Span<T> vals, Builtin::usize start)  -> const Builtin::usize;
			#line 5292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto Sort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 5296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class TKey, class TValue> static auto Sort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 5300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto IntroSort(System::MutableSpan<T> buf, Builtin::usize depthLimit, Comparator<T> compare)  -> void;
			#line 5330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto PickPivotAndPartition(System::MutableSpan<T> buf, Comparator<T> compare)  -> const Builtin::usize;
			#line 5355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto InsertionSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 5369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto HeapSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void;
			#line 5380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto HeapDown(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize n, Comparator<T> compare)  -> void;
			#line 5396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto SwapIfGreater(System::MutableSpan<T> buf, Comparator<T> compare, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> static auto Swap(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto IntroSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize depthLimit, Comparator<TKey> compare)  -> void;
			#line 5442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto PickPivotAndPartition(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> const Builtin::usize;
			#line 5467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto InsertionSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 5484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto HeapSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void;
			#line 5495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto HeapDown(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize n, Comparator<TKey> compare)  -> void;
			#line 5514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto SwapIfGreater(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class TKey, class TValue> static auto Swap(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize j)  -> void;
			#line 5536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto Rotate(System::MutableSpan<T> span, Builtin::usize left, Builtin::usize right)  -> void;
			
		};
		
	}
	} namespace $extensions {
template<class __TT> struct $static_ContainsQword;
template<class __TT> struct $static_getContainsQword;
template<class __TT> struct $static_GetLength;
template<class __TT> struct $static_getGetLength;
template<class __TT> struct $static_LastIndexOfAny;
template<class __TT> struct $static_getLastIndexOfAny;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_IsSorted;
template<class __TT> struct $static_getIsSorted;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_PopCount;
template<class __TT> struct $static_getPopCount;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
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
template<class __TT> struct $static_SplitReversed;
template<class __TT> struct $static_getSplitReversed;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_AsSpan;
template<class __TT> struct $static_getAsSpan;
template<class __TT> struct $static_IndexOfByte;
template<class __TT> struct $static_getIndexOfByte;
template<class __TT> struct $static_Count;
template<class __TT> struct $static_getCount;
template<class __TT> struct $static_AsBytes;
template<class __TT> struct $static_getAsBytes;
template<class __TT> struct $static_InitBlock;
template<class __TT> struct $static_getInitBlock;
template<class __TT> struct $static_LastIndexOf;
template<class __TT> struct $static_getLastIndexOf;
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
template<class __TT> struct $static_Rotate;
template<class __TT> struct $static_getRotate;
template<class __TT> struct $static_End;
template<class __TT> struct $static_getEnd;
template<class __TT> struct $static_IndexOfAnyGeneralCase;
template<class __TT> struct $static_getIndexOfAnyGeneralCase;
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
template<class __TT> struct $static_Sort;
template<class __TT> struct $static_getSort;
template<class __TT> struct $static_Sliding;
template<class __TT> struct $static_getSliding;
template<class __TT> struct $static_SliceUnchecked;
template<class __TT> struct $static_getSliceUnchecked;
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
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_NarrowToIsize;
template<class __TT> struct $static_getNarrowToIsize;
template<class __TT> struct $static_Subtract;
template<class __TT> struct $static_getSubtract;
template<class __TT> struct $static_IsAddressLessThan;
template<class __TT> struct $static_getIsAddressLessThan;
template<class __TT> struct $static_Reversed;
template<class __TT> struct $static_getReversed;
template<class __TT> struct $static_CopyBlockNonOverlapping;
template<class __TT> struct $static_getCopyBlockNonOverlapping;
template<class __TT> struct $static_SwapSequence;
template<class __TT> struct $static_getSwapSequence;
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
template<class __TT> struct $static_SplitAnyReversed;
template<class __TT> struct $static_getSplitAnyReversed;
template<class __TT> struct $static_Chunks;
template<class __TT> struct $static_getChunks;
template<class __TT> struct $static_ChunksReversed;
template<class __TT> struct $static_getChunksReversed;
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
template<class __TT> struct $static_Generate;
template<class __TT> struct $static_getGenerate;
template<class __TT> struct $static_RotateLeft;
template<class __TT> struct $static_getRotateLeft;
template<class __TT> struct $static_RotateRight;
template<class __TT> struct $static_getRotateRight;
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
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::SplitAt(Builtin::usize splitIndex) const  -> const std::tuple<$self, $self>
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return std::make_tuple(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype(splitIndex)>, false>({}, splitIndex)), ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange(splitIndex, System::Index::End, false)));
	}
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard450{};
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data(__data__), 
	#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<$tparam$S, T>> arr) noexcept : 
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Get(Builtin::usize index) const  -> const Builtin::Nullable<T>
	{
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((index <=> _length) >= 0) {
			#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, index);
	}
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start) const  -> const $self
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::_operator_dol_eq(typename Builtin::template InitializerList<T> initializer) const  -> const $self
	{
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(size)(initializer.$ref()))> count = ADV_UFCS(size)(initializer.$ref()); 
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((_length <=> count) < 0) {
			#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_539 = initializer; auto $for_iter_539 = ADV_UFCS(Iterate)($for_init_539.$ref()); while($for_iter_539.$ref().MoveNext()) {
		auto&& i = $for_iter_539.$ref().GetCurrent(); {
			#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, index++) = i;
		}}}
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (*this);
	}
#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::_operator_dol_eq(System::Span<T> other) const  -> const $self
	{
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(other.$ref()._length)> count = other.$ref()._length; 
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((_length <=> count) < 0) {
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(_data, ADV_UPCS(_data)(other.$ref()), count * Builtin::usize(sizeof (T)));
		} else {
			#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_553 = System::Range<Builtin::Auto<decltype(count)>, false>({}, count); auto $for_iter_553 = ADV_UFCS(Iterate)($for_init_553.$ref()); while($for_iter_553.$ref().MoveNext()) {
				auto&& i = $for_iter_553.$ref().GetCurrent(); {
					#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (*this);
	}
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Overlaps(const System::Span<T>& other) const noexcept -> const bool
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)((*this).$ref()) || ADV_UPCS(IsEmpty)(other.$ref())) {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> constSpan = (*this); 
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()))> offset = ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()); 
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (offset <=> (_length * Builtin::usize(sizeof (T)))) < 0 || (offset <=> UnsafeCast<Builtin::usize>(-(Builtin::isize{ADV_UPCS(_length)(other.$ref()) * Builtin::usize(sizeof (T))}))) > 0;
	}
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==($self other) const noexcept -> const bool
	{
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::Reset() noexcept -> void
	{
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::ReverseIterator::ReverseIterator(MutableSpan<T> span) noexcept : 
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{_length}
	{
	}
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::MoveNext() noexcept -> const bool
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)); 
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Reset() noexcept -> void
	{
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = _length;
	}
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrentRef() const  -> T&
	{
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self
	{
		T& data = __data__;
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{Builtin::MutableRef(data), length};
	}
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Contains(const T& val) const  -> const bool
	{
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto MutableSpan<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Clear() const  -> void
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), Builtin::u8(0U), _length * Builtin::usize(sizeof (T)));
		} else {
			#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_705 = (*this); auto $for_iter_705 = ADV_UFCS(Iterate)($for_init_705.$ref()); while($for_iter_705.$ref().MoveNext()) {
				auto& i = $for_iter_705.$ref().GetCurrentRef(); {
					#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = T{};
				}}}
			}
		}
	}
#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other);
	}
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other, equals);
	}
#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimStart(const T& val) const  -> const $self
	{
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange((ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val)), System::Index::End, false))); 
	}
#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimStart(System::Span<T> vals) const  -> const $self
	{
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange((ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals)), System::Index::End, false))); 
	}
#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimEnd(const T& val) const  -> const $self
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype((ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, Builtin::u32(0U))))>, false>({}, (ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, Builtin::u32(0U)))))); 
	}
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::TrimEnd(System::Span<T> vals) const  -> const $self
	{
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype((ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, Builtin::u32(0U))))>, false>({}, (ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, Builtin::u32(0U)))))); 
	}
#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Trim(const T& val) const  -> const $self
	{
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), val); 
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), val, start); 
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Trim(System::Span<T> vals) const  -> const $self
	{
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals))> start = ADV_USFCS((__Span$Protected::SpanHelpers), TrimStartCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals); 
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, start))> length = ADV_USFCS((__Span$Protected::SpanHelpers), TrimEndCount)(ADV_UFCS(AsSpan)((*this).$ref()), vals, start); 
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SliceUnchecked(start, length);
	}
#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SplitAt(Builtin::usize splitIndex) const  -> const std::tuple<$self, $self>
	{
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return std::make_tuple(ADV_UFCS(_operator_subscript)((*this).$ref(), System::Range<Builtin::Auto<decltype(splitIndex)>, false>({}, splitIndex)), ADV_UFCS(_operator_subscript)((*this).$ref(), System::IndexRange(splitIndex, System::Index::End, false)));
	}
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, const T& separator)  : 
	#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separator{separator}
	{
	}
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, System::Span<T> separators)  : 
	#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separatorBuffer{separators}, 
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_isAny{Builtin::Boolean(true)}
	{
	}
#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Spliterator<T>::Spliterator(System::Span<T> src, System::Span<T> separators, bool single) 
	{
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((single), "single");
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_src = src;
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_separatorBuffer = separators;
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::MoveNext()  -> const bool
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Nullable<Builtin::usize> separatorIndex{}; 
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize separatorLength{}; 
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_isAny) {
			#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorIndex = ADV_UFCS(IndexOfAny)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBuffer);
			#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorLength = Builtin::u32(1U);
		} else {
			#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (_isBuffer) {
				#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBuffer);
				#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorLength = ADV_UPCS(Length)(_separatorBuffer.$ref());
			} else {
				#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (_separator) {
					#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), (*(_separator)));
					#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorLength = Builtin::u32(1U);
				} else {
					#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Boolean(false);
					}
				}
			}
		}
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_startCurrent = _startNext;
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (separatorIndex) {
			#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_endCurrent = _startCurrent + (*(separatorIndex));
			#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_startNext = _endCurrent + separatorLength;
		} else {
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_endCurrent = ADV_UPCS(Length)(_src.$ref());
				#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_startNext = ADV_UPCS(Length)(_src.$ref());
				#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_separator = nullptr;
				#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isBuffer = Builtin::Boolean(false);
				#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isAny = Builtin::Boolean(false);
			}
		}
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent))); 
	}
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::GetSource() const  -> const System::Span<T>
	{
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_src); 
	}
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Spliterator<T>::Iterate() const  -> const $self
	{
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr ReverseSpliterator<T>::ReverseSpliterator(System::Span<T> src, const T& separator)  : 
	#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separator{separator}, 
	#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_endNext{ADV_UPCS(Length)(src.$ref())}
	{
	}
#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr ReverseSpliterator<T>::ReverseSpliterator(System::Span<T> src, System::Span<T> separators)  : 
	#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_src{src}, 
	#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_separatorBuffer{separators}, 
	#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_endNext{ADV_UPCS(Length)(src.$ref())}, 
	#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_isAny{Builtin::Boolean(true)}
	{
	}
#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr ReverseSpliterator<T>::ReverseSpliterator(System::Span<T> src, System::Span<T> separators, bool single) 
	{
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((single), "single");
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_src = src;
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_separatorBuffer = separators;
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_endNext = ADV_UPCS(Length)(src.$ref());
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_isBuffer = Builtin::Boolean(true);
	}
#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseSpliterator<T>::MoveNext()  -> const bool
	{
		#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Nullable<Builtin::usize> separatorIndex{}; 
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize separatorLength{}; 
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_isAny) {
			#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorIndex = ADV_UFCS(LastIndexOfAny)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), _separatorBuffer);
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			separatorLength = Builtin::u32(1U);
		} else {
			#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (_isBuffer) {
				#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), _separatorBuffer);
				#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				separatorLength = ADV_UPCS(Length)(_separatorBuffer.$ref());
			} else {
				#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (_separator) {
					#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), (*(_separator)));
					#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					separatorLength = Builtin::u32(1U);
				} else {
					#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Boolean(false);
					}
				}
			}
		}
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_endCurrent = _endNext;
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (separatorIndex) {
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_endNext = (*(separatorIndex));
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_startCurrent = _endNext + separatorLength;
		} else {
			#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_endCurrent = ADV_UPCS(Length)(_src.$ref());
				#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_endNext = ADV_UPCS(Length)(_src.$ref());
				#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_separator = nullptr;
				#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isBuffer = Builtin::Boolean(false);
				#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				_isAny = Builtin::Boolean(false);
			}
		}
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseSpliterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent))); 
	}
#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseSpliterator<T>::GetSource() const  -> const System::Span<T>
	{
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_src); 
	}
#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseSpliterator<T>::Iterate() const  -> const $self
	{
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr SlidingIterator<T>::SlidingIterator(System::Span<T> src, Builtin::usize windowSize)  : 
	#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_remaining{src}, 
	#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_windowSize{windowSize}
	{
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (windowSize == Builtin::i32(0)) {
			#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto SlidingIterator<T>::MoveNext()  -> const bool
	{
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((_windowSize <=> ADV_UPCS(Length)(_remaining.$ref())) > 0) {
			#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_currentWindow = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_windowSize)>, false>({}, _windowSize));
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_remaining = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false));
		#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto SlidingIterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_currentWindow); 
	}
#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto SlidingIterator<T>::GetRemainingData() const  -> const System::Span<T>
	{
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_remaining); 
	}
#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto SlidingIterator<T>::Iterate() const  -> const $self
	{
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr ChunkIterator<T>::ChunkIterator(System::Span<T> src, Builtin::usize chunkSize)  : 
	#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_remaining{src}, 
	#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_chunkSize{chunkSize}
	{
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (chunkSize == Builtin::i32(0)) {
			#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ChunkIterator<T>::MoveNext()  -> const bool
	{
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)(_remaining.$ref())) {
			#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(_chunkSize.$ref(), ADV_UPCS(Length)(_remaining.$ref())))> currentLength = ADV_UFCS(Min)(_chunkSize.$ref(), ADV_UPCS(Length)(_remaining.$ref())); 
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_currentChunk = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(currentLength)>, false>({}, currentLength));
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_remaining = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::IndexRange(currentLength, System::Index::End, false));
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ChunkIterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_currentChunk); 
	}
#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ChunkIterator<T>::GetRemainingData() const  -> const System::Span<T>
	{
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_remaining); 
	}
#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ChunkIterator<T>::Iterate() const  -> const $self
	{
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr ReverseChunkIterator<T>::ReverseChunkIterator(System::Span<T> src, Builtin::usize chunkSize)  : 
	#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_remaining{src}, 
	#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_chunkSize{chunkSize}
	{
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (chunkSize == Builtin::i32(0)) {
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseChunkIterator<T>::MoveNext()  -> const bool
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)(_remaining.$ref())) {
			#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(_remaining.$ref()) - ADV_UFCS(Min)(_chunkSize.$ref(), ADV_UPCS(Length)(_remaining.$ref())))> splitIndex = ADV_UPCS(Length)(_remaining.$ref()) - ADV_UFCS(Min)(_chunkSize.$ref(), ADV_UPCS(Length)(_remaining.$ref())); 
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_currentChunk = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::IndexRange(splitIndex, System::Index::End, false));
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_remaining = ADV_UFCS(_operator_subscript)(_remaining.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(splitIndex)>, false>({}, splitIndex));
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseChunkIterator<T>::GetCurrent() const  -> const System::Span<T>
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_currentChunk); 
	}
#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseChunkIterator<T>::GetRemainingData() const  -> const System::Span<T>
	{
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_remaining); 
	}
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto ReverseChunkIterator<T>::Iterate() const  -> const $self
	{
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
namespace __Span$Protected {
		#line 2739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool
		{
			#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 2742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) == val) {
					#line 2754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 2760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val) {
					#line 2768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 2774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val) {
					#line 2777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 2781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
	}
namespace __Span$Protected {
		#line 2836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize
		{
			#line 2837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize count{}; 
			#line 2838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2838 = data; auto $for_iter_2838 = ADV_UFCS(Iterate)($for_init_2838.$ref()); while($for_iter_2838.$ref().MoveNext()) {
			auto&& i = $for_iter_2838.$ref().GetCurrent(); {
				#line 2839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 2840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++count;
				}
			}}}
			#line 2843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return count;
		}
	}
namespace __Span$Protected {
		#line 2946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 2962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 2966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) == val) {
					#line 2970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) == val) {
					#line 2974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) == val) {
					#line 2978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) == val) {
					#line 2982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 3001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 3080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 3081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 3082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 3083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 3086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 3087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 3088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 3089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 3092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(IndexOf)(ADV_UFCS(SliceUnchecked)(data.$ref(), index, remainingLength).$ref(), valueHead)) {
					{
						#line 3092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 3093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += relativeIndex;
					}
				} else {
					#line 3094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 3095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
				#line 3098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), index + Builtin::u32(1U), valueTailLength).$ref(), valueTail)) {
					#line 3099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3113 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_3113 = ADV_UFCS(Iterate)($for_init_3113.$ref()); while($for_iter_3113.$ref().MoveNext()) {
			auto&& i = $for_iter_3113.$ref().GetCurrent(); {
				#line 3114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 3115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3115 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3115 = ADV_UFCS(Iterate)($for_init_3115.$ref()); while($for_iter_3115.$ref().MoveNext()) {
				auto&& j = $for_iter_3115.$ref().GetCurrent(); {
					#line 3116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
			#line 3121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3303 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_3303 = ADV_UFCS(Iterate)($for_init_3303.$ref()); while($for_iter_3303.$ref().MoveNext()) {
			auto&& i = $for_iter_3303.$ref().GetCurrent(); {
				#line 3304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 3305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 3309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3428 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_3428 = ADV_UFCS(Iterate)($for_init_3428.$ref()); while($for_iter_3428.$ref().MoveNext()) {{
			auto&& i = $for_iter_3428.$ref().GetCurrent(); {
				#line 3429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 3430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3430 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3430 = ADV_UFCS(Iterate)($for_init_3430.$ref()); while($for_iter_3430.$ref().MoveNext()) {
				auto&& j = $for_iter_3430.$ref().GetCurrent(); {
					#line 3431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 3435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			} ADV_LOOP_LABELS(outer) }}}
			#line 3437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 3452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 3456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 3460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) != val) {
					#line 3464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) != val) {
					#line 3468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) != val) {
					#line 3472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) != val) {
					#line 3476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 3491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 3495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 3499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3694 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_3694 = ADV_UFCS(Iterate)($for_init_3694.$ref()); while($for_iter_3694.$ref().MoveNext()) {
			auto&& i = $for_iter_3694.$ref().GetCurrent(); {
				#line 3695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 3696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 3700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 3979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 3983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 3987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) == val) {
					#line 3991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) == val) {
					#line 3995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) == val) {
					#line 3999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) == val) {
					#line 4003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 4014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 4018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 4022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 4026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 4035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 4096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 4097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 4098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return dataLength;
			}
			#line 4101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 4102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 4103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 4104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueTailLength == Builtin::i32(0)) {
				#line 4105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UFCS(LastIndexOf)(data.$ref(), valueHead);
			}
			#line 4108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 4110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 4111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 4112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 4113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 4114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 4117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(remainingLength)>, false>({}, remainingLength)).$ref(), valueHead)) {
					{
						#line 4117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 4118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), relativeIndex + Builtin::i32(1), valueTailLength).$ref(), valueTail)) {
							#line 4119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return relativeIndex;
						}
						#line 4121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += remainingLength - relativeIndex;
					}
				} else {
					#line 4122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 4123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
			#line 4126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 4131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 4132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 4133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 4136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 4137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 4138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_4138 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_4138 = ADV_UFCS(Iterate)($for_init_4138.$ref()); while($for_iter_4138.$ref().MoveNext()) {
				auto&& j = $for_iter_4138.$ref().GetCurrent(); {
					#line 4139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 4140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
			#line 4144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 4228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 4316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 4326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 4327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 4328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 4331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 4444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 4445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 4446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 4449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) {
			{
				#line 4451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 4452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_4452 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_4452 = ADV_UFCS(Iterate)($for_init_4452.$ref()); while($for_iter_4452.$ref().MoveNext()) {
				auto&& j = $for_iter_4452.$ref().GetCurrent(); {
					#line 4453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 4454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 4457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			} ADV_LOOP_LABELS(outer) }
			#line 4459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 4474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 4478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 4482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) != val) {
					#line 4486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) != val) {
					#line 4490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) != val) {
					#line 4494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) != val) {
					#line 4498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 4513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 4517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 4521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 4530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 4618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 4716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 4717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 4718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 4721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void
		{
			#line 4989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4989 = buf; auto $for_iter_4989 = ADV_UFCS(Iterate)($for_init_4989.$ref()); while($for_iter_4989.$ref().MoveNext()) {
			auto& i = $for_iter_4989.$ref().GetCurrentRef(); {
				#line 4990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == oldValue) {
					#line 4991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = newValue;
				}
			}}}
		}
	}
namespace __Span$Protected {
		#line 5048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
		{
			#line 5049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 5050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 5051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 5052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 5054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7))) {
					#line 5063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 5066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 5069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 5070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 5072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3))) {
					#line 5077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 5080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 5083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 5084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 5085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset)) {
					#line 5086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 5088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 5090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
	}
namespace __Span$Protected {
		#line 5145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceCompareGeneralCase(System::Span<T> lhs, System::Span<T> rhs, Builtin::usize length)  -> const Builtin::i32
		{
			#line 5146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5146 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_5146 = ADV_UFCS(Iterate)($for_init_5146.$ref()); while($for_iter_5146.$ref().MoveNext()) {
			auto&& i = $for_iter_5146.$ref().GetCurrent(); {
				#line 5147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i))> result = ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, i) <=> ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, i); 
				#line 5148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (result != Builtin::i32(0)) {
					#line 5149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return result;
				}
			}}}
			#line 5152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UPCS(Length)(lhs.$ref()) <=> ADV_UPCS(Length)(rhs.$ref());
		}
	}
namespace __Span$Protected {
		#line 5179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReverseGeneralCase(System::MutableSpan<T> buf)  -> void
		{
			#line 5180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::u32(2U)) >= 0), "buf.Length>=2u");
			#line 5181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> first = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))); 
			#line 5182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> last = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U)))); 
			#line 5183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			do 
			#line 5183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 5184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move(first))> tmp = Builtin::Move(first); 
				#line 5185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = Builtin::Move(last);
				#line 5186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = Builtin::Move(tmp);
				#line 5187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = ADV_USFCS((Unsafe), Add)(first, Builtin::u32(1U));
				#line 5188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = ADV_USFCS((Unsafe), Subtract)(last, Builtin::u32(1U));
			} while (ADV_USFCS((Unsafe), IsAddressLessThan)(first, last));
		}
	}
namespace __Span$Protected {
		#line 5244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimStartCount(System::Span<T> span, const T& val)  -> const Builtin::usize
		{
			#line 5245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 5246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize start{}; 
			#line 5247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5247 = span; auto $for_iter_5247 = ADV_UFCS(Iterate)($for_init_5247.$ref()); while($for_iter_5247.$ref().MoveNext()) {
			auto&& i = $for_iter_5247.$ref().GetCurrent(); {
				#line 5248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i != val) {
					#line 5249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++start;
			}}}
			#line 5253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return start;
		}
	}
namespace __Span$Protected {
		#line 5256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimStartCount(System::Span<T> span, System::Span<T> vals)  -> const Builtin::usize
		{
			#line 5257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 5258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize start{}; 
			#line 5259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5259 = span; auto $for_iter_5259 = ADV_UFCS(Iterate)($for_init_5259.$ref()); while($for_iter_5259.$ref().MoveNext()) {
			auto&& i = $for_iter_5259.$ref().GetCurrent(); {
				#line 5260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(vals, i)) {
					#line 5261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++start;
			}}}
			#line 5265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return start;
		}
	}
namespace __Span$Protected {
		#line 5268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimEndCount(System::Span<T> span, const T& val, Builtin::usize start)  -> const Builtin::usize
		{
			#line 5269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 5270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> end = ADV_UPCS(Length)(span.$ref()); 
			#line 5271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5271 = ADV_UPCS(Reversed)(span.$ref()); auto $for_iter_5271 = ADV_UFCS(Iterate)($for_init_5271.$ref()); while($for_iter_5271.$ref().MoveNext()) {
			auto&& i = $for_iter_5271.$ref().GetCurrent(); {
				#line 5272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i != val) {
					#line 5273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--end;
			}}}
			#line 5277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return end - start;
		}
	}
namespace __Span$Protected {
		#line 5280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> inline constexpr auto SpanHelpers::TrimEndCount(System::Span<T> span, System::Span<T> vals, Builtin::usize start)  -> const Builtin::usize
		{
			#line 5281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "TrimStart available only for ISelfEquatable types");
			#line 5282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> end = ADV_UPCS(Length)(span.$ref()); 
			#line 5283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5283 = ADV_UPCS(Reversed)(span.$ref()); auto $for_iter_5283 = ADV_UFCS(Iterate)($for_init_5283.$ref()); while($for_iter_5283.$ref().MoveNext()) {
			auto&& i = $for_iter_5283.$ref().GetCurrent(); {
				#line 5284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(vals, i)) {
					#line 5285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--end;
			}}}
			#line 5289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return end - start;
		}
	}
namespace __Span$Protected {
		#line 5292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::Sort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 5293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			IntroSort(buf, (ADV_UPCS(Log2)(ADV_UPCS(Length)(buf.$ref()).$ref()) + Builtin::u32(1U)) * Builtin::u32(2U), compare);
		}
	}
namespace __Span$Protected {
		#line 5296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::Sort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 5297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			IntroSort(keys, values, (ADV_UPCS(Log2)(ADV_UPCS(Length)(keys.$ref()).$ref()) + Builtin::u32(1U)) * Builtin::u32(2U), compare);
		}
	}
namespace __Span$Protected {
		#line 5300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IntroSort(System::MutableSpan<T> buf, Builtin::usize depthLimit, Comparator<T> compare)  -> void
		{
			#line 5301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(16U))> SORT_SIZE_THRESHOLD = Builtin::u32(16U);
			#line 5302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> partitionSize = ADV_UPCS(Length)(buf.$ref()); 
			#line 5303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((partitionSize <=> Builtin::u32(1U)) > 0) 
			{
				#line 5304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((partitionSize <=> SORT_SIZE_THRESHOLD) <= 0) {
					#line 5305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(2U)) {
						#line 5306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(3U)) {
						#line 5310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(0U), Builtin::u32(2U));
						#line 5312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(buf, compare, Builtin::u32(1U), Builtin::u32(2U));
						#line 5313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					InsertionSort(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (depthLimit == Builtin::i32(0)) {
					#line 5320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					HeapSort(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--depthLimit;
				#line 5324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(PickPivotAndPartition(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare))> p = PickPivotAndPartition(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare); 
				#line 5325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				IntroSort(ADV_UFCS(_operator_subscript)(buf.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), depthLimit, compare);
				#line 5326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				partitionSize = p;
			}
		}
	}
namespace __Span$Protected {
		#line 5330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::PickPivotAndPartition(System::MutableSpan<T> buf, Comparator<T> compare)  -> const Builtin::usize
		{
			#line 5331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::u32(16U)) >= 0), "buf.Length>=16u");
			#line 5332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U))> hi = ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U); 
			#line 5333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(hi >> Builtin::i32(1))> mid = hi >> Builtin::i32(1); 
			#line 5334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, Builtin::u32(0U), mid);
			#line 5335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, Builtin::u32(0U), hi);
			#line 5336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(buf, compare, mid, hi);
			#line 5337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, mid))> pivot = ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, mid); 
			#line 5338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Swap(buf, mid, hi - Builtin::u32(1U));
			#line 5339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize left{}; 
			#line 5340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(hi - Builtin::u32(1U))> right = hi - Builtin::u32(1U); 
			#line 5341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((left <=> right) < 0) 
			{
				#line 5342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(ADV_UFCS(_operator_subscript)(buf.$ref(), ++left), pivot) <=> Builtin::i32(0)) < 0) 
				{
					#line 5342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(pivot, ADV_UFCS(_operator_subscript)(buf.$ref(), --right)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((left <=> right) >= 0) {
					#line 5345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, left, right);
			}
			#line 5349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (left != (hi - Builtin::u32(1U))) {
				#line 5350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, left, hi - Builtin::u32(1U));
			}
			#line 5352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return left;
		}
	}
namespace __Span$Protected {
		#line 5355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::InsertionSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 5356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U))> length = ADV_UPCS(Length)(buf.$ref()) - Builtin::u32(1U); 
			#line 5357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5357 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_5357 = ADV_UFCS(Iterate)($for_init_5357.$ref()); while($for_iter_5357.$ref().MoveNext()) {
			auto&& i = $for_iter_5357.$ref().GetCurrent(); {
				#line 5358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i)> j = i; 
				#line 5360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((j <=> length) < 0 && (compare(tmp, ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_sub_sub_mod)(j);
				}
				#line 5364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_add_add_mod)(j);
				#line 5365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
			}}}
		}
	}
namespace __Span$Protected {
		#line 5369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::HeapSort(System::MutableSpan<T> buf, Comparator<T> compare)  -> void
		{
			#line 5370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
			#line 5371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length >> Builtin::i32(1))> i = length >> Builtin::i32(1); (i <=> Builtin::i32(0)) > 0; --i) 
			{
				#line 5372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(buf, i, length, compare);
			}
			#line 5374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length)> i = length; (i <=> Builtin::i32(1)) > 0; --i) 
			{
				#line 5375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(buf, Builtin::u32(0U), i - Builtin::u32(1U));
				#line 5376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(buf, Builtin::u32(1U), i - Builtin::u32(1U), compare);
			}
		}
	}
namespace __Span$Protected {
		#line 5380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::HeapDown(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize n, Comparator<T> compare)  -> void
		{
			#line 5381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U))))> tmp = Builtin::Move(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U))); 
			#line 5382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((i <=> (n >> Builtin::i32(1))) <= 0) 
			{
				#line 5383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i * Builtin::u32(2U))> child = i * Builtin::u32(2U); 
				#line 5384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((child <=> n) < 0 && (compare(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U)), ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child)) <=> Builtin::i32(0)) < 0) {
					#line 5385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++child;
				}
				#line 5387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((compare(tmp, ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))) <=> Builtin::i32(0)) >= 0) {
					#line 5388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = child;
			}
			#line 5393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmp);
		}
	}
namespace __Span$Protected {
		#line 5396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SwapIfGreater(System::MutableSpan<T> buf, Comparator<T> compare, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((compare(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) > 0) {
				#line 5399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
			}
		}
	}
namespace __Span$Protected {
		#line 5405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::Swap(System::MutableSpan<T> buf, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))))> tmp = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmp);
		}
	}
namespace __Span$Protected {
		#line 5412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::IntroSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize depthLimit, Comparator<TKey> compare)  -> void
		{
			#line 5413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(16U))> SORT_SIZE_THRESHOLD = Builtin::u32(16U);
			#line 5414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()))> partitionSize = ADV_UPCS(Length)(keys.$ref()); 
			#line 5415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((partitionSize <=> Builtin::u32(1U)) > 0) 
			{
				#line 5416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((partitionSize <=> SORT_SIZE_THRESHOLD) <= 0) {
					#line 5417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(2U)) {
						#line 5418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (partitionSize == Builtin::u32(3U)) {
						#line 5422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(1U));
						#line 5423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(0U), Builtin::u32(2U));
						#line 5424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						SwapIfGreater(keys, values, compare, Builtin::u32(1U), Builtin::u32(2U));
						#line 5425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					}
					#line 5428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					InsertionSort(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (depthLimit == Builtin::i32(0)) {
					#line 5432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					HeapSort(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare);
					#line 5433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				}
				#line 5435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--depthLimit;
				#line 5436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(PickPivotAndPartition(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare))> p = PickPivotAndPartition(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(partitionSize)>, false>({}, partitionSize)), compare); 
				#line 5437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				IntroSort(ADV_UFCS(_operator_subscript)(keys.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), ADV_UFCS(_operator_subscript)(values.$ref(), System::Range<Builtin::Auto<decltype(partitionSize)>, false>((p + Builtin::u32(1U)), partitionSize)), depthLimit, compare);
				#line 5438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				partitionSize = p;
			}
		}
	}
namespace __Span$Protected {
		#line 5442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::PickPivotAndPartition(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> const Builtin::usize
		{
			#line 5443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(keys.$ref()) <=> Builtin::u32(16U)) >= 0), "keys.Length>=16u");
			#line 5444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U))> hi = ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U); 
			#line 5445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(hi >> Builtin::i32(1))> mid = hi >> Builtin::i32(1); 
			#line 5446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, Builtin::u32(0U), mid);
			#line 5447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, Builtin::u32(0U), hi);
			#line 5448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			SwapIfGreater(keys, values, compare, mid, hi);
			#line 5449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, mid))> pivot = ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, mid); 
			#line 5450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Swap(keys, values, mid, hi - Builtin::u32(1U));
			#line 5451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize left{}; 
			#line 5452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(hi - Builtin::u32(1U))> right = hi - Builtin::u32(1U); 
			#line 5453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((left <=> right) < 0) 
			{
				#line 5454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(ADV_UFCS(_operator_subscript)(keys.$ref(), ++left), pivot) <=> Builtin::i32(0)) < 0) 
				{
					#line 5454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((compare(pivot, ADV_UFCS(_operator_subscript)(keys.$ref(), --right)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					;
				}
				#line 5456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((left <=> right) >= 0) {
					#line 5457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, left, right);
			}
			#line 5461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (left != (hi - Builtin::u32(1U))) {
				#line 5462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, left, hi - Builtin::u32(1U));
			}
			#line 5464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return left;
		}
	}
namespace __Span$Protected {
		#line 5467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::InsertionSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 5468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U))> length = ADV_UPCS(Length)(keys.$ref()) - Builtin::u32(1U); 
			#line 5469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_5469 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_5469 = ADV_UFCS(Iterate)($for_init_5469.$ref()); while($for_iter_5469.$ref().MoveNext()) {
			auto&& i = $for_iter_5469.$ref().GetCurrent(); {
				#line 5470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i + Builtin::u32(1U)))); 
				#line 5472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i)> j = i; 
				#line 5473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				while ((j <=> length) < 0 && (compare(tmpKey, ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) < 0) 
				{
					#line 5474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j + Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
					#line 5476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_sub_sub_mod)(j);
				}
				#line 5478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_add_add_mod)(j);
				#line 5479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
				#line 5480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
			}}}
		}
	}
namespace __Span$Protected {
		#line 5484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::HeapSort(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare)  -> void
		{
			#line 5485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(keys.$ref()))> length = ADV_UPCS(Length)(keys.$ref()); 
			#line 5486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length >> Builtin::i32(1))> i = length >> Builtin::i32(1); (i <=> Builtin::i32(0)) > 0; --i) 
			{
				#line 5487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(keys, values, i, length, compare);
			}
			#line 5489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(length)> i = length; (i <=> Builtin::i32(1)) > 0; --i) 
			{
				#line 5490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Swap(keys, values, Builtin::u32(0U), i - Builtin::u32(1U));
				#line 5491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				HeapDown(keys, values, Builtin::u32(1U), i - Builtin::u32(1U), compare);
			}
		}
	}
namespace __Span$Protected {
		#line 5495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::HeapDown(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize n, Comparator<TKey> compare)  -> void
		{
			#line 5496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))); 
			#line 5497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)))); 
			#line 5498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((i <=> (n >> Builtin::i32(1))) <= 0) 
			{
				#line 5499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(i * Builtin::u32(2U))> child = i * Builtin::u32(2U); 
				#line 5500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((child <=> n) < 0 && (compare(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U)), ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child)) <=> Builtin::i32(0)) < 0) {
					#line 5501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++child;
				}
				#line 5503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((compare(tmpKey, ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))) <=> Builtin::i32(0)) >= 0) {
					#line 5504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 5506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, child - Builtin::u32(1U))));
				#line 5508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = child;
			}
			#line 5510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmpKey);
			#line 5511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i - Builtin::u32(1U)) = Builtin::Move(tmpVal);
		}
	}
namespace __Span$Protected {
		#line 5514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::SwapIfGreater(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Comparator<TKey> compare, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((compare(ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)) <=> Builtin::i32(0)) > 0) {
				#line 5517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
				#line 5520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))); 
				#line 5521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
				#line 5522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
			}
		}
	}
namespace __Span$Protected {
		#line 5526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class TKey, class TValue> auto SpanHelpers::Swap(System::MutableSpan<TKey> keys, System::MutableSpan<TValue> values, Builtin::usize i, Builtin::usize j)  -> void
		{
			#line 5527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT((i != j), "i!=j");
			#line 5528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))))> tmpKey = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(keys.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpKey);
			#line 5531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))))> tmpVal = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i))); 
			#line 5532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j)));
			#line 5533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j) = Builtin::Move(tmpVal);
		}
	}
namespace __Span$Protected {
		#line 5536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::Rotate(System::MutableSpan<T> span, Builtin::usize left, Builtin::usize right)  -> void
		{
			#line 5537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (left == Builtin::i32(0) || right == Builtin::i32(0)) {
				#line 5538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ;
			}
			#line 5541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(Builtin::u32(256U), Builtin::usize(sizeof (T))))> items = ADV_UFCS(_operator_bsl)(Builtin::u32(256U), Builtin::usize(sizeof (T)));
			#line 5542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((ADV_UFCS(Min)(left.$ref(), right) <=> items) <= 0) {
				#line 5543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				using TBuffer = Builtin::InlineArray<items, T>;
				#line 5544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(TBuffer::UnsafeCreateUninitialized())> buf = TBuffer::UnsafeCreateUninitialized(); 
				#line 5546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((left <=> right) <= 0) {
					#line 5547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((Unsafe), CopyBlockNonOverlapping)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(buf)), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), left * Builtin::usize(sizeof (T)));
					#line 5548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((Unsafe), CopyBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, left)), right * Builtin::usize(sizeof (T)));
					#line 5549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((Unsafe), CopyBlockNonOverlapping)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, right))), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(buf), left * Builtin::usize(sizeof (T)));
				} else {
					#line 5550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 5551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((Unsafe), CopyBlockNonOverlapping)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(buf)), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, left)), right * Builtin::usize(sizeof (T)));
						#line 5552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((Unsafe), CopyBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, right))), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), left * Builtin::usize(sizeof (T)));
						#line 5553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((Unsafe), CopyBlockNonOverlapping)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(buf), right * Builtin::usize(sizeof (T)));
					}
				}
			} else {
				#line 5555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (((left + right) <=> Builtin::u32(24U)) < 0 || (Builtin::usize(sizeof (T)) <=> Builtin::u32(32U)) > 0) {
					#line 5556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> tmp = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
					#line 5557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Auto<decltype(right)> i = right; 
					#line 5558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Auto<decltype(right)> gcd = right; 
					#line 5559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (;;) 
					{
						#line 5560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> tmp2 = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
						#line 5561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move(tmp);
						#line 5562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmp = Builtin::Move(tmp2);
						#line 5563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if ((i <=> left) >= 0) {
							#line 5564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							i -= left;
							#line 5565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if (i == Builtin::i32(0)) {
								#line 5566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) = Builtin::Move(tmp);
								#line 5567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								break;
							}
							#line 5569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if ((i <=> gcd) < 0) {
								#line 5570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								gcd = i;
							}
						} else {
							#line 5572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 5573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								i += right;
							}
						}
					}
					#line 5576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Auto<decltype(Builtin::u32(1U))> start = Builtin::u32(1U); 
					#line 5577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					while ((start <=> gcd) < 0) 
					{
						#line 5578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						tmp = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, start);
						#line 5579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						i = start + right;
						#line 5580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						for (;;) 
						{
							#line 5581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> tmp2 = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
							#line 5582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move(tmp);
							#line 5583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							tmp = Builtin::Move(tmp2);
							#line 5584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if ((i <=> left) >= 0) {
								#line 5585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								i -= left;
								#line 5586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if (i == start) {
									#line 5587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, start) = Builtin::Move(tmp);
									#line 5588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									break;
								}
							} else {
								#line 5590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								{
									#line 5591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									i += right;
								}
							}
						}
						#line 5594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						++start;
					}
				} else {
					#line 5596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 5597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(left)> mid = left; 
						#line 5598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						for (;;) 
						{
							#line 5599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if ((left <=> right) >= 0) {
								#line 5600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								for (;;) 
								{
									#line 5601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									ADV_USFCS((Unsafe), SwapSequence)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, mid)), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, mid - right)), right);
									#line 5602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									mid -= right;
									#line 5603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									left -= right;
									#line 5604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if ((left <=> right) < 0) {
										#line 5605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										break;
									}
								}
							} else {
								#line 5608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								{
									#line 5609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									for (;;) 
									{
										#line 5610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										ADV_USFCS((Unsafe), SwapSequence)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, mid)), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, mid - left)), left);
										#line 5611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										mid += left;
										#line 5612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										right -= left;
										#line 5613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if ((right <=> left) < 0) {
											#line 5614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											break;
										}
									}
								}
							}
							#line 5618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if (left == Builtin::i32(0) || right == Builtin::i32(0)) {
								#line 5619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ;
							}
						}
					}
				}
			}
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_423_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_423_Span<T> const & $this ) -> const Builtin::usize
	{
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_423_Span<T> const & $this ) -> const bool
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_423_Span<T> const & $this ) -> const typename $extension_Span_423_Span<T>::ReverseIterator
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_423_Span<T>::ReverseIterator;
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_423_Span<T> const & $this ) -> const Span<Builtin::u8>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard433{};
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_749_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_749_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>
	{
		#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_749_MutableSpan<T> const & $this ) -> const Builtin::usize
	{
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_749_MutableSpan<T> const & $this ) -> const bool
	{
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_749_MutableSpan<T> const & $this ) -> const typename $extension_Span_749_MutableSpan<T>::ReverseIterator
	{
		#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_749_MutableSpan<T>::ReverseIterator;
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_749_MutableSpan<T> const & $this ) -> const MutableSpan<Builtin::u8>
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard759{};
			#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1045 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_1045 = ADV_UFCS(Iterate)($for_init_1045.$ref()); while($for_iter_1045.$ref().MoveNext()) {
				auto&& i = $for_iter_1045.$ref().GetCurrent(); {
					#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Binary search available only for comparable types. Use overload with custom comparator instead.");
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(BinarySearch)($this.$ref(), std::forward<decltype(val)>(val), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (length == Builtin::i32(0)) {
			#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return TResult::Err(Builtin::u32(0U));
		}
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize lo{}; 
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(length - Builtin::i32(1))> hi = length - Builtin::i32(1); 
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((lo <=> hi) <= 0) 
		{
			#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype((hi + lo) >> Builtin::i32(1))> index = (hi + lo) >> Builtin::i32(1); 
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::i32 cmp = compare(std::forward<decltype(val)>(val), ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, index)); 
			#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp__valid_1084 = Builtin::Cast<false, std::decay_t<decltype(cmp)>::$self>(cmp);
				#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_1084.IsValid() && Builtin::Is(*__tmp__valid_1084, Builtin::i32(0)))  {
					#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const auto& cmp = *__tmp__valid_1084;
					#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				else {
					#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if(__tmp__valid_1084.IsValid() && Builtin::IsGreater(*__tmp__valid_1084, Builtin::i32(0)))  {
						#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						const auto& cmp = *__tmp__valid_1084;
						#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						lo = index + Builtin::i32(1);
					}
					else {
						#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						hi = index - Builtin::i32(1);
						
					}
				}
			}

		}
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TResult::Err(lo);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
			#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::usize(sizeof (T)))> size = Builtin::usize(sizeof (T));
			#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size))> index = ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size); 
			#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((index <=> length) < 0 || !isSameLength) {
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		} else {
			#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1120 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1120 = ADV_UFCS(Iterate)($for_init_1120.$ref()); while($for_iter_1120.$ref().MoveNext()) {
				auto&& i = $for_iter_1120.$ref().GetCurrent(); {
					#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i)) {
						#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
				#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!isSameLength) {
					#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return length;
				}
			}
		}
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1148 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1148 = ADV_UFCS(Iterate)($for_init_1148.$ref()); while($for_iter_1148.$ref().MoveNext()) {
		auto&& i = $for_iter_1148.$ref().GetCurrent(); {
			#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!isSameLength) {
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return length;
		}
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(span, valSpan);
		} else {
			#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::usize index{}; 
					#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1181 = span; auto $for_iter_1181 = ADV_UFCS(Iterate)($for_init_1181.$ref()); while($for_iter_1181.$ref().MoveNext()) {
					auto&& i = $for_iter_1181.$ref().GetCurrent(); {
						#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (i == val) {
							#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return index;
						}
						#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						++index;
					}}}
					#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize totalIndex{}; 
			#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(IndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false));
						#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return totalIndex + pos;
						}
						#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						totalIndex += pos + Builtin::u32(1U);
					}
				} else {
					#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1247 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1247 = ADV_UFCS(Iterate)($for_init_1247.$ref()); while($for_iter_1247.$ref().MoveNext()) {
				auto&& i = $for_iter_1247.$ref().GetCurrent(); {
					#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val)) {
						#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			} else {
				#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1274 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(0))) {
							#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1274;
							return nullptr;
						}
						else {
							#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(1))) {
								#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1274;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(2))) {
									#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1274;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(3))) {
										#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1274;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(4))) {
											#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1274;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1274.IsValid() && Builtin::Is(*__tmp__valid_1274, Builtin::i32(5))) {
												#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1274;
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
					#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1293 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(0))) {
								#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1293;
								return nullptr;
							}
							else {
								#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(1))) {
									#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1293;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(2))) {
										#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1293;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(3))) {
											#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1293;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(4))) {
												#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1293;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1293.IsValid() && Builtin::Is(*__tmp__valid_1293, Builtin::i32(5))) {
													#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1293;
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
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
		} else {
			#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1359 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1359 = ADV_UFCS(Iterate)($for_init_1359.$ref()); while($for_iter_1359.$ref().MoveNext()) {
			auto&& i = $for_iter_1359.$ref().GetCurrent(); {
				#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1360 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1360 = ADV_UFCS(Iterate)($for_init_1360.$ref()); while($for_iter_1360.$ref().MoveNext()) {
				auto&& j = $for_iter_1360.$ref().GetCurrent(); {
					#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
		} else {
			#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1402 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1402 = ADV_UFCS(Iterate)($for_init_1402.$ref()); while($for_iter_1402.$ref().MoveNext()) {
			auto&& i = $for_iter_1402.$ref().GetCurrent(); {
				#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1450 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1450 = ADV_UFCS(Iterate)($for_init_1450.$ref()); while($for_iter_1450.$ref().MoveNext()) {
		auto&& i = $for_iter_1450.$ref().GetCurrent(); {
			#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1477 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(0))) {
							#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1477;
							return nullptr;
						}
						else {
							#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(1))) {
								#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1477;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(2))) {
									#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1477;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(3))) {
										#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1477;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(4))) {
											#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1477;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1477.IsValid() && Builtin::Is(*__tmp__valid_1477, Builtin::i32(5))) {
												#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1477;
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
					#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1496 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(0))) {
								#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1496;
								return nullptr;
							}
							else {
								#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(1))) {
									#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1496;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(2))) {
										#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1496;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(3))) {
											#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1496;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(4))) {
												#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1496;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1496.IsValid() && Builtin::Is(*__tmp__valid_1496, Builtin::i32(5))) {
													#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1496;
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
			#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1577 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1577 = ADV_UFCS(Iterate)($for_init_1577.$ref()); while($for_iter_1577.$ref().MoveNext()) {{
				auto&& i = $for_iter_1577.$ref().GetCurrent(); {
					#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1578 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1578 = ADV_UFCS(Iterate)($for_init_1578.$ref()); while($for_iter_1578.$ref().MoveNext()) {
					auto&& j = $for_iter_1578.$ref().GetCurrent(); {
						#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				} ADV_LOOP_LABELS(outer) }}}
			} else {
				#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1587 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1587 = ADV_UFCS(Iterate)($for_init_1587.$ref()); while($for_iter_1587.$ref().MoveNext()) {
					auto&& i = $for_iter_1587.$ref().GetCurrent(); {
						#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val1)) {
							#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return i;
						}
					}}}
				}
			}
		} else {
			#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1630 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1630 = ADV_UFCS(Iterate)($for_init_1630.$ref()); while($for_iter_1630.$ref().MoveNext()) {
			auto&& i = $for_iter_1630.$ref().GetCurrent(); {
				#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1678 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1678 = ADV_UFCS(Iterate)($for_init_1678.$ref()); while($for_iter_1678.$ref().MoveNext()) {
		auto&& i = $for_iter_1678.$ref().GetCurrent(); {
			#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(span, valSpan);
		} else {
			#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)) == val) {
							#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
					#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UPCS(Length)(span.$ref());
			}
			#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(LastIndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return pos;
						}
						#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(pos)>, false>({}, pos));
					}
				} else {
					#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
				{
					#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val)) {
						#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}
			} else {
				#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1802 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(0))) {
							#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1802;
							return nullptr;
						}
						else {
							#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(1))) {
								#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1802;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(2))) {
									#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1802;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(3))) {
										#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1802;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(4))) {
											#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1802;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1802.IsValid() && Builtin::Is(*__tmp__valid_1802, Builtin::i32(5))) {
												#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1802;
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
					#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1821 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(0))) {
								#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1821;
								return nullptr;
							}
							else {
								#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(1))) {
									#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1821;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(2))) {
										#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1821;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(3))) {
											#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1821;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(4))) {
												#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1821;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1821.IsValid() && Builtin::Is(*__tmp__valid_1821, Builtin::i32(5))) {
													#line 1833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1821;
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
			#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInternal)(span, values);
		} else {
			#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 1845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 1855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1886 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1886 = ADV_UFCS(Iterate)($for_init_1886.$ref()); while($for_iter_1886.$ref().MoveNext()) {
				auto&& j = $for_iter_1886.$ref().GetCurrent(); {
					#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
		} else {
			#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 1977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1995 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(0))) {
							#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1995;
							return nullptr;
						}
						else {
							#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(1))) {
								#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1995;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(2))) {
									#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1995;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(3))) {
										#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1995;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(4))) {
											#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1995;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1995.IsValid() && Builtin::Is(*__tmp__valid_1995, Builtin::i32(5))) {
												#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1995;
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
					#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_2014 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(0))) {
								#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_2014;
								return nullptr;
							}
							else {
								#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(1))) {
									#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_2014;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 2018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(2))) {
										#line 2018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_2014;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(3))) {
											#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_2014;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(4))) {
												#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_2014;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_2014.IsValid() && Builtin::Is(*__tmp__valid_2014, Builtin::i32(5))) {
													#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_2014;
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
			#line 2035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInternal)(span, values);
		} else {
			#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 2037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 2038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 2061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 2064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 2086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 2090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 2091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) {
				{
					#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_2093 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_2093 = ADV_UFCS(Iterate)($for_init_2093.$ref()); while($for_iter_2093.$ref().MoveNext()) {
					auto&& j = $for_iter_2093.$ref().GetCurrent(); {
						#line 2094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				} ADV_LOOP_LABELS(outer) }
			} else {
				#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 2103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val1)) {
							#line 2104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
				}
			}
		} else {
			#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 2110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 2112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 2114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 2117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 2122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 2123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 2126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 2139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 2141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 2142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 2143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 2144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 2148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 2151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 2152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 2154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 2155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 2158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 2166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 2177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 2178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 2183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 2187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 2188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 2193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 2205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values); 
		#line 2208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 2209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 2211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values);
		}
		#line 2213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparer, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 2225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 2226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values, equals))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals); 
		#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 2229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 2230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 2231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals);
		}
		#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 2247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 2248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan);
				}
			}
		} else {
			#line 2251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) == val;
			} else {
				#line 2253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan, equals);
		} else {
			#line 2270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), val);
			} else {
				#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 2288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 2289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> spanLength) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 2291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan);
				}
			}
		} else {
			#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == val;
			} else {
				#line 2296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 2310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 2311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 2312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan, equals);
		} else {
			#line 2314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 2315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))), val);
			} else {
				#line 2316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search available only for ISelfComparable types");
		#line 2327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> leftSpan = $this; 
		#line 2330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> rightSpan = right; 
		#line 2331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_USFCS((Unsafe), AreSame)(ADV_UFCS(GetDataReference)(leftSpan.$ref()), ADV_UFCS(GetDataReference)(rightSpan.$ref()))) {
			#line 2332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref());
		}
		#line 2334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype((ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()))> length = (ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()); 
		#line 2335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 2336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported) {
			#line 2337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::u8>()) {
				#line 2338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareByte)(leftSpan, rightSpan, length);
			} else {
				#line 2339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::u16>()) {
					#line 2340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareWord)(leftSpan, rightSpan, length);
				}
			}
		}
		#line 2344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceCompareGeneralCase)(leftSpan, rightSpan, length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto SequenceCompare(TLeft&& $this LIFETIMEBOUND, TSpan&& right, TComparer compare)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 2351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparer, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 2353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 2354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> leftSpan = $this; 
		#line 2356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> rightSpan = right; 
		#line 2357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype((ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()))> length = (ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref())) < 0 ? ADV_UPCS(Length)(leftSpan.$ref()) : ADV_UPCS(Length)(rightSpan.$ref()); 
		#line 2358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2358 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_2358 = ADV_UFCS(Iterate)($for_init_2358.$ref()); while($for_iter_2358.$ref().MoveNext()) {
		auto&& i = $for_iter_2358.$ref().GetCurrent(); {
			#line 2359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(compare(ADV_UFCS(_operator_subscript)(leftSpan.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(rightSpan.$ref(), Builtin::UncheckedTag{}, i)))> result = compare(ADV_UFCS(_operator_subscript)(leftSpan.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(rightSpan.$ref(), Builtin::UncheckedTag{}, i)); 
			#line 2360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (result != Builtin::i32(0)) {
				#line 2361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return result;
			}
		}}}
		#line 2364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UPCS(Length)(leftSpan.$ref()) <=> ADV_UPCS(Length)(rightSpan.$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> inline auto _operator_lt_eq_gt_mul(TLeft&& $this LIFETIMEBOUND, TSpan&& right)  -> const Builtin::i32 requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(SequenceCompare)($this.$ref(), std::forward<decltype(right)>(right))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto Split(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TRightReal, ISpanConvertible>()) {
			#line 2378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
			#line 2379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> separators = right; 
			#line 2380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Spliterator<T>{src, separators, Builtin::Boolean(true)};
		} else {
			#line 2381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TRightReal, T>) {
				#line 2382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Spliterator<T>{src, right};
			} else {
				#line 2383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "Type TRight should be T or array-like type");
				}
			}
		}
		#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Spliterator<T>{};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAny(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be an array-like type");
		#line 2396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 2397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> separators = right; 
		#line 2399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Spliterator<T>{src, separators};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitReversed(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TRightReal, ISpanConvertible>()) {
			#line 2411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
			#line 2412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> separators = right; 
			#line 2413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ReverseSpliterator<T>{src, separators, Builtin::Boolean(true)};
		} else {
			#line 2414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TRightReal, T>) {
				#line 2415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ReverseSpliterator<T>{src, right};
			} else {
				#line 2416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "Type TRight should be T or array-like type");
				}
			}
		}
		#line 2419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ReverseSpliterator<T>{};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> inline constexpr auto SplitAnyReversed(TLeft&& $this LIFETIMEBOUND, TRight&& right)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be an array-like type");
		#line 2429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 2430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> separators = right; 
		#line 2432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ReverseSpliterator<T>{src, separators};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto Sliding(TLeft&& $this LIFETIMEBOUND, Builtin::usize windowSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return SlidingIterator<T>{src, windowSize};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto Chunks(TLeft&& $this LIFETIMEBOUND, Builtin::usize chunkSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ChunkIterator<T>{src, chunkSize};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> inline constexpr auto ChunksReversed(TLeft&& $this LIFETIMEBOUND, Builtin::usize chunkSize)  requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ReverseChunkIterator<T>{src, chunkSize};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TComparer> auto IsSorted(TLeft&& $this LIFETIMEBOUND, TComparer&& compare)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 2475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<T>>, "TComparer should be a Comparator<T>");
		#line 2479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(33U))> chunkSize = Builtin::u32(33U);
		#line 2480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 2481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto check = [&] (System::Span<T> currentChunk) 
		{
			#line 2483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2483 = ADV_UFCS(Sliding)(currentChunk.$ref(), Builtin::u32(2U)); auto $for_iter_2483 = ADV_UFCS(Iterate)($for_init_2483.$ref()); while($for_iter_2483.$ref().MoveNext()) {
			auto&& adjacents = $for_iter_2483.$ref().GetCurrent(); {
				#line 2484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((compare(ADV_UFCS(_operator_subscript)(adjacents.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), ADV_UFCS(_operator_subscript)(adjacents.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) <=> Builtin::i32(0)) > 0) {
					#line 2485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 2488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}; 
		#line 2490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> chunkSize) < 0) {
			#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return check(span);
		}
		#line 2493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); 
		#line 2494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((i <=> length - chunkSize) < 0) 
		{
			#line 2495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(SliceUnchecked)(span.$ref(), i, chunkSize))> chunk = ADV_UFCS(SliceUnchecked)(span.$ref(), i, chunkSize); 
			#line 2496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!check(chunk)) {
				#line 2497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
			#line 2499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			i += (chunkSize - Builtin::i32(1));
		}
		#line 2501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return check(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(i, System::Index::End, false)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) auto getIsSorted(TLeft&& $this ) -> const bool
	{
		#line 2467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "IsSorted available only for ISelfComparable types");
		#line 2470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(IsSorted)($this.$ref(), DefaultComparator);
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 2508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 2511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 2513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 2514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> src = $this; 
		#line 2515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 2516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 2517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 2521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 2522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2523 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_2523 = ADV_UFCS(Iterate)($for_init_2523.$ref()); while($for_iter_2523.$ref().MoveNext()) {
				auto&& i = $for_iter_2523.$ref().GetCurrent(); {
					#line 2524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = Builtin::Move((ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i)));
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Replace available only for ISelfEquatable types");
		#line 2536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		#if ADV_VERSION_X86 || ADV_VERSION_ARM
		#line 2539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 2541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceByte)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(newValue));
			} else {
				#line 2544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceWord)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(newValue));
				} else {
					#line 2547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceDword)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(newValue));
					} else {
						#line 2550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceQword)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(newValue));
						}
					}
				}
			}
		} else {
			#line 2554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
			}
		}
		#else
		#line 2559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
		#endif
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValue, T>, "ElementType mismatch");
		#line 2570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2572 = buf; auto $for_iter_2572 = ADV_UFCS(Iterate)($for_init_2572.$ref()); while($for_iter_2572.$ref().MoveNext()) {
		auto& i = $for_iter_2572.$ref().GetCurrentRef(); {
			#line 2573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(i, oldValue)) {
				#line 2574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = newValue;
			}
		}}}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T> && Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
			#line 2587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val), ADV_UPCS(Length)(buf.$ref()));
		} else {
			#line 2588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2589 = buf; auto $for_iter_2589 = ADV_UFCS(Iterate)($for_init_2589.$ref()); while($for_iter_2589.$ref().MoveNext()) {
				auto& i = $for_iter_2589.$ref().GetCurrentRef(); {
					#line 2590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = val;
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TGenerator> auto Generate(TLeft&& $this , TGenerator&& generate)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TGeneratorReal = std::remove_cvref_t<TGenerator>;
		#line 2599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TGeneratorReal, GeneratorFunc<T>>, "TGenerator should be GeneratorFunc<T>");
		#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2602 = buf; auto $for_iter_2602 = ADV_UFCS(Iterate)($for_init_2602.$ref()); while($for_iter_2602.$ref().MoveNext()) {
		auto& i = $for_iter_2602.$ref().GetCurrentRef(); {
			#line 2603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			i = generate();
		}}}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(2U)) < 0) {
			#line 2614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 2618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsTriviallyCopyable<T>) {
			#line 2619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_USFCS((__Span$Protected::SpanHelpers), ReverseBytes)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
				#line 2621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ;
			} else {
				#line 2622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((__Span$Protected::SpanHelpers), ReverseWords)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
					#line 2624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				} else {
					#line 2625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((__Span$Protected::SpanHelpers), ReverseDwords)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
						#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					} else {
						#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS((__Span$Protected::SpanHelpers), ReverseQwords)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
							#line 2630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ;
						}
					}
				}
			}
		}
		#line 2634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_USFCS((__Span$Protected::SpanHelpers), ReverseGeneralCase)(buf);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Sort(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Sort available only for ISelfComparable types");
		#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(Sort)($this.$ref(), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto SortByDescending(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Sort available only for ISelfComparable types");
		#line 2650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(Sort)($this.$ref(), DefaultDescendingComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Sort(TLeft&& $this , TRight&& right)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::i32(2)) < 0) {
			#line 2662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TRightReal, IMutableSpanConvertible>()) {
			#line 2665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			using TKey = T;
			#line 2666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			using TValue = typename TRightReal::ElementType;
			#line 2667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<TKey, ISelfComparable>(), "Sort available only for ISelfComparable types");
			#line 2668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_UFCS(Sort)($this.$ref(), std::forward<decltype(right)>(right), DefaultComparator);
		} else {
			#line 2669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TRightReal, Comparator<T>>) {
				#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				try 
				{
					#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((__Span$Protected::SpanHelpers), Sort)(buf, right);
				} catch (const typename Builtin::IndexOutOfRangeException& e) 
				{
					#line 2673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Throw(Builtin::InvalidArgumentException{});
				} catch (...) 
				{
					#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::Throw(Builtin::InvalidOperationException{});
				}
			} else {
				#line 2677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TRight should be Comparator<T> or mutable array-like type");
				}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Sort(TLeft&& $this , TRight&& val, TComparer compare)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 2687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, IMutableSpanConvertible>(), "TRight should be a mutable array-like type");
		#line 2689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TKey = typename TLeftReal::ElementType;
		#line 2690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValue = typename TRightReal::ElementType;
		#line 2691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<TKey>>, "TComparer should be Comparator<T>");
		#line 2692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<TKey> keys = $this; 
		#line 2693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<TValue> values = val; 
		#line 2694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(keys.$ref()) <=> Builtin::i32(2)) < 0) {
			#line 2695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(Length)(keys.$ref()) != ADV_UPCS(Length)(values.$ref())) {
			#line 2698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		try 
		{
			#line 2701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((__Span$Protected::SpanHelpers), Sort)(keys, values, compare);
		} catch (const typename Builtin::IndexOutOfRangeException& e) 
		{
			#line 2703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		} catch (...) 
		{
			#line 2705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto RotateLeft(TLeft&& $this , Builtin::usize mid)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> span = $this; 
		#line 2716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((mid <=> ADV_UPCS(Length)(span.$ref())) > 0) {
			#line 2717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()) - mid)> k = ADV_UPCS(Length)(span.$ref()) - mid; 
		#line 2720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_USFCS((__Span$Protected::SpanHelpers), Rotate)(span, mid, k);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto RotateRight(TLeft&& $this , Builtin::usize k)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> span = $this; 
		#line 2730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((k <=> ADV_UPCS(Length)(span.$ref())) > 0) {
			#line 2731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()) - k)> mid = ADV_UPCS(Length)(span.$ref()) - k; 
		#line 2734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_USFCS((__Span$Protected::SpanHelpers), Rotate)(span, mid, k);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
namespace __Span$Protected {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		
	}

}