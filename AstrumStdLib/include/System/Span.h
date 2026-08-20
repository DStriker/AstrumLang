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
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class Span; template<class T> friend class $Class_Span;
			public: Iterator() = default;
			#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(Span<T> span) noexcept;
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> const T&;
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::Ref<T> _ref;
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
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
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(const T& data, Builtin::usize length)  -> const $self;
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(System::Span<T> val) const  -> const bool;
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_349_Span = Span<T>;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_349_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_349_Span<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_349_Span<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_349_Span<T> const& $this ) -> const Builtin::usize;
	#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_349_Span<T> const& $this ) -> const bool;
	#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_349_Span<T> const& $this ) -> const Span<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getAsBytes;

	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using $self = MutableSpan<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: Iterator() = default;
			#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using SpanType = Span<T>;
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using MutableSpanType = $self;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ImmutableType = Span<T>;
		public: MutableSpan() = default;
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Get(Builtin::usize index) const  -> const Builtin::Nullable<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start) const  -> const $self;
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self;
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(const T& val, EqualityComparer<T> equals) const  -> const bool;
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val) const  -> const bool;
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline auto _operator_in(System::Span<T> val) const  -> const bool;
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool;
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(const T& val) const  -> const Builtin::usize;
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Count(System::Span<T> val) const  -> const Builtin::usize;
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize;
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto SequenceEquals(System::Span<T> other) const  -> const bool;
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API auto SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool;
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_eq_eq_mul(System::Span<T> other) const  -> const bool;
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::MutableRef<T> _data;
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_558_MutableSpan = MutableSpan<T>;
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_558_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_558_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T> inline constexpr auto AsSpan($proxy<$extension_Span_558_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_558_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>;
	template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_558_MutableSpan<T>> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } template<class T> inline constexpr auto AsMutableSpan($proxy<$extension_Span_558_MutableSpan<T>&> const& $this LIFETIMEBOUND)  -> const MutableSpan<T> { return AsMutableSpan($this.val); } 
	#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_558_MutableSpan<T> const& $this ) -> const Builtin::usize;
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_558_MutableSpan<T> const& $this ) -> const bool;
	#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_558_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>;
	} namespace System{
using $extensions::AsSpan;
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getAsBytes;

	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::ISpanConvertible> = false;

namespace System {
	#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_2adf06fb9ba1e2e8 = requires { typename __AnyType::SpanType; };
	namespace $vtables {
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_ISpanConvertible
		{
			
		};
	}
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_ISpanConvertible $vtable_ISpanConvertible_for = {};
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_ISpanConvertible = $HasAssociatedType_2adf06fb9ba1e2e8<__AnyType>;
	#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
	#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $HasAssociatedType_d9e004e898fa60a8 = requires { typename __AnyType::MutableSpanType; };
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	ADV_CHECK_INTERFACE(ISpanConvertible, ISpanConvertible);
	namespace $vtables {
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct $vtable_IMutableSpanConvertible : public ISpanConvertible::$vtable
		{
			
		};
	}
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> inline constexpr $vtables::$vtable_IMutableSpanConvertible $vtable_IMutableSpanConvertible_for = {$vtable_ISpanConvertible_for<__AnyType>
		};
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class __AnyType> concept $ImplementsInterface_IMutableSpanConvertible = $ImplementsInterface_ISpanConvertible<__AnyType> && $HasAssociatedType_d9e004e898fa60a8<__AnyType>;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
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
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft> using $extension_Span_580_TLeft = TLeft;
	#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) ;
	} namespace System{
using $extensions::CopyTo;
using $extensions::MoveTo;
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
using $extensions::StartsWith;
using $extensions::StartsWith;
using $extensions::EndsWith;
using $extensions::EndsWith;

	namespace __Span$Protected { 
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct SpanHelpers : public Builtin::StaticClass {
			public: using $self = SpanHelpers;
			private: SpanHelpers() = default;
			#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool;
			#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool;
			#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool;
			#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool;
			#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool;
			#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize;
			#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountBytes(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::usize;
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountWords(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::usize;
			#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountDwords(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::usize;
			#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto CountQwords(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::usize;
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
			#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptByte(System::Span<Builtin::u8> data, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptWord(System::Span<Builtin::u16> data, Builtin::u16 val1, Builtin::u16 val2, Builtin::u16 val3, Builtin::u16 val4, Builtin::u16 val5)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeByte(System::Span<Builtin::u8> data, Builtin::u8 start, Builtin::u8 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeWord(System::Span<Builtin::u16> data, Builtin::u16 start, Builtin::u16 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeDword(System::Span<Builtin::u32> data, Builtin::u32 start, Builtin::u32 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto IndexOfAnyExceptInRangeQword(System::Span<Builtin::u64> data, Builtin::u64 start, Builtin::u64 end)  -> const Builtin::Nullable<Builtin::usize>;
			#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: template<class T> static auto SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool;
			#line 2625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsByte(System::Span<Builtin::u8> lhs, System::Span<Builtin::u8> rhs)  -> const bool;
			#line 2638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsWord(System::Span<Builtin::u16> lhs, System::Span<Builtin::u16> rhs)  -> const bool;
			#line 2651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsDword(System::Span<Builtin::u32> lhs, System::Span<Builtin::u32> rhs)  -> const bool;
			#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: ASTRUMSTD_API static auto SequenceEqualsQword(System::Span<Builtin::u64> lhs, System::Span<Builtin::u64> rhs)  -> const bool;
			
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
template<class __TT> struct $static_IndexOfAnyExceptInRangeWord;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeWord;
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
template<class __TT> struct $static_CopyBlock;
template<class __TT> struct $static_getCopyBlock;
template<class __TT> struct $static_IndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeByte;
template<class __TT> struct $static_BinarySearch;
template<class __TT> struct $static_getBinarySearch;
template<class __TT> struct $static_Mismatch;
template<class __TT> struct $static_getMismatch;
template<class __TT> struct $static_IndexOfAnyExceptWord;
template<class __TT> struct $static_getIndexOfAnyExceptWord;
template<class __TT> struct $static_AsBytes;
template<class __TT> struct $static_getAsBytes;
template<class __TT> struct $static_IndexOfGeneralCase;
template<class __TT> struct $static_getIndexOfGeneralCase;
template<class __TT> struct $static_IndexOfWord;
template<class __TT> struct $static_getIndexOfWord;
template<class __TT> struct $static_IndexOfQword;
template<class __TT> struct $static_getIndexOfQword;
template<class __TT> struct $static_IsEmpty;
template<class __TT> struct $static_getIsEmpty;
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
template<class __TT> struct $static_IndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeDword;
template<class __TT> struct $static_IndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeQword;
template<class __TT> struct $static_IndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_getIndexOfAnyExceptInRangeGeneralCase;
template<class __TT> struct $static_IndexOfAnyExcept;
template<class __TT> struct $static_getIndexOfAnyExcept;
template<class __TT> struct $static_NarrowToIsize;
template<class __TT> struct $static_getNarrowToIsize;
template<class __TT> struct $static_SliceUnchecked;
template<class __TT> struct $static_getSliceUnchecked;
template<class __TT> struct $static_EqualsAny;
template<class __TT> struct $static_getEqualsAny;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_FirstSet;
template<class __TT> struct $static_getFirstSet;
template<class __TT> struct $static_ScalarMask;
template<class __TT> struct $static_getScalarMask;
template<class __TT> struct $static_LeadingZeros;
template<class __TT> struct $static_getLeadingZeros;
template<class __TT> struct $static_EqualsAll;
template<class __TT> struct $static_getEqualsAll;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_Error;
template<class __TT> struct $static_getError;
template<class __TT> struct $static_AsMutableSpan;
template<class __TT> struct $static_getAsMutableSpan;
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
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Iterator::Iterator(Span<T> span) noexcept : 
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::Reset() noexcept -> void
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrentRef() const  -> const T&
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterate() const  -> const typename Span<T>::Iterator
	{
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::UnsafeCreate(const T& data, Builtin::usize length)  -> const $self
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{data, length};
	}
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Contains(const T& val) const  -> const bool
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_157 = (*this); auto $for_iter_157 = ADV_UFCS(Iterate)($for_init_157.$ref()); while($for_iter_157.$ref().MoveNext()) {
			auto&& i = $for_iter_157.$ref().GetCurrent(); {
				#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
			}}}
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		} else {
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						} else {
							#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
							} else {
								#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
								}
							}
						}
					}
				} else {
					#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsGeneralCase)((*this), val);
					}
				}
				#else
				#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), ContainsGeneralCase)((*this), val);
				#endif
			}
		}
		return {};
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val, equals) != nullptr); 
	}
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val) != nullptr); 
	}
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto Span<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(IndexOf(val, equals) != nullptr); 
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize result{}; 
			#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_207 = (*this); auto $for_iter_207 = ADV_UFCS(Iterate)($for_init_207.$ref()); while($for_iter_207.$ref().MoveNext()) {
			auto&& i = $for_iter_207.$ref().GetCurrent(); {
				#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++result;
				}
			}}}
			#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return result;
		} else {
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), CountBytes)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), CountWords)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						} else {
							#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), CountDwords)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
							} else {
								#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), CountQwords)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
								}
							}
						}
					}
				} else {
					#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), CountGeneralCase)((*this), val);
					}
				}
				#else
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), CountGeneralCase)((*this), val);
				#endif
			}
		}
		return {};
	}
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize count{}; 
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_243 = (*this); auto $for_iter_243 = ADV_UFCS(Iterate)($for_init_243.$ref()); while($for_iter_243.$ref().MoveNext()) {
		auto&& i = $for_iter_243.$ref().GetCurrent(); {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(i, val)) {
				#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++count;
			}
		}}}
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return count;
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_254 = Builtin::Cast<false, std::decay_t<decltype(ADV_UPCS(Length)(val.$ref()))>::$self>(ADV_UPCS(Length)(val.$ref()));
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp__valid_254.IsValid() && Builtin::Is(*__tmp__valid_254, Builtin::u32(0U)))  {
				#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			else {
				#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_254.IsValid() && Builtin::Is(*__tmp__valid_254, Builtin::u32(1U)))  {
					#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Count(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
				}
				else {
					#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::usize count{}; 
						#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype((*this))> span = (*this); 
						#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(ADV_UFCS(IndexOf)(span.$ref(), val))> pos = ADV_UFCS(IndexOf)(span.$ref(), val); 
						#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						while (pos) 
						{
							#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							span = ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange(((*(pos)) + ADV_UPCS(Length)(val.$ref())), System::Index::End, false));
							#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							pos = ADV_UFCS(IndexOf)(span.$ref(), val);
							#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							++count;
						}
						#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return count;
					}
					
				}
			}
		}

		return {};
	}
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_273 = Builtin::Cast<false, std::decay_t<decltype(ADV_UPCS(Length)(val.$ref()))>::$self>(ADV_UPCS(Length)(val.$ref()));
			#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp__valid_273.IsValid() && Builtin::Is(*__tmp__valid_273, Builtin::u32(0U)))  {
				#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			else {
				#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_273.IsValid() && Builtin::Is(*__tmp__valid_273, Builtin::u32(1U)))  {
					#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Count(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals);
				}
				else {
					#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::usize count{}; 
						#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype((*this))> span = (*this); 
						#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						Builtin::Auto<decltype(ADV_UFCS(IndexOf)(span.$ref(), val, equals))> pos = ADV_UFCS(IndexOf)(span.$ref(), val, equals); 
						#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						while (pos) 
						{
							#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							span = ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange(((*(pos)) + ADV_UPCS(Length)(val.$ref())), System::Index::End, false));
							#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							pos = ADV_UFCS(IndexOf)(span.$ref(), val, equals);
							#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							++count;
						}
						#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return count;
					}
					
				}
			}
		}

		return {};
	}
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "SequenceEquals available only for ISelfEquatable types");
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((*this) == other) {
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_length != ADV_UPCS(_length)(other.$ref())) {
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_298 = System::Range<Builtin::Auto<decltype(_length)>, false>({}, _length); auto $for_iter_298 = ADV_UFCS(Iterate)($for_init_298.$ref()); while($for_iter_298.$ref().MoveNext()) {
			auto&& i = $for_iter_298.$ref().GetCurrent(); {
				#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i)) {
					#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		} else {
			#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
					} else {
						#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
						} else {
							#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
							} else {
								#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UPCS(_data)(other.$ref())), ADV_UPCS(_length)(other.$ref())));
								}
							}
						}
					}
				} else {
					#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsGeneralCase)((*this), other);
					}
				}
				#else
				#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsGeneralCase)((*this), other);
				#endif
			}
		}
		return {};
	}
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto Span<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((*this) == other) {
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (_length != ADV_UPCS(_length)(other.$ref())) {
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_338 = System::Range<Builtin::Auto<decltype(_length)>, false>({}, _length); auto $for_iter_338 = ADV_UFCS(Iterate)($for_init_338.$ref()); while($for_iter_338.$ref().MoveNext()) {
		auto&& i = $for_iter_338.$ref().GetCurrent(); {
			#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)((*this).$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(other.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(true);
	}
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard372{};
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data(__data__), 
	#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<$tparam$S, T>> arr) noexcept : 
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Get(Builtin::usize index) const  -> const Builtin::Nullable<T>
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((index <=> _length) >= 0) {
			#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, index);
	}
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start) const  -> const $self
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SliceUnchecked(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==($self other) const noexcept -> const bool
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::Reset() noexcept -> void
	{
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self
	{
		T& data = __data__;
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{Builtin::MutableRef(data), length};
	}
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Contains(const T& val) const  -> const bool
	{
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(const T& val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val) const  -> const bool
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val);
	}
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline auto MutableSpan<T>::_operator_in(System::Span<T> val) const  -> const bool
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Contains(System::Span<T> val, EqualityComparer<T> equals) const  -> const bool
	{
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Contains(val, equals);
	}
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(const T& val) const  -> const Builtin::usize
	{
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(const T& val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Count(System::Span<T> val) const  -> const Builtin::usize
	{
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val);
	}
#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::Count(System::Span<T> val, EqualityComparer<T> equals) const  -> const Builtin::usize
	{
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().Count(val, equals);
	}
#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::SequenceEquals(System::Span<T> other) const  -> const bool
	{
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other);
	}
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto MutableSpan<T>::SequenceEquals(System::Span<T> other, EqualityComparer<T> equals) const  -> const bool
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(AsSpan)((*this).$ref()).$ref().SequenceEquals(other, equals);
	}
#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_eq_eq_mul(System::Span<T> other) const  -> const bool
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(SequenceEquals(other)); 
	}
namespace __Span$Protected {
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::ContainsGeneralCase(System::Span<T> data, const T& val)  -> const bool
		{
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) == val) {
					#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val) {
					#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val) {
					#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
				#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		}
	}
namespace __Span$Protected {
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::CountGeneralCase(System::Span<T> data, T val)  -> const Builtin::usize
		{
			#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize count{}; 
			#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1451 = data; auto $for_iter_1451 = ADV_UFCS(Iterate)($for_init_1451.$ref()); while($for_iter_1451.$ref().MoveNext()) {
			auto&& i = $for_iter_1451.$ref().GetCurrent(); {
				#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					++count;
				}
			}}}
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return count;
		}
	}
