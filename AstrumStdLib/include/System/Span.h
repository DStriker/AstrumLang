#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Range.h"
#include "System/Runtime/CompilerServices/Unsafe.h"
using namespace System::Runtime::CompilerServices;

namespace System {
namespace __Unsafe {} namespace __Span$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class Span;
template<class T> class MutableSpan;
class SpanHelpers;
//###############################################################################
//# Type definitions
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] Span final : public Builtin::RefStruct {
		public: using $self = Span<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class Span; template<class T> friend class $Class_Span;
			public: Iterator() = default;
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(Span<T> span) noexcept;
			#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> const T&;
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::Ref<T> _ref;
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		public: Span() = default;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr  Span(MutableSpan<T> span) noexcept;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length) ;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr Span(const T& data, Builtin::usize length) noexcept;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  Span(const Builtin::InlineArray<S, T>& arr) noexcept;
		public: inline constexpr const T& getAt(Builtin::i32 index);
		inline constexpr const T& getAt(Builtin::i32 index) const;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  LIFETIMEBOUND -> const T&;
		public: inline constexpr const T& getAt(Index index);
		inline constexpr const T& getAt(Index index) const;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index) const  LIFETIMEBOUND -> const T&;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& getAt(Builtin::UncheckedTag, Index index) const;
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  LIFETIMEBOUND -> const T&;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::Ref<T>;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(const T& data, Builtin::usize length)  -> const $self;
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::Ref<T> _data;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_175_Span = Span<T>;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_175_Span<T> const& $this ) -> const Builtin::usize;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_175_Span<T> const& $this ) -> const bool;
	#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_175_Span<T> const& $this ) -> const Span<Builtin::u8>;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsSpan($extension_Span_175_Span<T> const& $this ) -> const Span<T>;
	} namespace System{
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getAsBytes;
using $extensions::getAsSpan;

	#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] MutableSpan final : public Builtin::RefStruct {
		public: using $self = MutableSpan<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		struct [[clang::annotate("ref_struct")]] Iterator final : public Builtin::RefStruct {
			public: using $self = Iterator;
			public: using $class = $self;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: using ElementType = T;
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: template<class T> friend class MutableSpan; template<class T> friend class $Class_MutableSpan;
			public: Iterator() = default;
			#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: inline constexpr explicit Iterator(MutableSpan<T> span) noexcept;
			#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto MoveNext() noexcept -> const bool;
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto Reset() noexcept -> void;
			#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			public: inline constexpr auto GetCurrentRef() const  LIFETIMEBOUND -> T&;
			#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::MutableRef<T> _ref;
			#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _length;
			#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			private: Builtin::usize _index;
			
		};
		
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractRefIterator, IAbstractRefIterator, Iterator);
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IRefIterator, IRefIterator<T>, Iterator);
		
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: using ElementType = T;
		public: MutableSpan() = default;
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("unsafe")]] inline constexpr MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length) ;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: inline constexpr MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept;
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<size_t S> inline constexpr  MutableSpan(Builtin::MutableRef<Builtin::InlineArray<S, T>> arr) noexcept;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index);
		inline constexpr const Builtin::MutableRef<T> getAt(Builtin::i32 index) const;
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Builtin::i32 index) const;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const Builtin::MutableRef<T> getAt(Index index);
		inline constexpr const Builtin::MutableRef<T> getAt(Index index) const;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(Index index)  -> const Builtin::MutableRef<T>;
		public: inline constexpr auto _operator_subscript(Index index) const  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const Builtin::MutableRef<T> getAt(Builtin::UncheckedTag, Index index) const;
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T>;
		public: inline constexpr const $self getAt(IndexRange range);
		inline constexpr const $self getAt(IndexRange range) const;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_subscript(IndexRange range)  -> const $self;
		public: inline constexpr auto _operator_subscript(IndexRange range) const  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range);
		[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $self getAt(Builtin::UncheckedTag, IndexRange range) const;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self;
		public: [[clang::annotate("UserAttr: Unchecked")]] inline constexpr auto _operator_subscript(Builtin::UncheckedTag, IndexRange range) const  -> const $self;
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start) const  -> const $self;
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Slice(Builtin::usize start, Builtin::usize length) const  -> const $self;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto operator==($self other) const noexcept -> const bool;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetLength() const noexcept -> const Builtin::usize;
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto GetDataReference() const noexcept -> const Builtin::MutableRef<T>;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr static auto UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self;
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto Contains(const T& val) const  -> const bool;
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: inline constexpr auto _operator_in(const T& val) const  -> const bool;
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::MutableRef<T> _data;
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		private: Builtin::usize _length;
		
	};
	
	
		} namespace $extensions { using namespace System;
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> using $extension_Span_319_MutableSpan = MutableSpan<T>;
	#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_319_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>;
	#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_319_MutableSpan<T> const& $this ) -> const Builtin::usize;
	#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_319_MutableSpan<T> const& $this ) -> const bool;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_319_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsSpan($extension_Span_319_MutableSpan<T> const& $this ) -> const Span<T>;
	} namespace System{
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getIsEmpty;
using $extensions::getAsBytes;
using $extensions::getAsSpan;

	#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanHelpers : public Builtin::StaticClass {
		public: using $self = SpanHelpers;
		private: SpanHelpers() = default;
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class T> static auto ContainsGeneralCase(System::Span<T> data, T val)  -> const bool;
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API static auto ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool;
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API static auto ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API static auto ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool;
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: ASTRUMSTD_API static auto ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool;
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_ContainsQword;
template<class __TT> struct $static_getContainsQword;
template<class __TT> struct $static_GetLength;
template<class __TT> struct $static_getGetLength;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
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
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static__length;
template<class __TT> struct $static_get_length;
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
template<class __TT> struct $static_ContainsGeneralCase;
template<class __TT> struct $static_getContainsGeneralCase;
template<class __TT> struct $static_AsSpan;
template<class __TT> struct $static_getAsSpan;
template<class __TT> struct $static_IsEmpty;
template<class __TT> struct $static_getIsEmpty;
template<class __TT> struct $static_EqualsAny;
template<class __TT> struct $static_getEqualsAny;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(MutableSpan<T> span) noexcept :
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	Span(ADV_UFCS(GetDataReference)(span.$ref()), ADV_UPCS(Length)(span.$ref()))
	{
	}
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(Builtin::Unsafe::__RawPtr<const T> ptr, Builtin::usize length)  : 
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard17{};
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Span(const T& data, Builtin::usize length) noexcept : 
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{data}, 
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
	}
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr Span<T>::Span(const Builtin::InlineArray<$tparam$S, T>& arr) noexcept : 
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::i32 index) const  -> const T&
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T&
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const T& { return _operator_subscript(index); }
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Index index) const  -> const T&
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Index index) const  -> const T& { return _operator_subscript(index); }
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, Index index) const  -> const T&
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const T& { return _operator_subscript(index); }
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (((start + len) <=> _length) > 0) {
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::operator==($self other) const noexcept -> const bool
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::GetDataReference() const noexcept -> const Builtin::Ref<T>
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr Span<T>::Iterator::Iterator(Span<T> span) noexcept : 
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::Reset() noexcept -> void
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterator::GetCurrentRef() const  -> const T&
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Iterate() const  -> const typename Span<T>::Iterator
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::UnsafeCreate(const T& data, Builtin::usize length)  -> const $self
	{
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{data, length};
	}
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::Contains(const T& val) const  -> const bool
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "Search available only for ISelfEquatable types");
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (std::is_constant_evaluated()) {
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{ auto $for_init_139 = (*this); auto $for_iter_139 = ADV_UFCS(Iterate)($for_init_139.$ref()); while($for_iter_139.$ref().MoveNext()) {
			auto&& i = $for_iter_139.$ref().GetCurrent(); {
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (i == val) {
					#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::Boolean(true);
				}
			}}}
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(false);
		} else {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			{
				#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				#if ADV_VERSION_X86 || ADV_VERSION_ARM
				#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if constexpr (Builtin::IsBitwiseEquatable<T>) {
					#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(1)) {
						#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((SpanHelpers), ContainsByte)(Span<Builtin::u8>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u8>)(val));
					} else {
						#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(2)) {
							#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							return ADV_USFCS((SpanHelpers), ContainsWord)(Span<Builtin::u16>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u16>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u16>)(val));
						} else {
							#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
							if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(4)) {
								#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								return ADV_USFCS((SpanHelpers), ContainsDword)(Span<Builtin::u32>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u32>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u32>)(val));
							} else {
								#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
								if constexpr (Builtin::usize(sizeof (T)) == Builtin::i32(8)) {
									#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
									return ADV_USFCS((SpanHelpers), ContainsQword)(Span<Builtin::u64>::UnsafeCreate(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u64>)(_data), _length), ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::u64>)(val));
								}
							}
						}
					}
				} else {
					#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS((SpanHelpers), ContainsGeneralCase)((*this), val);
					}
				}
				#else
				#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS((SpanHelpers), ContainsGeneralCase)((*this), val);
				#endif
			}
		}
		return {};
	}
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto Span<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::Unsafe::__RawPtr<T> ptr, Builtin::usize length)  : 
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{(*(ptr))}, 
	#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Span$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard194{};
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (ptr == nullptr) {
			#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<T> __data__, Builtin::usize length) noexcept : 
	#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data(__data__), 
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{length}
	{
		T& data = __data__;
	}
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<size_t $tparam$S> inline constexpr MutableSpan<T>::MutableSpan(Builtin::MutableRef<Builtin::InlineArray<$tparam$S, T>> arr) noexcept : 
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_data{ADV_UFCS(GetDataReference)(arr.$ref())}, 
	#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{$tparam$S}
	{
		constexpr Builtin::usize S = $tparam$S;
	}
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(index))> realIndex = Builtin::Cast<true, Builtin::usize>(index); 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T>
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Builtin::i32 index)  const  -> const Builtin::MutableRef<T>
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(index));
	}
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Builtin::i32 index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  -> const Builtin::MutableRef<T>
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)); 
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((realIndex <=> _length) >= 0) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, realIndex);
	}
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T>
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, Index index)  const  -> const Builtin::MutableRef<T>
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), _length)));
	}
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index)  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
	#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, Index index) const  -> const Builtin::MutableRef<T> { return _operator_subscript(index); }
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  -> const $self
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(IndexRange range)  const  -> const $self
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length)); 
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), _length))> len = ADV_UFCS(Length)(range.$ref(), _length); 
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0 || ((start + len) <=> _length) > 0) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), len};
	}
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  -> const $self
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_subscript(Builtin::UncheckedTag, IndexRange range)  const  -> const $self
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), _length))), ADV_UFCS(Length)(range.$ref(), _length)};
	}
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range)  -> const $self { return _operator_subscript(range); }
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::getAt(Builtin::UncheckedTag, IndexRange range) const  -> const $self { return _operator_subscript(range); }
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start) const  -> const $self
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start <=> _length) >= 0) {
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), _length - start};
	}
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Slice(Builtin::usize start, Builtin::usize length) const  -> const $self
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((start + length <=> _length) >= 0) {
			#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{ADV_USFCS((Unsafe), Add)(_data, start), length};
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::operator==($self other) const noexcept -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return _length == ADV_UPCS(_length)(other.$ref()) && ADV_USFCS((Unsafe), AreSame)(_data, ADV_UPCS(_data)(other.$ref()));
	}
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetLength() const noexcept -> const Builtin::usize
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_length); 
	}
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::GetDataReference() const noexcept -> const Builtin::MutableRef<T>
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(_data); 
	}
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr MutableSpan<T>::Iterator::Iterator(MutableSpan<T> span) noexcept : 
	#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_ref{ADV_UFCS(GetDataReference)(span.$ref())}, 
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_length{ADV_UPCS(Length)(span.$ref())}, 
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	_index{ADV_USPCS(MaxValue, Builtin::usize)()}
	{
	}
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::MoveNext() noexcept -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)))> newIndex = ADV_UFCS(_operator_add_mod)(_index, Builtin::usize(1U)); 
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((newIndex <=> _length) < 0) {
			#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			_index = newIndex;
			#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Builtin::Boolean(true);
		}
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::Reset() noexcept -> void
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		_index = ADV_USPCS(MaxValue, Builtin::usize)();
	}
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrent() const  -> const T
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterator::GetCurrentRef() const  -> T&
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_USFCS((Unsafe), Add)(_ref, _index);
	}
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Iterate() const  -> const typename MutableSpan<T>::Iterator
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::UnsafeCreate(Builtin::MutableRef<T> __data__, Builtin::usize length)  -> const $self
	{
		T& data = __data__;
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return $self{Builtin::MutableRef(data), length};
	}
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::Contains(const T& val) const  -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return ADV_UFCS(Contains)(ADV_UPCS(AsSpan)((*this).$ref()).$ref(), val);
	}
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto MutableSpan<T>::_operator_in(const T& val) const  -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(Contains(val)); 
	}
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> auto SpanHelpers::ContainsGeneralCase(System::Span<T> data, T val)  -> const bool
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::i32 offset{}; 
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((length <=> Builtin::u32(8U)) >= 0) 
		{
			#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			length -= Builtin::u32(8U);
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(4)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(5)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(6)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(7)) == val) {
				#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			offset += Builtin::i32(8);
		}
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((length <=> Builtin::u32(4U)) >= 0) 
		{
			#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			length -= Builtin::u32(4U);
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(1)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(2)) == val || ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset + Builtin::i32(3)) == val) {
				#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
			#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			offset += Builtin::i32(4);
		}
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((length <=> Builtin::i32(0)) > 0) 
		{
			#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			--length;
			#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, offset) == val) {
				#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
			#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			++offset;
		}
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_175_Span<T> const& $this ) -> const Builtin::usize
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_175_Span<T> const& $this ) -> const bool
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_175_Span<T> const& $this ) -> const Span<Builtin::u8>
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard181{};
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return Span<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsSpan($extension_Span_175_Span<T> const& $this ) -> const Span<T>
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
} namespace $extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto AsMutableSpan($extension_Span_319_MutableSpan<T> const& $this LIFETIMEBOUND)  -> const MutableSpan<T>
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getLength($extension_Span_319_MutableSpan<T> const& $this ) -> const Builtin::usize
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getIsEmpty($extension_Span_319_MutableSpan<T> const& $this ) -> const bool
	{
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetLength)($this.$ref()) == Builtin::u32(0U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsBytes($extension_Span_319_MutableSpan<T> const& $this ) -> const MutableSpan<Builtin::u8>
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Span$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard325{};
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return MutableSpan<Builtin::u8>{UnsafePointerCast<Builtin::u8>((__RawPtr(std::addressof(ADV_UFCS(GetDataReference)($this.$ref()))))), ADV_UPCS(Length)($this.$ref()) * Builtin::usize(sizeof (T))};
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> inline constexpr auto getAsSpan($extension_Span_319_MutableSpan<T> const& $this ) -> const Span<T>
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	

}