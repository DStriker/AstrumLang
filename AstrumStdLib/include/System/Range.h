#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Index.h"
#include "IValueEnumerable.h"
#include "IRangeCustomIterator.h"
#include "System/Collections/ISequence.h"
using namespace System::Collections;

namespace System {
namespace __Unsafe {} namespace __Range$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, bool IsClosed = Builtin::Boolean(false)> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class Range;
class IndexRange;
//###############################################################################
//# Global type aliases
//###############################################################################
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
template<class T> using ClosedRange = Range<T, Builtin::Boolean(true)>;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange8 = Range<Builtin::i8>;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange16 = Range<Builtin::i16>;
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange32 = Range<Builtin::i32>;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange64 = Range<Builtin::i64>;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange128 = Range<Builtin::i128>;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange = Range<Builtin::isize>;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange8 = Range<Builtin::u8>;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange16 = Range<Builtin::u16>;
#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange32 = Range<Builtin::u32>;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange64 = Range<Builtin::u64>;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange128 = Range<Builtin::u128>;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange = Range<Builtin::usize>;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteRange = Range<Builtin::u8>;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange32 = Range<Builtin::f32>;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange64 = Range<Builtin::f64>;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange8 = ClosedRange<Builtin::i8>;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange16 = ClosedRange<Builtin::i16>;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange32 = ClosedRange<Builtin::i32>;
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange64 = ClosedRange<Builtin::i64>;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange128 = ClosedRange<Builtin::i128>;
#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange = ClosedRange<Builtin::isize>;
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange8 = ClosedRange<Builtin::u8>;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange16 = ClosedRange<Builtin::u16>;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange32 = ClosedRange<Builtin::u32>;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange64 = ClosedRange<Builtin::u64>;
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange128 = ClosedRange<Builtin::u128>;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange = ClosedRange<Builtin::usize>;
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteClosedRange = ClosedRange<Builtin::u8>;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatClosedRange32 = ClosedRange<Builtin::f32>;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatClosedRange64 = ClosedRange<Builtin::f64>;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class $Class_Range;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) struct Range final : public Builtin::Struct {
		public: using $self = Range<T, IsClosed>;
		public: using $class = $Class_Range<T, IsClosed>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: 
		class $Class_Iterator;
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct Iterator final : public Builtin::Struct {
			public: using $self = Iterator;
			public: using $class = $Class_Iterator;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			public: Iterator() = default;
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit Iterator(const Range<T, IsClosed>& range) ;
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepForward()  -> const bool;
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(Iterator&);
			template <size_t I> friend const auto& get(const Iterator&);
			
		};
		
		public: 
		class $Class_StepByIterator;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct StepByIterator final : public Builtin::Struct {
			public: using $self = StepByIterator;
			public: using $class = $Class_StepByIterator;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			public: StepByIterator() = default;
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr StepByIterator(const Range<T, IsClosed>& range, Builtin::usize step) ;
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepForward()  -> const bool;
			#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::usize _step = Builtin::u32(1U); ADV_CHECK_REF_STRUCT("usize", Builtin::usize);
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(StepByIterator&);
			template <size_t I> friend const auto& get(const StepByIterator&);
			
		};
		
		public: 
		class $Class_ReverseIterator;
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct ReverseIterator final : public Builtin::Struct {
			public: using $self = ReverseIterator;
			public: using $class = $Class_ReverseIterator;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			public: ReverseIterator() = default;
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit ReverseIterator(const Range<T, IsClosed>& range) ;
			#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr ReverseIterator(T start, T end, Builtin::usize step) ;
			#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto StepBy(Builtin::usize step) const  -> const $self;
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepBackward(Builtin::usize step)  -> const bool;
			#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::usize _step = Builtin::u32(1U); ADV_CHECK_REF_STRUCT("usize", Builtin::usize);
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(ReverseIterator&);
			template <size_t I> friend const auto& get(const ReverseIterator&);
			
		};
		
		public: 
		
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class $Class_Iterator final : public Builtin::ValueType
		{
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using $underlying = Iterator; using $self = $underlying;
			$self __value;
			$Class_Iterator(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			
		};
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(Iterator);
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
		public: 
		
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class $Class_StepByIterator final : public Builtin::ValueType
		{
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using $underlying = StepByIterator; using $self = $underlying;
			$self __value;
			$Class_StepByIterator(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			auto Iterate() const  -> $self const { ADV_EXPRESSION_BODY(__value.Iterate()); }
			
		};
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(StepByIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(StepByIterator, IAbstractIterator, IAbstractIterator, StepByIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(StepByIterator, IIterator, IIterator<T>, StepByIterator);
		
		public: 
		
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class $Class_ReverseIterator final : public Builtin::ValueType
		{
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractSequence, IAbstractSequence);
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(ISequence<T>, ISequence<T>);
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using $underlying = ReverseIterator; using $self = $underlying;
			$self __value;
			$Class_ReverseIterator(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			auto Iterate() const  -> $self const { ADV_EXPRESSION_BODY(__value.Iterate()); }
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			auto StepBy(Builtin::usize step) const  -> $self const { ADV_EXPRESSION_BODY(__value.StepBy(step)); }
			
		};
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(ReverseIterator);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using ElementType = T;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto getHashCode() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_PROPERTY_GETTER(public, HashCode, getHashCode, Builtin::u64);
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr Range()  = default;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr Range(Builtin::In<T> start, Builtin::In<T> end) ;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto Clear()  -> decltype(auto);
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto StepBy(Builtin::usize step) const  -> const StepByIterator;
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const $self& other) const  -> const bool;
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const T;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const T;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _start; ADV_CHECK_REF_STRUCT("T", T);
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _end; ADV_CHECK_REF_STRUCT("T", T);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: static constexpr auto IsClosedRange = IsClosed;
		template <size_t I, class T, bool IsClosed> friend auto& get(Range<T, IsClosed>&);
		template <size_t I, class T, bool IsClosed> friend const auto& get(const Range<T, IsClosed>&);
		
	};
	
		} namespace $extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> using $extension_Range_215_Range = Range<T, IsClosed>;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool { return Contains($this.val, val); } template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool { return Contains($this.val, val); } 
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool { return Contains($this.val, range); } template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool { return Contains($this.val, range); } 
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool { return Contains($this.val, range); } template<class T, bool IsClosed> inline constexpr auto Contains($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool { return Contains($this.val, range); } 
	#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool { return _operator_in($this.val, val); } template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool { return _operator_in($this.val, val); } 
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool { return _operator_in($this.val, range); } template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool { return _operator_in($this.val, range); } 
	#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool { return _operator_in($this.val, range); } template<class T, bool IsClosed> inline constexpr auto _operator_in($proxy<$extension_Range_215_Range<T, IsClosed>&> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool { return _operator_in($this.val, range); } 
	#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart($extension_Range_215_Range<T, IsClosed> const& $this ) -> const T;
	#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd($extension_Range_215_Range<T, IsClosed> const& $this ) -> const T;
	#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed($extension_Range_215_Range<T, IsClosed> const& $this ) -> const typename $extension_Range_215_Range<T, IsClosed>::ReverseIterator;
	#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength($extension_Range_215_Range<T, IsClosed> const& $this ) -> const T;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty($extension_Range_215_Range<T, IsClosed> const& $this ) -> const bool;
	} namespace System{
using $extensions::Contains;
using $extensions::Contains;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::_operator_in;
using $extensions::_operator_in;
using $extensions::getStart;
using $extensions::getEnd;
using $extensions::getReversed;
using $extensions::getLength;
using $extensions::getIsEmpty;

	class $Class_IndexRange;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	struct IndexRange final : public Builtin::Struct {
		public: using $self = IndexRange;
		public: using $class = $Class_IndexRange;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange()  = default;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange(Index start, Index end, bool isClosed = Builtin::Boolean(false)) ;
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr  IndexRange(const Range<T, IsClosed>& range) ;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const $self& other) const  -> const bool;
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const Index;
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const Index;
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetIsClosed() const noexcept -> const bool;
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _start; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _end; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: bool _isClosed{}; ADV_CHECK_REF_STRUCT("bool", bool);
		template <size_t I> friend auto& get(IndexRange&);
		template <size_t I> friend const auto& get(const IndexRange&);
		
	};
	
		} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	using $extension_Range_323_IndexRange = IndexRange;
	#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length($extension_Range_323_IndexRange const& $this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize;
	#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_StartAt; template<> struct $static_StartAt<$extension_Range_323_IndexRange> { static inline constexpr auto get(Index start)  -> const typename $extension_Range_323_IndexRange; };
	#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_EndAt; template<> struct $static_EndAt<$extension_Range_323_IndexRange> { static inline constexpr auto get(Index end)  -> const typename $extension_Range_323_IndexRange; };
	#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_InclusiveEndAt; template<> struct $static_InclusiveEndAt<$extension_Range_323_IndexRange> { static inline constexpr auto get(Index end)  -> const typename $extension_Range_323_IndexRange; };
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart($extension_Range_323_IndexRange const& $this ) -> const Index;
	#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd($extension_Range_323_IndexRange const& $this ) -> const Index;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed($extension_Range_323_IndexRange const& $this ) -> const bool;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode($extension_Range_323_IndexRange const& $this ) -> const Builtin::u64;
	#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_getAll; template<> struct $static_getAll<$extension_Range_323_IndexRange> { static inline constexpr auto get() -> const $extension_Range_323_IndexRange; };
	} namespace System{
using $extensions::Length;
using $extensions::$static_StartAt;
using $extensions::$static_EndAt;
using $extensions::$static_InclusiveEndAt;
using $extensions::getStart;
using $extensions::getEnd;
using $extensions::getIsClosed;
using $extensions::getHashCode;
using $extensions::$static_getAll;

	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class $Class_Range final : public Builtin::ValueType
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(IAbstractSequence, IAbstractSequence);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISequence<T>, ISequence<T>);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using $underlying = Range<T, IsClosed>; using $self = $underlying;
		$self __value;
		using Iterator = $self::Iterator;
		using StepByIterator = $self::StepByIterator;
		using ReverseIterator = $self::ReverseIterator;
		$Class_Range(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using ElementType = T;
		auto getHashCode() const -> Builtin::u64 { return __value.getHashCode(); }
		auto Iterate() const  -> Iterator const { ADV_EXPRESSION_BODY(__value.Iterate()); }
		auto StepBy(Builtin::usize step) const  -> StepByIterator const { ADV_EXPRESSION_BODY(__value.StepBy(step)); }
		auto operator==(const $self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	

	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	class $Class_IndexRange final : public Builtin::ValueType
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using $underlying = IndexRange; using $self = $underlying;
		$self __value;
		$Class_IndexRange(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		auto operator==(const $self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	ADV_CHECK_FOR_CONCRETE(IndexRange);
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(IndexRange, ISelfEquatable, ISelfEquatable, IndexRange);
	
} namespace $extensions {
template<class __TT> struct $static_Contains;
template<class __TT> struct $static_getContains;
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_GetIsClosed;
template<class __TT> struct $static_getGetIsClosed;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_End;
template<class __TT> struct $static_getEnd;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_IsClosed;
template<class __TT> struct $static_getIsClosed;
template<class __TT> struct $static_RangeStepForward;
template<class __TT> struct $static_getRangeStepForward;
template<class __TT> struct $static_GetStart;
template<class __TT> struct $static_getGetStart;
template<class __TT> struct $static_GetEnd;
template<class __TT> struct $static_getGetEnd;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static__state;
template<class __TT> struct $static_get_state;
template<class __TT> struct $static_RangeStepBackward;
template<class __TT> struct $static_getRangeStepBackward;
template<class __TT> struct $static__start;
template<class __TT> struct $static_get_start;
template<class __TT> struct $static__end;
template<class __TT> struct $static_get_end;
template<class __TT> struct $static__isClosed;
template<class __TT> struct $static_get_isClosed;
template<class __TT> struct $static_All;
template<class __TT> struct $static_getAll;
template<class __TT> struct $static_FromStart;
template<class __TT> struct $static_getFromStart;
template<class __TT> struct $static_FromEnd;
template<class __TT> struct $static_getFromEnd;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::Range(Builtin::In<T> start, Builtin::In<T> end)  : 
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_start{start}, 
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if ((end <=> start) < 0) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Clear()  -> decltype(auto)
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start = _end = T{}); 
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterate() const  -> const typename Range<T, IsClosed>::Iterator
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::Iterator::Iterator(const Range<T, IsClosed>& range)  : 
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(Start)(range.$ref())}, 
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(End)(range.$ref())}
	{
	}
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::MoveNext()  -> const bool
	{
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_49 = Builtin::Cast<false, std::decay_t<decltype(_state)>::$self>(_state);
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_49.IsValid() && Builtin::Is(*__tmp__valid_49, Builtin::i32(1)))  {
				#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_49;
				#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(2);
					#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					if constexpr (!IsClosed) {
						#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return _current != _end;
					} else {
						#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						{
							#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
			}
			else {
				#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_49.IsValid() && Builtin::Is(*__tmp__valid_49, Builtin::i32(2)))  {
					#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_49;
					#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						const Builtin::Auto<decltype(StepForward())> result = StepForward(); 
						#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						if (result) {
							#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(-1);
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::GetCurrent() const  -> const T
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::StepForward()  -> const bool
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			++_current;
		} else {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				_current = ADV_UFCS(RangeStepForward)(_current.$ref(), Builtin::u32(1U));
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (_current <=> _end) <= 0;
		} else {
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (_current <=> _end) < 0;
			}
		}
		return {};
	}
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::StepByIterator::StepByIterator(const Range<T, IsClosed>& range, Builtin::usize step)  : 
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(Start)(range.$ref())}, 
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(End)(range.$ref())}, 
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_step{step}
	{
	}
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::StepByIterator::MoveNext()  -> const bool
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_101 = Builtin::Cast<false, std::decay_t<decltype(_state)>::$self>(_state);
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_101.IsValid() && Builtin::Is(*__tmp__valid_101, Builtin::i32(1)))  {
				#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_101;
				#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(2);
					#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					if constexpr (!IsClosed) {
						#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return _current != _end;
					} else {
						#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						{
							#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
			}
			else {
				#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_101.IsValid() && Builtin::Is(*__tmp__valid_101, Builtin::i32(2)))  {
					#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_101;
					#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return StepForward();
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(-1);
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::StepByIterator::GetCurrent() const  -> const T
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::StepByIterator::StepForward()  -> const bool
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			_current += T{_step};
		} else {
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				_current = ADV_UFCS(RangeStepForward)(_current.$ref(), _step);
			}
		}
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (_current <=> _end) <= 0;
		} else {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (_current <=> _end) < 0;
			}
		}
		return {};
	}
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::StepByIterator::Iterate() const  -> const $self
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::StepBy(Builtin::usize step) const  -> const typename Range<T, IsClosed>::StepByIterator
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(StepByIterator{(*this), step}); 
	}
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::ReverseIterator::ReverseIterator(const Range<T, IsClosed>& range)  : 
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(End)(range.$ref())}, 
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(Start)(range.$ref())}
	{
	}
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::ReverseIterator::ReverseIterator(T start, T end, Builtin::usize step)  : 
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{start}, 
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}, 
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_step{step}
	{
	}
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::MoveNext()  -> const bool
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_160 = Builtin::Cast<false, std::decay_t<decltype(_state)>::$self>(_state);
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_160.IsValid() && Builtin::Is(*__tmp__valid_160, Builtin::i32(1)))  {
				#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_160;
				#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(2);
					#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					if constexpr (!IsClosed) {
						#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return StepBackward(Builtin::u32(1U));
					} else {
						#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						{
							#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
			}
			else {
				#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_160.IsValid() && Builtin::Is(*__tmp__valid_160, Builtin::i32(2)))  {
					#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_160;
					#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return StepBackward(_step);
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(-1);
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::StepBy(Builtin::usize step) const  -> const $self
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($self{_current, _end, step}); 
	}
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::StepBackward(Builtin::usize step)  -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if (_current == _end) {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return Builtin::Boolean(false);
		}
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			_current -= T{step};
		} else {
			#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				_current = ADV_UFCS(RangeStepBackward)(_current.$ref(), step);
			}
		}
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return (_current <=> _end) >= 0;
	}
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::operator==(const $self& other) const  -> const bool
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).$ref()) == ADV_UPCS(_start)(other.$ref()) && ADV_UPCS(_end)((*this).$ref()) == ADV_UPCS(_end)(other.$ref())); 
	}
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::getHashCode() const  -> Builtin::u64 
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).$ref()).$ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).$ref()).$ref()); 
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).$ref()).$ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).$ref()).$ref()); 
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2))));
	}
	
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetStart() const noexcept -> const T
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetEnd() const noexcept -> const T
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr IndexRange::IndexRange(Index start, Index end, bool isClosed)  : 
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_start{start}, 
	#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}, 
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_isClosed{isClosed}
	{
	}
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr IndexRange::IndexRange(const Range<T, IsClosed>& range)  :
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	IndexRange(Builtin::Cast<true, Index>(ADV_UPCS(Start)(range.$ref())), Builtin::Cast<true, Index>(ADV_UPCS(End)(range.$ref())), IsClosed)
	{
	}
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::operator==(const $self& other) const  -> const bool
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).$ref()) == ADV_UPCS(_start)(other.$ref()) && ADV_UPCS(_end)((*this).$ref()) == ADV_UPCS(_end)(other.$ref()) && ADV_UPCS(_isClosed)((*this).$ref()) == ADV_UPCS(_isClosed)(other.$ref())); 
	}
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetStart() const noexcept -> const Index
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetEnd() const noexcept -> const Index
	{
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetIsClosed() const noexcept -> const bool
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_isClosed); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace $extensions { using namespace System;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)($this.$ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)($this.$ref())) <= 0;
		} else {
			#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)($this.$ref())) < 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UPCS(End)($this.$ref())) <= 0;
		} else {
			#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
					#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> (ADV_UPCS(End)($this.$ref()) - Builtin::i32(1))) <= 0;
				} else {
					#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)($this.$ref()).$ref(), Builtin::u32(1U))) <= 0;
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
				#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && ((ADV_UPCS(End)(range.$ref()) - Builtin::i32(1)) <=> ADV_UPCS(End)($this.$ref())) <= 0;
			} else {
				#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)(range.$ref()).$ref(), Builtin::u32(1U)) <=> ADV_UPCS(End)($this.$ref())) <= 0;
				}
			}
		} else {
			#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UPCS(End)($this.$ref())) <= 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), range)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_215_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), range)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart($extension_Range_215_Range<T, IsClosed> const & $this ) -> const T
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd($extension_Range_215_Range<T, IsClosed> const & $this ) -> const T
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed($extension_Range_215_Range<T, IsClosed> const & $this ) -> const typename $extension_Range_215_Range<T, IsClosed>::ReverseIterator
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		using TIterator = typename $extension_Range_215_Range<T, IsClosed>::ReverseIterator;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return TIterator{$this};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength($extension_Range_215_Range<T, IsClosed> const & $this ) -> const T
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(End)($this.$ref()) - ADV_UPCS(Start)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty($extension_Range_215_Range<T, IsClosed> const & $this ) -> const bool
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Length)($this.$ref()) == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace $extensions { using namespace System;
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length($extension_Range_323_IndexRange const& $this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(Builtin::usize{ADV_UFCS(Offset)(ADV_UPCS(End)($this.$ref()).$ref(), size) - ADV_UFCS(Offset)(ADV_UPCS(Start)($this.$ref()).$ref(), size) + Builtin::i32{ADV_UPCS(IsClosed)($this.$ref())}}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_StartAt<$extension_Range_323_IndexRange>::get(Index start)  -> const typename $extension_Range_323_IndexRange
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_323_IndexRange{start, ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_EndAt<$extension_Range_323_IndexRange>::get(Index end)  -> const typename $extension_Range_323_IndexRange
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_323_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_InclusiveEndAt<$extension_Range_323_IndexRange>::get(Index end)  -> const typename $extension_Range_323_IndexRange
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_323_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(true)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart($extension_Range_323_IndexRange const & $this ) -> const Index
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd($extension_Range_323_IndexRange const & $this ) -> const Index
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed($extension_Range_323_IndexRange const & $this ) -> const bool
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetIsClosed)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode($extension_Range_323_IndexRange const & $this ) -> const Builtin::u64
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)($this.$ref()).$ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)($this.$ref()).$ref()); 
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)($this.$ref()).$ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)($this.$ref()).$ref()); 
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2)))), (ADV_UFCS(_operator_xor_xor)(Builtin::u64(23ULL), Builtin::u32{ADV_UPCS(IsClosed)($this.$ref())})));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_getAll<$extension_Range_323_IndexRange>::get() -> const $extension_Range_323_IndexRange
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_323_IndexRange{ADV_USPCS(Start, Index)(), ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	

}