namespace __Span$Protected {
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) == val) {
					#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) == val) {
					#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) == val) {
					#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) == val) {
					#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) == val) {
					#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) == val) {
					#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) == val) {
					#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) == val) {
					#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)))> valueHead = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)))> valueTail = ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)); 
			#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(valueLength - Builtin::u32(1U))> valueTailLength = valueLength - Builtin::u32(1U); 
			#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			for (;;) 
			{
				#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT(((index <=> dataLength) <= 0), "index<=dataLength");
				#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength))> remainingLength = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(dataLength, index), valueTailLength); 
				#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((ADV_UFCS(NarrowToIsize)(remainingLength.$ref()) <=> Builtin::i32(0)) <= 0) {
					#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					break;
				}
				#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto relativeIndex = ADV_UFCS(IndexOf)(ADV_UFCS(SliceUnchecked)(data.$ref(), index, remainingLength).$ref(), valueHead)) {
					{
						#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *relativeIndex; const auto& relativeIndex = __tmp0;
						
						#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						index += relativeIndex;
					}
				} else {
					#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
				#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(SequenceEquals)(ADV_UFCS(SliceUnchecked)(data.$ref(), index + Builtin::u32(1U), valueTailLength).$ref(), valueTail)) {
					#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1726 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_1726 = ADV_UFCS(Iterate)($for_init_1726.$ref()); while($for_iter_1726.$ref().MoveNext()) {
			auto&& i = $for_iter_1726.$ref().GetCurrent(); {
				#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1728 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_1728 = ADV_UFCS(Iterate)($for_init_1728.$ref()); while($for_iter_1728.$ref().MoveNext()) {
				auto&& j = $for_iter_1728.$ref().GetCurrent(); {
					#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
			#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 1788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2) {
					#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 1837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 1903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup == val1 || lookup == val2 || lookup == val3) {
					#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1916 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1916 = ADV_UFCS(Iterate)($for_init_1916.$ref()); while($for_iter_1916.$ref().MoveNext()) {
			auto&& i = $for_iter_1916.$ref().GetCurrent(); {
				#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInternal(System::Span<T> data, System::Span<T> val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> dataLength = ADV_UPCS(Length)(data.$ref()); 
			#line 2035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(val.$ref()))> valueLength = ADV_UPCS(Length)(val.$ref()); 
			#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (valueLength == Builtin::i32(0)) {
				#line 2037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return nullptr;
			}
			#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2041 = System::Range<Builtin::Auto<decltype(dataLength)>, false>({}, dataLength); auto $for_iter_2041 = ADV_UFCS(Iterate)($for_init_2041.$ref()); while($for_iter_2041.$ref().MoveNext()) {{
			auto&& i = $for_iter_2041.$ref().GetCurrent(); {
				#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i))> candidate = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i); 
				#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_2043 = System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength); auto $for_iter_2043 = ADV_UFCS(Iterate)($for_init_2043.$ref()); while($for_iter_2043.$ref().MoveNext()) {
				auto&& j = $for_iter_2043.$ref().GetCurrent(); {
					#line 2044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (candidate == ADV_UFCS(_operator_subscript)(val.$ref(), Builtin::UncheckedTag{}, j)) {
						#line 2045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						goto CONTINUE_outer;
					}
				}}}
				#line 2048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			} ADV_LOOP_LABELS(outer) }}}
			#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 2065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U)) != val) {
					#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U)) != val) {
					#line 2081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U)) != val) {
					#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U)) != val) {
					#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != val) {
					#line 2104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != val) {
					#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != val) {
					#line 2112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index) != val) {
					#line 2121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2) {
					#line 2209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptGeneralCase(System::Span<T> data, const T& val1, const T& val2, const T& val3)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(4U));
				#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(4U);
				}
				#line 2247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(5U));
				#line 2248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(5U);
				}
				#line 2252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(6U));
				#line 2253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(6U);
				}
				#line 2257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(7U));
				#line 2258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(7U);
				}
				#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(8);
			}
			#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U));
				#line 2275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U));
				#line 2280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 2284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U));
				#line 2285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 2290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::i32(4);
			}
			#line 2293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index))> lookup = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, index); 
				#line 2296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (lookup != val1 && lookup != val2 && lookup != val3) {
					#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 2299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++index;
			}
			#line 2301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::IndexOfAnyExceptInRangeGeneralCase(System::Span<T> data, const T& start, const T& end)  -> const Builtin::Nullable<Builtin::usize>
		{
			#line 2305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
			#line 2306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize index{}; 
			#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_2307 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_2307 = ADV_UFCS(Iterate)($for_init_2307.$ref()); while($for_iter_2307.$ref().MoveNext()) {
			auto&& i = $for_iter_2307.$ref().GetCurrent(); {
				#line 2308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& current = ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i);
				#line 2309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(end)>, true>(start, end), current)) {
					#line 2310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
			#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return nullptr;
		}
	}
