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
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_397_Span = Span<T>;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_397_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_397_Span<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_397_Span<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_397_Span<T> const& $this ) -> const Builtin::usize;
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_397_Span<T> const& $this ) -> const bool;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_397_Span<T> const& $this ) -> const typename $extension_Span_397_Span<T>::ReverseIterator;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_397_Span<T> const& $this ) -> const Span<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using $self = MutableSpan<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: Iterator() = default;
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		public: 
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] ReverseIterator final : public Builtin::RefStruct {
			public: using $self = ReverseIterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: ReverseIterator() = default;
			#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr explicit ReverseIterator(MutableSpan<T> span) noexcept;
			#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using SpanType = Span<T>;
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using MutableSpanType = $self;
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ImmutableType = Span<T>;
		public: MutableSpan() = default;
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Get(Builtin::usize index) const  -> const Builtin::Nullable<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start) const  -> const $self;
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Overlaps(const System::Span<T>& other) const noexcept -> const bool;
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self;
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val) const  -> const bool;
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Clear() const  -> void;
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::MutableRef<T> _data;
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_670_MutableSpan = MutableSpan<T>;
	#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_670_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_670_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_670_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_670_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>;
	template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_670_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_670_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } 
	#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_670_MutableSpan<T> const& $this ) -> const Builtin::usize;
	#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_670_MutableSpan<T> const& $this ) -> const bool;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_670_MutableSpan<T> const& $this ) -> const typename $extension_Span_670_MutableSpan<T>::ReverseIterator;
	#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_670_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getReversed;
using $extensions::getAsBytes;

	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::ISpanConvertible> = false;