namespace __Span$Protected {
		#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		template<class T> auto SpanHelpers::SequenceEqualsGeneralCase(System::Span<T> lhs, System::Span<T> rhs)  -> const bool
		{
			#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Auto<decltype(ADV_UPCS(Length)(lhs.$ref()))> length = ADV_UPCS(Length)(lhs.$ref()); 
			#line 2582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::i32 offset{}; 
			#line 2583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(8U)) >= 0) 
			{
				#line 2584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(8U);
				#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7))) {
					#line 2595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 2598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(8);
			}
			#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::u32(4U)) >= 0) 
			{
				#line 2602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				length -= Builtin::u32(4U);
				#line 2604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) || ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3))) {
					#line 2609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 2612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				offset += Builtin::i32(4);
			}
			#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((length <=> Builtin::i32(0)) > 0) 
			{
				#line 2616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				--length;
				#line 2617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(lhs.$ref(), Builtin::UncheckedTag{}, offset) != ADV_UFCS(_operator_subscript)(rhs.$ref(), Builtin::UncheckedTag{}, offset)) {
					#line 2618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(false);
				}
				#line 2620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				++offset;
			}
			#line 2622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_349_Span<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_349_Span<T> const & $this ) -> const Builtin::usize
	{
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_349_Span<T> const & $this ) -> const bool
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_349_Span<T> const & $this ) -> const Span<Builtin::u8>
	{
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard355{};
			#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsSpan($extension_Span_558_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_558_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>
	{
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_558_MutableSpan<T> const & $this ) -> const Builtin::usize
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_558_MutableSpan<T> const & $this ) -> const bool
	{
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_558_MutableSpan<T> const & $this ) -> const MutableSpan<Builtin::u8>
	{
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard564{};
			#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto CopyTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_598 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_598 = ADV_UFCS(Iterate)($for_init_598.$ref()); while($for_iter_598.$ref().MoveNext()) {
				auto&& i = $for_iter_598.$ref().GetCurrent(); {
					#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i);
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TDest> auto MoveTo(TLeft&& $this LIFETIMEBOUND, TDest&& dest)  -> void requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TDestReal = std::remove_cvref_t<TDest>;
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TDestReal, IMutableSpanConvertible>(), "TDest should be mutable array-like type");
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TDestReal::ElementType>, "ElementType mismatch");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> src = $this; 
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<T> dst = dest; 
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((ADV_UPCS(Length)(src.$ref()) <=> ADV_UPCS(Length)(dst.$ref())) > 0) {
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::IsTriviallyCopyable<T>) {
			#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			ADV_USFCS((Unsafe), CopyBlock)(ADV_UFCS(GetDataReference)(dst.$ref()), ADV_UFCS(GetDataReference)(src.$ref()), ADV_UPCS(Length)(src.$ref()) * Builtin::usize(sizeof (T)));
		} else {
			#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_621 = System::Range<Builtin::Auto<decltype(ADV_UPCS(Length)(src.$ref()))>, false>({}, ADV_UPCS(Length)(src.$ref())); auto $for_iter_621 = ADV_UFCS(Iterate)($for_init_621.$ref()); while($for_iter_621.$ref().MoveNext()) {
				auto&& i = $for_iter_621.$ref().GetCurrent(); {
					#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					ADV_UFCS(_operator_subscript)(dst.$ref(), Builtin::UncheckedTag{}, i) = std::move((ADV_UFCS(_operator_subscript)(src.$ref(), Builtin::UncheckedTag{}, i)));
				}}}
			}
		}
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Binary search available only for comparable types. Use overload with custom comparator instead.");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(BinarySearch)($this.$ref(), std::forward<decltype(val)>(val), DefaultComparator);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto BinarySearch(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer compare)  -> const Result<Builtin::usize, Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TValueReal, T>, "ElementType mismatch");
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, Comparator<T>>, "TComparer should be Comparator<T>");
		#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (length == Builtin::i32(0)) {
			#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return TResult::Err(Builtin::u32(0U));
		}
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize lo{}; 
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(length - Builtin::i32(1))> hi = length - Builtin::i32(1); 
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((lo <=> hi) <= 0) 
		{
			#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype((hi + lo) >> Builtin::i32(1))> index = (hi + lo) >> Builtin::i32(1); 
			#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::i32 cmp = compare(std::forward<decltype(val)>(val), ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, index)); 
			#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp__valid_659 = Builtin::Cast<false, std::decay_t<decltype(cmp)>::$self>(cmp);
				#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if(__tmp__valid_659.IsValid() && Builtin::Is(*__tmp__valid_659, Builtin::i32(0)))  {
					#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const auto& cmp = *__tmp__valid_659;
					#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				else {
					#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if(__tmp__valid_659.IsValid() && Builtin::IsGreater(*__tmp__valid_659, Builtin::i32(0)))  {
						#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						const auto& cmp = *__tmp__valid_659;
						#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						lo = index + Builtin::i32(1);
					}
					else {
						#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						hi = index - Builtin::i32(1);
						
					}
				}
			}

		}
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return TResult::Err(lo);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight&& otherArray)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
			#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(Builtin::usize(sizeof (T)))> size = Builtin::usize(sizeof (T));
			#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size))> index = ADV_UFCS(_operator_bsl)(ADV_USFCS((__Span$Protected::SpanHelpers), Mismatch)(ADV_UPCS(AsBytes)(spanLeft.$ref()), ADV_UPCS(AsBytes)(spanRight.$ref()), length * size), size); 
			#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((index <=> length) < 0 || !isSameLength) {
				#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index;
			}
		} else {
			#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_695 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_695 = ADV_UFCS(Iterate)($for_init_695.$ref()); while($for_iter_695.$ref().MoveNext()) {
				auto&& i = $for_iter_695.$ref().GetCurrent(); {
					#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i) != ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i)) {
						#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
				#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (!isSameLength) {
					#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return length;
				}
			}
		}
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TRight, class TComparer> auto Mismatch(TLeft&& $this LIFETIMEBOUND, TRight otherArray, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TRightReal = std::remove_cvref_t<TRight>;
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<TRightReal, ISpanConvertible>(), "TRight should be array-like type");
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::is_same_v<T, typename TRightReal::ElementType>, "ElementType mismatch");
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanLeft = $this; 
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> spanRight = otherArray; 
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()))> isSameLength = ADV_UPCS(Length)(spanLeft.$ref()) == ADV_UPCS(Length)(spanRight.$ref()); 
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())))> length = ADV_UFCS(Min)(ADV_UPCS(Length)(spanLeft.$ref()).$ref(), ADV_UPCS(Length)(spanRight.$ref())); 
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_723 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_723 = ADV_UFCS(Iterate)($for_init_723.$ref()); while($for_iter_723.$ref().MoveNext()) {
		auto&& i = $for_iter_723.$ref().GetCurrent(); {
			#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (!equals(ADV_UFCS(_operator_subscript)(spanLeft.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(spanRight.$ref(), Builtin::UncheckedTag{}, i))) {
				#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!isSameLength) {
			#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return length;
		}
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			System::Span<T> valSpan = val; 
			#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(ADV_UPCS(AsBytes)(span.$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
				} else {
					#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(span.$ref())), ADV_UPCS(Length)(span.$ref())), Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(GetDataReference)(valSpan.$ref())), ADV_UPCS(Length)(valSpan.$ref())));
					}
				}
			}
			#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfInternal)(span, valSpan);
		} else {
			#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (std::is_constant_evaluated()) {
					#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					Builtin::usize index{}; 
					#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_756 = span; auto $for_iter_756 = ADV_UFCS(Iterate)($for_init_756.$ref()); while($for_iter_756.$ref().MoveNext()) {
					auto&& i = $for_iter_756.$ref().GetCurrent(); {
						#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (i == val) {
							#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return index;
						}
						#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						++index;
					}}}
					#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return nullptr;
				} else {
					#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						#if ADV_VERSION_X86 || ADV_VERSION_ARM
						#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::IsBitwiseEquatable<T>) {
							#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
								#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
							} else {
								#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
									#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
								} else {
									#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
										#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
									} else {
										#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
											#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
										}
									}
								}
							}
						} else {
							#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							{
								#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
							}
						}
						#else
						#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfGeneralCase)(span, val);
						#endif
					}
				}
			} else {
				#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto IndexOf(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<T> span = $this; 
		#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UPCS(Length)(valSpan.$ref()) == Builtin::u32(0U)) {
				#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::u32(0U);
			}
			#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::usize totalIndex{}; 
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while (!ADV_UPCS(IsEmpty)(span.$ref())) 
			{
				#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (const auto pos = ADV_UFCS(IndexOf)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), equals)) {
					{
						#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp0 = *pos; const auto& pos = __tmp0;
						
						#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						span = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, System::IndexRange((pos + Builtin::u32(1U)), System::Index::End, false));
						#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (ADV_UFCS(StartsWith)(span.$ref(), ADV_UFCS(_operator_subscript)(valSpan.$ref(), Builtin::UncheckedTag{}, System::IndexRange(Builtin::u32(1U), System::Index::End, false)), equals)) {
							#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return totalIndex + pos;
						}
						#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						totalIndex += pos + Builtin::u32(1U);
					}
				} else {
					#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						break;
					}
				}
			}
		} else {
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_822 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_822 = ADV_UFCS(Iterate)($for_init_822.$ref()); while($for_iter_822.$ref().MoveNext()) {
				auto&& i = $for_iter_822.$ref().GetCurrent(); {
					#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val)) {
						#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			} else {
				#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
			#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_849 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(0))) {
							#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_849;
							return nullptr;
						}
						else {
							#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(1))) {
								#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_849;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(2))) {
									#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_849;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(3))) {
										#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_849;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(4))) {
											#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_849;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_849.IsValid() && Builtin::Is(*__tmp__valid_849, Builtin::i32(5))) {
												#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_849;
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
					#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_868 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(0))) {
								#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_868;
								return nullptr;
							}
							else {
								#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(1))) {
									#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_868;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(2))) {
										#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_868;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(3))) {
											#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_868;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(4))) {
												#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_868;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_868.IsValid() && Builtin::Is(*__tmp__valid_868, Builtin::i32(5))) {
													#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_868;
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
			#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInternal)(span, values);
		} else {
			#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
				#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
				#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
					} else {
						#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
								}
							}
						}
					}
				} else {
					#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
					}
				}
			} else {
				#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "val should be inclusive range or array-like type");
				}
			}
		}
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(Builtin::TypeIs<T1Real, ISpanConvertible>(), "T1 should be an array-like type");
			#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
			#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val1; 
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_934 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_934 = ADV_UFCS(Iterate)($for_init_934.$ref()); while($for_iter_934.$ref().MoveNext()) {
			auto&& i = $for_iter_934.$ref().GetCurrent(); {
				#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_935 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_935 = ADV_UFCS(Iterate)($for_init_935.$ref()); while($for_iter_935.$ref().MoveNext()) {
				auto&& j = $for_iter_935.$ref().GetCurrent(); {
					#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
						#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return i;
					}
				}}}
			}}}
		} else {
			#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2);
			} else {
				#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_977 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_977 = ADV_UFCS(Iterate)($for_init_977.$ref()); while($for_iter_977.$ref().MoveNext()) {
			auto&& i = $for_iter_977.$ref().GetCurrent(); {
				#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (val3(val, val1) || val3(val, val2)) {
					#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1025 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1025 = ADV_UFCS(Iterate)($for_init_1025.$ref()); while($for_iter_1025.$ref().MoveNext()) {
		auto&& i = $for_iter_1025.$ref().GetCurrent(); {
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (equals(val, val1) || equals(val, val2) || equals(val, val3)) {
				#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAny(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAny)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValues> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, TValues&& val)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValuesReal = std::remove_cvref_t<TValues>;
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (Builtin::TypeIs<TValuesReal, ISpanConvertible>()) {
			#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::is_same_v<T, typename TValuesReal::ElementType>, "ElementType mismatch");
			#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> values = val; 
			#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
			#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
				#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
					#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						auto __tmp__valid_1052 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
						#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(0))) {
							#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							const auto& valuesLength = *__tmp__valid_1052;
							return nullptr;
						}
						else {
							#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(1))) {
								#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1052;
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
							}
							else {
								#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(2))) {
									#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1052;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
								}
								else {
									#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(3))) {
										#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1052;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
									}
									else {
										#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(4))) {
											#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1052;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
										}
										else {
											#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1052.IsValid() && Builtin::Is(*__tmp__valid_1052, Builtin::i32(5))) {
												#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1052;
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
					#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
						#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return [&]() -> Builtin::Nullable<Builtin::usize> 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							auto __tmp__valid_1071 = Builtin::Cast<false, std::decay_t<decltype(valuesLength)>::$self>(valuesLength);
							#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(0))) {
								#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								const auto& valuesLength = *__tmp__valid_1071;
								return nullptr;
							}
							else {
								#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(1))) {
									#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									const auto& valuesLength = *__tmp__valid_1071;
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))));
								}
								else {
									#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(2))) {
										#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										const auto& valuesLength = *__tmp__valid_1071;
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))));
									}
									else {
										#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(3))) {
											#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											const auto& valuesLength = *__tmp__valid_1071;
											return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))));
										}
										else {
											#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
											if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(4))) {
												#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												const auto& valuesLength = *__tmp__valid_1071;
												return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3))));
											}
											else {
												#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
												if(__tmp__valid_1071.IsValid() && Builtin::Is(*__tmp__valid_1071, Builtin::i32(5))) {
													#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
													const auto& valuesLength = *__tmp__valid_1071;
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
			#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInternal)(span, values);
		} else {
			#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValuesReal, T>) {
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						}
					}
				}
				#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val);
			} else {
				#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::is_same_v<TValuesReal, Range<T, Builtin::Boolean(true)>>) {
					#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::TypeIs<T, ISelfComparable>(), "Search values in range is available only for ISelfComparable types");
					#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
					#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
						#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
							#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(ADV_UFCS(GetEnd)(val.$ref())));
						} else {
							#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
								#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(ADV_UFCS(GetEnd)(val.$ref())));
							} else {
								#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
									#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(ADV_UFCS(GetEnd)(val.$ref())));
								} else {
									#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
										#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
										return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetStart)(val.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(ADV_UFCS(GetEnd)(val.$ref())));
									}
								}
							}
						}
					} else {
						#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						{
							#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptInRangeGeneralCase)(span, ADV_UPCS(Start)(val.$ref()), ADV_UPCS(End)(val.$ref()));
						}
					}
				} else {
					#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						static_assert(Builtin::Boolean(false), "val should be ElementType or array-like type");
					}
				}
			}
		}
		#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val)>(val)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T2Real, EqualityComparer<T>>) {
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::TypeIs<T1Real, ISpanConvertible>()) {
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::is_same_v<T, typename T1Real::ElementType>, "ElementType mismatch");
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const System::Span<T> values = val1; 
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UPCS(Length)(values.$ref()))> valuesLength = ADV_UPCS(Length)(values.$ref()); 
				#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{ auto $for_init_1152 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1152 = ADV_UFCS(Iterate)($for_init_1152.$ref()); while($for_iter_1152.$ref().MoveNext()) {{
				auto&& i = $for_iter_1152.$ref().GetCurrent(); {
					#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1153 = System::Range<Builtin::Auto<decltype(valuesLength)>, false>({}, valuesLength); auto $for_iter_1153 = ADV_UFCS(Iterate)($for_init_1153.$ref()); while($for_iter_1153.$ref().MoveNext()) {
					auto&& j = $for_iter_1153.$ref().GetCurrent(); {
						#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(values.$ref(), Builtin::UncheckedTag{}, j))) {
							#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							goto CONTINUE_outer;
						}
					}}}
					#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				} ADV_LOOP_LABELS(outer) }}}
			} else {
				#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (std::convertible_to<T1Real, T>) {
					#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
					#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{ auto $for_init_1162 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1162 = ADV_UFCS(Iterate)($for_init_1162.$ref()); while($for_iter_1162.$ref().MoveNext()) {
					auto&& i = $for_iter_1162.$ref().GetCurrent(); {
						#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if (!val2(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i), val1)) {
							#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return i;
						}
					}}}
				}
			}
		} else {
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T2Real, T>) {
				#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2));
					} else {
						#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2));
						}
					}
				}
				#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2);
			} else {
				#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1 should be ElementType or Span<ElementType>");
				}
			}
		}
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<T3Real, EqualityComparer<T>>) {
			#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
			#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
			#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
			#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_1205 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1205 = ADV_UFCS(Iterate)($for_init_1205.$ref()); while($for_iter_1205.$ref().MoveNext()) {
			auto&& i = $for_iter_1205.$ref().GetCurrent(); {
				#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
				#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((!val3(val, val1)) && (!val3(val, val2))) {
					#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return i;
				}
			}}}
		} else {
			#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<T3Real, T>) {
				#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
				#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
				#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
				#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				constexpr Builtin::Auto<decltype(ADV_VERSION_X86 || ADV_VERSION_ARM)> simdSupported = ADV_VERSION_X86 || ADV_VERSION_ARM;
				#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (simdSupported && Builtin::IsBitwiseEquatable<T>) {
					#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val3));
					} else {
						#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UPCS(Length)(span.$ref())), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val1), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val2), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val3));
						}
					}
				}
				#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((__Span$Protected::SpanHelpers), IndexOfAnyExceptGeneralCase)(span, val1, val2, val3);
			} else {
				#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "T1, T2, T3 should be ElementType");
				}
			}
		}
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3)) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> auto IndexOfAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const Builtin::Nullable<Builtin::usize> requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T1Real = std::remove_cvref_t<T1>;
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T2Real = std::remove_cvref_t<T2>;
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T3Real = std::remove_cvref_t<T3>;
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T4Real = std::remove_cvref_t<TComparer>;
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T1Real, T>, "ElementType mismatch");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T2Real, T>, "ElementType mismatch");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T3Real, T>, "ElementType mismatch");
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<T4Real, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> length = ADV_UPCS(Length)(span.$ref()); 
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{ auto $for_init_1253 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_1253 = ADV_UFCS(Iterate)($for_init_1253.$ref()); while($for_iter_1253.$ref().MoveNext()) {
		auto&& i = $for_iter_1253.$ref().GetCurrent(); {
			#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i))> val = ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, i); 
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((!equals(val, val1)) && (!equals(val, val2)) && (!equals(val, val3))) {
				#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return i;
			}
		}}}
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class T1, class T2, class T3, class TComparer> inline auto ContainsAnyExcept(TLeft&& $this LIFETIMEBOUND, T1&& val1, T2&& val2, T3&& val3, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOfAnyExcept)($this.$ref(), std::forward<decltype(val1)>(val1), std::forward<decltype(val2)>(val2), std::forward<decltype(val3)>(val3), equals) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan);
				}
			}
		} else {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) == val;
			} else {
				#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto StartsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> ADV_UPCS(Length)(span.$ref())) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::Range<Builtin::Auto<decltype(valueLength)>, false>({}, valueLength)).$ref(), valSpan, equals);
		} else {
			#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)), val);
			} else {
				#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue> inline constexpr auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (Builtin::IsBitwiseEquatable<T>) {
				#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return (valueLength <=> spanLength) <= 0 && ADV_USFCS((__Span$Protected::SpanHelpers), SequenceEqualsByte)(ADV_UPCS(AsBytes)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref()), ADV_UPCS(AsBytes)(valSpan.$ref()));
			} else {
				#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan);
				}
			}
		} else {
			#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == val;
			} else {
				#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class TLeft, class TValue, class TComparer> auto EndsWith(TLeft&& $this LIFETIMEBOUND, TValue&& val, TComparer equals)  -> const bool requires(Builtin::TypeIs<TLeft, ISpanConvertible>()) 
	{
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TLeftReal = std::remove_cvref_t<TLeft>;
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TValueReal = std::remove_cvref_t<TValue>;
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TComparerReal = std::remove_cvref_t<TComparer>;
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using T = typename TLeftReal::ElementType;
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(std::convertible_to<TComparerReal, EqualityComparer<T>>, "TComparer should be EqualityComparer<T>");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::Span<T> span = $this; 
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if constexpr (std::convertible_to<TValueReal, Span<T>>) {
			#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const System::Span<T> valSpan = val; 
			#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(valSpan.$ref()))> valueLength = ADV_UPCS(Length)(valSpan.$ref()); 
			#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Length)(span.$ref()))> spanLength = ADV_UPCS(Length)(span.$ref()); 
			#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return (valueLength <=> spanLength) <= 0 && ADV_UFCS(SequenceEquals)(ADV_UFCS(_operator_subscript)(span.$ref(), System::IndexRange((spanLength - valueLength), System::Index::End, false)).$ref(), valSpan, equals);
		} else {
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if constexpr (std::convertible_to<TValueReal, T>) {
				#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return !ADV_UPCS(IsEmpty)(span.$ref()) && equals(ADV_UFCS(_operator_subscript)(span.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_xor)(Builtin::u32(1U))), val);
			} else {
				#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				{
					#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					static_assert(Builtin::Boolean(false), "TValue should be ElementType or Span<ElementType>");
				}
			}
		}
		return {};
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
namespace __Span$Protected {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		
	}

}