namespace System {
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_2adf06fb9ba1e2e8 = requires { typename __AnyType::SpanType; };
	namespace $vtables {
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_ISpanConvertible
		{
			
		};
	}
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ISpanConvertible $vtable_ISpanConvertible_for = {};
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_ISpanConvertible = $HasAssociatedType_2adf06fb9ba1e2e8<__AnyType>;
	#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
	#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_d9e004e898fa60a8 = requires { typename __AnyType::MutableSpanType; };
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	ADV_CHECK_INTERFACE(ISpanConvertible, ISpanConvertible);
	namespace $vtables {
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_IMutableSpanConvertible : public ISpanConvertible::$vtable
		{
			
		};
	}
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IMutableSpanConvertible $vtable_IMutableSpanConvertible_for = {$vtable_ISpanConvertible_for<__AnyType>
		};
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_IMutableSpanConvertible = $ImplementsInterface_ISpanConvertible<__AnyType> && $HasAssociatedType_d9e004e898fa60a8<__AnyType>;
	#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_696_TLeft = TLeft;
	#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
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

		} namespace $extensions { using namespace System;
#line 1991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_1991_TLeft = TLeft;
	#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) ;
	} namespace System{
using $extensions::MoveTo;
using $extensions::Replace;
using $extensions::Replace;
using $extensions::Fill;
using $extensions::Reverse;

	namespace __Span$Protected { 
		#line 2112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct SpanHelpers : public Builtin::StaticClass {
			public: using $self = SpanHelpers;
			private: SpanHelpers() = default;
			#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool;
			#line 2158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool;
			#line 2171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool;
			#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool;
			#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool;
			#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize;
			#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize;
			#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize;
			#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize;
			#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize;
			#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
			#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 3999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto LastIndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 4362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void;
			#line 4370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceByte(System::MutableSpan<Builtin::u8> buf, Builtin::u8 oldValue, Builtin::u8 newValue)  -> void;
			#line 4383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceWord(System::MutableSpan<Builtin::u16> buf, Builtin::u16 oldValue, Builtin::u16 newValue)  -> void;
			#line 4396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceDword(System::MutableSpan<Builtin::u32> buf, Builtin::u32 oldValue, Builtin::u32 newValue)  -> void;
			#line 4409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReplaceQword(System::MutableSpan<Builtin::u64> buf, Builtin::u64 oldValue, Builtin::u64 newValue)  -> void;
			#line 4422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
			#line 4467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool;
			#line 4480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool;
			#line 4493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool;
			#line 4506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool;
			#line 4519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ReverseGeneralCase(System::MutableSpan<T> buf)  -> void;
			#line 4532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseBytes(System::MutableSpan<Builtin::u8> buf)  -> void;
			#line 4545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseWords(System::MutableSpan<Builtin::u16> buf)  -> void;
			#line 4558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseDwords(System::MutableSpan<Builtin::u32> buf)  -> void;
			#line 4571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ReverseQwords(System::MutableSpan<Builtin::u64> buf)  -> void;
			
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
template<class __TT> struct $static_IndexOfAnyInRangeDword;
template<class __TT> struct $static_getIndexOfAnyInRangeDword;
template<class __TT> struct $static_IndexOfAny;
template<class __TT> struct $static_getIndexOfAny;
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
template<class __TT> struct $static_AsSpan;
template<class __TT> struct $static_getAsSpan;
template<class __TT> struct $static_IndexOfAnyExceptInternal;
template<class __TT> struct $static_getIndexOfAnyExceptInternal;
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
template<class __TT> struct $static_IndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_CopyBlock;
template<class __TT> struct $static_getCopyBlock;
template<class __TT> struct $static_BinarySearch;
template<class __TT> struct $static_getBinarySearch;
template<class __TT> struct $static_Mismatch;
template<class __TT> struct $static_getMismatch;
template<class __TT> struct $static_IndexOfAnyExceptWord;
template<class __TT> struct $static_getIndexOfAnyExceptWord;
template<class __TT> struct $static_IndexOfGeneralCase;
template<class __TT> struct $static_getIndexOfGeneralCase;
template<class __TT> struct $static_IndexOfWord;
template<class __TT> struct $static_getIndexOfWord;
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
template<class __TT> struct $static_IndexOfAnyExceptByte;
template<class __TT> struct $static_getIndexOfAnyExceptByte;
template<class __TT> struct $static_IndexOfAnyExceptGeneralCase;
template<class __TT> struct $static_getIndexOfAnyExceptGeneralCase;
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
template<class __TT> struct $static_LastIndexOfAnyWord;
template<class __TT> struct $static_getLastIndexOfAnyWord;
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
template<class __TT> struct $static_ReverseGeneralCase;
template<class __TT> struct $static_getReverseGeneralCase;
template<class __TT> struct $static_NarrowToIsize;
template<class __TT> struct $static_getNarrowToIsize;
template<class __TT> struct $static_SliceUnchecked;
template<class __TT> struct $static_getSliceUnchecked;
template<class __TT> struct $static_Subtract;
template<class __TT> struct $static_getSubtract;
template<class __TT> struct $static_IsAddressLessThan;
template<class __TT> struct $static_getIsAddressLessThan;
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
template<class __TT> struct $static_Error;
template<class __TT> struct $static_getError;
template<class __TT> struct $static_LastIndexOfAny;
template<class __TT> struct $static_getLastIndexOfAny;
template<class __TT> struct $static_CountAny;
template<class __TT> struct $static_getCountAny;
template<class __TT> struct $static_Overlaps;
template<class __TT> struct $static_getOverlaps;
template<class __TT> struct $static_Reversed;
template<class __TT> struct $static_getReversed;
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
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard424{};
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data(__data__), 
	#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<$tparam$S, T>> arr) noexcept : 
	#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Get(Builtin::usize index) const  -> const Builtin::Nullable<T>
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((index <=> _length) >= 0) {
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, index);
	}
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start) const  -> const $self
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Overlaps(const System::Span<T>& other) const noexcept -> const bool
	{
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ADV_UPCS(IsEmpty)((*this).$ref()) || ADV_UPCS(IsEmpty)(other.$ref())) {
			#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> constSpan = (*this); 
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()))> offset = ADV_UFCS(NarrowToUsize)(Unsafe::ByteOffset(ADV_UFCS(GetDataReference)(constSpan.$ref()), ADV_UFCS(GetDataReference)(other.$ref())).$ref()); 
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return (offset <=> (_length * Builtin::usize(sizeof (T)))) < 0 || (offset <=> UnsafeCast<Builtin::usize>(-(Builtin::isize{ADV_UPCS(_length)(other.$ref()) * Builtin::usize(sizeof (T))}))) > 0;
	}
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==($self other) const noexcept -> const bool
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::Reset() noexcept -> void
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::ReverseIterator::ReverseIterator(MutableSpan<T> span) noexcept : 
	#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{_length}
	{
	}
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::MoveNext() noexcept -> const bool
	{
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_sub_mod)(_index, Builtin::usize(1U)); 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Reset() noexcept -> void
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = _length;
	}
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::GetCurrentRef() const  -> T&
	{
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self
	{
		T& data = __data__;
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{Builtin::MutableRef(data), length};
	}
#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Contains(const T& val) const  -> const bool
	{
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto MutableSpan<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Clear() const  -> void
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), Builtin::u8(0U), _length * Builtin::usize(sizeof (T)));
		} else {
			#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_652 = (*this); auto $for_iter_652 = ADV_UFCS(Iterate)($for_init_652.$ref()); while($for_iter_652.$ref().MoveNext()) {
				auto& i = $for_iter_652.$ref().GetCurrentRef(); {
					#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = T{};
				}}}
			}
		}
	}
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other);
	}
#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other, equals);
	}
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
namespace __Span$Protected {
		#line 2113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool
		{
			#line 2114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) == val) {
					#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val) {
					#line 2142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 2148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val) {
					#line 2151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 2155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
	}
namespace __Span$Protected {
		#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize
		{
			#line 2211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize count{}; 
			#line 2212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2212 = data; auto $for_iter_2212 = ADV_UFCS(Iterate)($for_init_2212.$ref()); while($for_iter_2212.$ref().MoveNext()) {
			auto&& i = $for_iter_2212.$ref().GetCurrent(); {
				#line 2213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 2214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++count;
				}
			}}}
			#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return count;
		}
	}
namespace __Span$Protected {
		#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 2336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 2340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) == val) {
					#line 2344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) == val) {
					#line 2348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) == val) {
					#line 2352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) == val) {
					#line 2356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 2371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 2375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 2379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 2388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 2454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 2455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 2456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 2457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 2460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 2461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 2463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(IndexOf)(ADV_UFCS(SliceUnchecked)(data.$ref(), index, remainingLength).$ref(), valueHead)) {
					{
						#line 2466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 2467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += relativeIndex;
					}
				} else {
					#line 2468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 2469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
				#line 2472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), index + Builtin::u32(1U), valueTailLength).$ref(), valueTail)) {
					#line 2473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 2487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2487 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_2487 = ADV_UFCS(Iterate)($for_init_2487.$ref()); while($for_iter_2487.$ref().MoveNext()) {
			auto&& i = $for_iter_2487.$ref().GetCurrent(); {
				#line 2488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 2489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2489 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_2489 = ADV_UFCS(Iterate)($for_init_2489.$ref()); while($for_iter_2489.$ref().MoveNext()) {
				auto&& j = $for_iter_2489.$ref().GetCurrent(); {
					#line 2490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
			#line 2495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 2579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 2667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2677 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_2677 = ADV_UFCS(Iterate)($for_init_2677.$ref()); while($for_iter_2677.$ref().MoveNext()) {
			auto&& i = $for_iter_2677.$ref().GetCurrent(); {
				#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 2680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 2683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 2801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2802 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_2802 = ADV_UFCS(Iterate)($for_init_2802.$ref()); while($for_iter_2802.$ref().MoveNext()) {{
			auto&& i = $for_iter_2802.$ref().GetCurrent(); {
				#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 2804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2804 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_2804 = ADV_UFCS(Iterate)($for_init_2804.$ref()); while($for_iter_2804.$ref().MoveNext()) {
				auto&& j = $for_iter_2804.$ref().GetCurrent(); {
					#line 2805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 2806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 2809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			} ADV_LOOP_LABELS(outer) }}}
			#line 2811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 2830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 2834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) != val) {
					#line 2838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) != val) {
					#line 2842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) != val) {
					#line 2846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) != val) {
					#line 2850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 2865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 2869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 2873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 3004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 3008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 3009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 3013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 3014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 3018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 3019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 3024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 3027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 3036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 3040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 3041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 3045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 3046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 3051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 3054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 3058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 3062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_3068 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_3068 = ADV_UFCS(Iterate)($for_init_3068.$ref()); while($for_iter_3068.$ref().MoveNext()) {
			auto&& i = $for_iter_3068.$ref().GetCurrent(); {
				#line 3069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 3070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 3074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 3353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 3357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 3361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) == val) {
					#line 3365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) == val) {
					#line 3369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) == val) {
					#line 3373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) == val) {
					#line 3377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) == val) {
					#line 3392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) == val) {
					#line 3396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) == val) {
					#line 3400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 3409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return dataLength;
			}
			#line 3475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 3476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 3477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 3478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueTailLength == Builtin::i32(0)) {
				#line 3479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UFCS(LastIndexOf)(data.$ref(), valueHead);
			}
			#line 3482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 3484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 3485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 3486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 3487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 3488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 3491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(remainingLength)>, false>({}, remainingLength)).$ref(), valueHead)) {
					{
						#line 3491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 3492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), relativeIndex + Builtin::i32(1), valueTailLength).$ref(), valueTail)) {
							#line 3493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return relativeIndex;
						}
						#line 3495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += remainingLength - relativeIndex;
					}
				} else {
					#line 3496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 3497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
			#line 3500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 3511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 3512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3512 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3512 = ADV_UFCS(Iterate)($for_init_3512.$ref()); while($for_iter_3512.$ref().MoveNext()) {
				auto&& j = $for_iter_3512.$ref().GetCurrent(); {
					#line 3513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
			#line 3518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 3548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 3553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 3558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 3563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 3602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 3636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 3641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 3646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 3651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 3690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 3700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 3701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 3702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 3705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 3818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 3819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 3820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 3823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{dataLength} - Builtin::i32(1))> i = Builtin::isize{dataLength} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) {
			{
				#line 3825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 3826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_3826 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_3826 = ADV_UFCS(Iterate)($for_init_3826.$ref()); while($for_iter_3826.$ref().MoveNext()) {
				auto&& j = $for_iter_3826.$ref().GetCurrent(); {
					#line 3827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 3828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 3831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			} ADV_LOOP_LABELS(outer) }
			#line 3833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 3848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 3852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 3856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U)) != val) {
					#line 3860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U)) != val) {
					#line 3864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U)) != val) {
					#line 3868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U)) != val) {
					#line 3872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)) != val) {
					#line 3887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)) != val) {
					#line 3891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)) != val) {
					#line 3895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 3904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 3912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 3913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 3914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 3915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 3917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 3938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 3942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 3943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 3947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 3948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 3952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 3953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 3958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 3961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 3962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 3964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 3970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 3974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 3975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 3979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 3980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 3985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 3988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 3989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 3990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 3991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 3992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 3994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 3996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 3999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(length - Builtin::u32(1U))> index = length - Builtin::u32(1U); 
			#line 4002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(4U));
				#line 4026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(4U);
				}
				#line 4030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(5U));
				#line 4031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(5U);
				}
				#line 4035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(6U));
				#line 4036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(6U);
				}
				#line 4040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(7U));
				#line 4041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(7U);
				}
				#line 4046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(8));
			}
			#line 4049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U));
				#line 4058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(1U);
				}
				#line 4062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U));
				#line 4063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(2U);
				}
				#line 4067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U));
				#line 4068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index - Builtin::u32(3U);
				}
				#line 4073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_mod_eq)(index, Builtin::i32(4));
			}
			#line 4076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 4079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 4080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 4082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_UFCS(_operator_sub_sub_mod)(index);
			}
			#line 4084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::LastIndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 4088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 4089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::i32(1))> i = Builtin::isize{length} - Builtin::i32(1); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 4090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i));
				#line 4091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 4092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
			#line 4095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 4362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReplaceGeneralCase(System::MutableSpan<T> buf, const T& oldValue, const T& newValue)  -> void
		{
			#line 4363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_4363 = buf; auto $for_iter_4363 = ADV_UFCS(Iterate)($for_init_4363.$ref()); while($for_iter_4363.$ref().MoveNext()) {
			auto& i = $for_iter_4363.$ref().GetCurrentRef(); {
				#line 4364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == oldValue) {
					#line 4365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = newValue;
				}
			}}}
		}
	}
namespace __Span$Protected {
		#line 4422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
		{
			#line 4423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 4424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 4425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 4426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 4428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7))) {
					#line 4437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 4443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 4444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 4446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3))) {
					#line 4451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 4457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 4458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 4459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset)) {
					#line 4460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 4462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 4464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
	}
namespace __Span$Protected {
		#line 4519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ReverseGeneralCase(System::MutableSpan<T> buf)  -> void
		{
			#line 4520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_ASSERT(((ADV_UPCS(Length)(buf.$ref()) <=> Builtin::u32(2U)) >= 0), "buf.Length>=2u");
			#line 4521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> first = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))); 
			#line 4522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::MutableRef<T> last = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U)))); 
			#line 4523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			do 
			#line 4523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 4524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(T{first})> tmp = T{first}; 
				#line 4525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = T{last};
				#line 4526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = tmp;
				#line 4527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				first = ADV_USFCS((Unsafe), Add)(first, Builtin::u32(1U));
				#line 4528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				last = ADV_USFCS((Unsafe), Subtract)(last, Builtin::u32(1U));
			} while (ADV_USFCS((Unsafe), IsAddressLessThan)(first, last));
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_397_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_397_Span<T> const & $this ) -> const Builtin::usize
	{
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_397_Span<T> const & $this ) -> const bool
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_397_Span<T> const & $this ) -> const typename $extension_Span_397_Span<T>::ReverseIterator
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_397_Span<T>::ReverseIterator;
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_397_Span<T> const & $this ) -> const Span<Builtin::u8>
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard407{};
			#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_670_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_670_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>
	{
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_670_MutableSpan<T> const & $this ) -> const Builtin::usize
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_670_MutableSpan<T> const & $this ) -> const bool
	{
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getReversed($extension_Span_670_MutableSpan<T> const & $this ) -> const typename $extension_Span_670_MutableSpan<T>::ReverseIterator
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TIterator = typename $extension_Span_670_MutableSpan<T>::ReverseIterator;
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_670_MutableSpan<T> const & $this ) -> const MutableSpan<Builtin::u8>
	{
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard680{};
			#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_714 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_714 = ADV_UFCS(Iterate)($for_init_714.$ref()); while($for_iter_714.$ref().MoveNext()) {
				auto&& i = $for_iter_714.$ref().GetCurrent(); {
					#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Binary search available only for comparable types. Use overload with custom comparator instead.");
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(BinarySearch)($this.$ref(), std::forward<decltype(val)>(val), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (length == Builtin::i32(0)) {
			#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return TResult::Err(Builtin::u32(0U));
		}
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize lo{}; 
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(length - Builtin::i32(1))> hi = length - Builtin::i32(1); 
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((lo <=> hi) <= 0) 
		{
			#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype((hi + lo) >> Builtin::i32(1))> index = (hi + lo) >> Builtin::i32(1); 
			#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::i32 cmp = compare(std::forward<decltype(val)>(val), ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, index)); 
			#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp__valid_753 = Builtin::Cast<false, std::decay_t<decltype(cmp)>::$self>(cmp);
				#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_753.IsValid() && Builtin::Is(*__tmp__valid_753, Builtin::i32(0)))  {
					#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const auto& cmp = *__tmp__valid_753;
					#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				else {
					#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if(__tmp__valid_753.IsValid() && Builtin::IsGreater(*__tmp__valid_753, Builtin::i32(0)))  {
						#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						const auto& cmp = *__tmp__valid_753;
						#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						lo = index + Builtin::i32(1);
					}
					else {
						#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						hi = index - Builtin::i32(1);
						
					}
				}
			}

		}
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TResult::Err(lo);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
			#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::usize(sizeof (T)))> size = Builtin::usize(sizeof (T));
			#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size))> index = ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size); 
			#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((index <=> length) < 0 || !isSameLength) {
				#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		} else {
			#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_789 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_789 = ADV_UFCS(Iterate)($for_init_789.$ref()); while($for_iter_789.$ref().MoveNext()) {
				auto&& i = $for_iter_789.$ref().GetCurrent(); {
					#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i)) {
						#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
				#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!isSameLength) {
					#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return length;
				}
			}
		}
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_817 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_817 = ADV_UFCS(Iterate)($for_init_817.$ref()); while($for_iter_817.$ref().MoveNext()) {
		auto&& i = $for_iter_817.$ref().GetCurrent(); {
			#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!isSameLength) {
			#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return length;
		}
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(span, valSpan);
		} else {
			#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::usize index{}; 
					#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_850 = span; auto $for_iter_850 = ADV_UFCS(Iterate)($for_init_850.$ref()); while($for_iter_850.$ref().MoveNext()) {
					auto&& i = $for_iter_850.$ref().GetCurrent(); {
						#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (i == val) {
							#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return index;
						}
						#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						++index;
					}}}
					#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize totalIndex{}; 
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(IndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false));
						#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return totalIndex + pos;
						}
						#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						totalIndex += pos + Builtin::u32(1U);
					}
				} else {
					#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_916 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_916 = ADV_UFCS(Iterate)($for_init_916.$ref()); while($for_iter_916.$ref().MoveNext()) {
				auto&& i = $for_iter_916.$ref().GetCurrent(); {
					#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val)) {
						#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			} else {
				#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_943 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(0))) {
							#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_943;
							return nullptr;
						}
						else {
							#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(1))) {
								#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_943;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(2))) {
									#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_943;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(3))) {
										#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_943;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(4))) {
											#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_943;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_943.IsValid() && Builtin::Is(*__tmp__valid_943, Builtin::i32(5))) {
												#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_943;
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
					#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_962 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(0))) {
								#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_962;
								return nullptr;
							}
							else {
								#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(1))) {
									#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_962;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(2))) {
										#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_962;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(3))) {
											#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_962;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(4))) {
												#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_962;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_962.IsValid() && Builtin::Is(*__tmp__valid_962, Builtin::i32(5))) {
													#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_962;
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
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
		} else {
			#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1028 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1028 = ADV_UFCS(Iterate)($for_init_1028.$ref()); while($for_iter_1028.$ref().MoveNext()) {
			auto&& i = $for_iter_1028.$ref().GetCurrent(); {
				#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1029 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1029 = ADV_UFCS(Iterate)($for_init_1029.$ref()); while($for_iter_1029.$ref().MoveNext()) {
				auto&& j = $for_iter_1029.$ref().GetCurrent(); {
					#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
		} else {
			#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1071 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1071 = ADV_UFCS(Iterate)($for_init_1071.$ref()); while($for_iter_1071.$ref().MoveNext()) {
			auto&& i = $for_iter_1071.$ref().GetCurrent(); {
				#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1119 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1119 = ADV_UFCS(Iterate)($for_init_1119.$ref()); while($for_iter_1119.$ref().MoveNext()) {
		auto&& i = $for_iter_1119.$ref().GetCurrent(); {
			#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1146 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(0))) {
							#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1146;
							return nullptr;
						}
						else {
							#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(1))) {
								#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1146;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(2))) {
									#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1146;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(3))) {
										#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1146;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(4))) {
											#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1146;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1146.IsValid() && Builtin::Is(*__tmp__valid_1146, Builtin::i32(5))) {
												#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1146;
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
					#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1165 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(0))) {
								#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1165;
								return nullptr;
							}
							else {
								#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(1))) {
									#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1165;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(2))) {
										#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1165;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(3))) {
											#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1165;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(4))) {
												#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1165;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1165.IsValid() && Builtin::Is(*__tmp__valid_1165, Builtin::i32(5))) {
													#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1165;
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
			#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1246 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1246 = ADV_UFCS(Iterate)($for_init_1246.$ref()); while($for_iter_1246.$ref().MoveNext()) {{
				auto&& i = $for_iter_1246.$ref().GetCurrent(); {
					#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1247 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1247 = ADV_UFCS(Iterate)($for_init_1247.$ref()); while($for_iter_1247.$ref().MoveNext()) {
					auto&& j = $for_iter_1247.$ref().GetCurrent(); {
						#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				} ADV_LOOP_LABELS(outer) }}}
			} else {
				#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1256 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1256 = ADV_UFCS(Iterate)($for_init_1256.$ref()); while($for_iter_1256.$ref().MoveNext()) {
					auto&& i = $for_iter_1256.$ref().GetCurrent(); {
						#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val1)) {
							#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return i;
						}
					}}}
				}
			}
		} else {
			#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1299 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1299 = ADV_UFCS(Iterate)($for_init_1299.$ref()); while($for_iter_1299.$ref().MoveNext()) {
			auto&& i = $for_iter_1299.$ref().GetCurrent(); {
				#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1347 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1347 = ADV_UFCS(Iterate)($for_init_1347.$ref()); while($for_iter_1347.$ref().MoveNext()) {
		auto&& i = $for_iter_1347.$ref().GetCurrent(); {
			#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfInternal)(span, valSpan);
		} else {
			#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)) == val) {
							#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
					#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto LastIndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_UPCS(Length)(span.$ref());
			}
			#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(LastIndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false)).$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return pos;
						}
						#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(pos)>, false>({}, pos));
					}
				} else {
					#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
				{
					#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val)) {
						#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}
			} else {
				#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1471 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(0))) {
							#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1471;
							return nullptr;
						}
						else {
							#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(1))) {
								#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1471;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(2))) {
									#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1471;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(3))) {
										#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1471;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(4))) {
											#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1471;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1471.IsValid() && Builtin::Is(*__tmp__valid_1471, Builtin::i32(5))) {
												#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1471;
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
					#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1490 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(0))) {
								#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1490;
								return nullptr;
							}
							else {
								#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(1))) {
									#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1490;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(2))) {
										#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1490;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(3))) {
											#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1490;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(4))) {
												#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1490;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1490.IsValid() && Builtin::Is(*__tmp__valid_1490, Builtin::i32(5))) {
													#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1490;
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
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInternal)(span, values);
		} else {
			#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1555 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1555 = ADV_UFCS(Iterate)($for_init_1555.$ref()); while($for_iter_1555.$ref().MoveNext()) {
				auto&& j = $for_iter_1555.$ref().GetCurrent(); {
					#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::Cast<true, Builtin::usize>(i);
					}
				}}}
			}
		} else {
			#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1664 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(0))) {
							#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1664;
							return nullptr;
						}
						else {
							#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(1))) {
								#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1664;
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(2))) {
									#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1664;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(3))) {
										#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1664;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(4))) {
											#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1664;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1664.IsValid() && Builtin::Is(*__tmp__valid_1664, Builtin::i32(5))) {
												#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1664;
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
					#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1683 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(0))) {
								#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1683;
								return nullptr;
							}
							else {
								#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(1))) {
									#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1683;
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(2))) {
										#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1683;
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(3))) {
											#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1683;
											return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(4))) {
												#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1683;
												return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1683.IsValid() && Builtin::Is(*__tmp__valid_1683, Builtin::i32(5))) {
													#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1683;
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
			#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) {
				{
					#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1762 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1762 = ADV_UFCS(Iterate)($for_init_1762.$ref()); while($for_iter_1762.$ref().MoveNext()) {
					auto&& j = $for_iter_1762.$ref().GetCurrent(); {
						#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				} ADV_LOOP_LABELS(outer) }
			} else {
				#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
					{
						#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)), val1)) {
							#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return Builtin::Cast<true, Builtin::usize>(i);
						}
					}
				}
			}
		} else {
			#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
			{
				#line 1812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
				#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Cast<true, Builtin::usize>(i);
				}
			}
		} else {
			#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), LastIndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto LastIndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::isize{length} - Builtin::u32(1U))> i = Builtin::isize{length} - Builtin::u32(1U); (i <=> Builtin::i32(0)) >= 0; --i) 
		{
			#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::Cast<true, Builtin::usize>(i)); 
			#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Cast<true, Builtin::usize>(i);
			}
		}
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values); 
		#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values);
		}
		#line 1882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TSpan, class TComparer> auto CountAny(TLeft&& $this LIFETIMEBOUND, TSpan&& val, TComparer equals)  -> const Builtin::usize requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TSpanReal = std::remove_cvref_t<TSpan>;
		#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparer, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TSpanReal, ISpanConvertible>(), "TSpan should be an array-like type");
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TSpanReal::ElementType>, "ElementType mismatch");
		#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> values = val; 
		#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UFCS(IndexOfAny)(span.$ref(), values, equals))> pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals); 
		#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while (pos) 
		{
			#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++count;
			#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange(((*(pos)) + Builtin::i32(1)), System::Index::End, false));
			#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			pos = ADV_UFCS(IndexOfAny)(span.$ref(), values, equals);
		}
		#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan);
				}
			}
		} else {
			#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) == val;
			} else {
				#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan, equals);
		} else {
			#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), val);
			} else {
				#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> spanLength) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan);
				}
			}
		} else {
			#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == val;
			} else {
				#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan, equals);
		} else {
			#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))), val);
			} else {
				#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this , TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 2000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> src = $this; 
		#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 2002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 2003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 2008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2009 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_2009 = ADV_UFCS(Iterate)($for_init_2009.$ref()); while($for_iter_2009.$ref().MoveNext()) {
				auto&& i = $for_iter_2009.$ref().GetCurrent(); {
					#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = std::move((ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i)));
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Replace available only for ISelfEquatable types");
		#line 2022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		#if ADV_VERSION_X86 || ADV_VERSION_ARM
		#line 2025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T>) {
			#line 2027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceByte)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(newValue));
			} else {
				#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceWord)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(newValue));
				} else {
					#line 2033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceDword)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(newValue));
					} else {
						#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceQword)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(oldValue), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(newValue));
						}
					}
				}
			}
		} else {
			#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
			}
		}
		#else
		#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((__Span$Protected::SpanHelpers), ReplaceGeneralCase)(buf, oldValue, newValue);
		#endif
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto Replace(TLeft&& $this , TValue&& oldValue, TValue&& newValue, TComparer equals)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValue, T>, "ElementType mismatch");
		#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_2058 = buf; auto $for_iter_2058 = ADV_UFCS(Iterate)($for_init_2058.$ref()); while($for_iter_2058.$ref().MoveNext()) {
		auto& i = $for_iter_2058.$ref().GetCurrentRef(); {
			#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(i, oldValue)) {
				#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				i = newValue;
			}
		}}}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto Fill(TLeft&& $this , TValue&& val)  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsBitwiseEquatable<T> && Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
			#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val), ADV_UPCS(Length)(buf.$ref()));
		} else {
			#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2075 = buf; auto $for_iter_2075 = ADV_UFCS(Iterate)($for_init_2075.$ref()); while($for_iter_2075.$ref().MoveNext()) {
				auto& i = $for_iter_2075.$ref().GetCurrentRef(); {
					#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					i = val;
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> auto Reverse(TLeft&& $this )  -> void requires(Builtin::TypeIs<TLeft, IMutableSpanConvertible>()) 
	{
		#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> buf = $this; 
		#line 2086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(buf.$ref()))> length = ADV_UPCS(Length)(buf.$ref()); 
		#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(2U)) < 0) {
			#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ;
		}
		#line 2091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsTriviallyCopyable<T>) {
			#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
				#line 2094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_USFCS((__Span$Protected::SpanHelpers), ReverseBytes)(MutableSpan<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
				#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ;
			} else {
				#line 2096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
					#line 2097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_USFCS((__Span$Protected::SpanHelpers), ReverseWords)(MutableSpan<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
					#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ;
				} else {
					#line 2099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
						#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						ADV_USFCS((__Span$Protected::SpanHelpers), ReverseDwords)(MutableSpan<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
						#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ;
					} else {
						#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
							#line 2103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							ADV_USFCS((__Span$Protected::SpanHelpers), ReverseQwords)(MutableSpan<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(buf.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))), length));
							#line 2104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ;
						}
					}
				}
			}
		}
		#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_USFCS((__Span$Protected::SpanHelpers), ReverseGeneralCase)(buf);
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
namespace __Span$Protected {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		
	}

}