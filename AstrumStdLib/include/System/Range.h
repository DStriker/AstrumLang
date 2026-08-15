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
} namespace $extensions {
template<class __TT> struct $static_HashCode;
template<class __TT> struct $static_getHashCode;
template<class __TT> struct $static_GetIsClosed;
template<class __TT> struct $static_getGetIsClosed;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_End;
template<class __TT> struct $static_getEnd;
template<class __TT> struct $static_IsClosed;
template<class __TT> struct $static_getIsClosed;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_GetStart;
template<class __TT> struct $static_getGetStart;
template<class __TT> struct $static_GetEnd;
template<class __TT> struct $static_getGetEnd;
} namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
template<class T> using ClosedRange = Range<T, Builtin::Boolean(true)>;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange8 = Range<Builtin::i8>;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange16 = Range<Builtin::i16>;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange32 = Range<Builtin::i32>;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange64 = Range<Builtin::i64>;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange128 = Range<Builtin::i128>;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange = Range<Builtin::isize>;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange8 = Range<Builtin::u8>;
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange16 = Range<Builtin::u16>;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange32 = Range<Builtin::u32>;
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange64 = Range<Builtin::u64>;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange128 = Range<Builtin::u128>;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange = Range<Builtin::usize>;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteRange = Range<Builtin::u8>;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange32 = Range<Builtin::f32>;
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange64 = Range<Builtin::f64>;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange8 = ClosedRange<Builtin::i8>;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange16 = ClosedRange<Builtin::i16>;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange32 = ClosedRange<Builtin::i32>;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange64 = ClosedRange<Builtin::i64>;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange128 = ClosedRange<Builtin::i128>;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange = ClosedRange<Builtin::isize>;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange8 = ClosedRange<Builtin::u8>;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange16 = ClosedRange<Builtin::u16>;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange32 = ClosedRange<Builtin::u32>;
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange64 = ClosedRange<Builtin::u64>;
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange128 = ClosedRange<Builtin::u128>;
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange = ClosedRange<Builtin::usize>;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteClosedRange = ClosedRange<Builtin::u8>;
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatClosedRange32 = ClosedRange<Builtin::f32>;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
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
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct Iterator final : public Builtin::Struct {
			public: using $self = Iterator;
			public: using $class = $Class_Iterator;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			public: Iterator() = default;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit Iterator(const Range<T, IsClosed>& range) ;
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepForward()  -> const T;
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(Iterator&);
			template <size_t I> friend const auto& get(const Iterator&);
			
		};
		
		public: 
		class $Class_ReverseIterator;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct ReverseIterator final : public Builtin::Struct {
			public: using $self = ReverseIterator;
			public: using $class = $Class_ReverseIterator;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			public: ReverseIterator() = default;
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit ReverseIterator(const Range<T, IsClosed>& range) ;
			#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto Iterate() const  -> const $self;
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepBackward()  -> void;
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(ReverseIterator&);
			template <size_t I> friend const auto& get(const ReverseIterator&);
			
		};
		
		public: 
		
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class $Class_Iterator final : public Builtin::ValueType
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using $underlying = Iterator; using $self = $underlying;
			$self __value;
			$Class_Iterator(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			
		};
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(Iterator);
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IAbstractIterator, IAbstractIterator, Iterator);
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(Iterator, IIterator, IIterator<T>, Iterator);
		
		public: 
		
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class $Class_ReverseIterator final : public Builtin::ValueType
		{
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractSequence, IAbstractSequence);
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(ISequence<T>, ISequence<T>);
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using $underlying = ReverseIterator; using $self = $underlying;
			$self __value;
			$Class_ReverseIterator(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			auto Iterate() const  -> $self const { ADV_EXPRESSION_BODY(__value.Iterate()); }
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			
		};
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(ReverseIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using ElementType = T;
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto getHashCode() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_PROPERTY_GETTER(public, HashCode, getHashCode, Builtin::u64);
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr Range()  = default;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr Range(Builtin::In<T> start, Builtin::In<T> end) ;
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto Clear()  -> decltype(auto);
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto Iterate() const  -> const Iterator;
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const $self& other) const  -> const bool;
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const T;
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const T;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _start; ADV_CHECK_REF_STRUCT("T", T);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _end; ADV_CHECK_REF_STRUCT("T", T);
		template <size_t I, class T, bool IsClosed> friend auto& get(Range<T, IsClosed>&);
		template <size_t I, class T, bool IsClosed> friend const auto& get(const Range<T, IsClosed>&);
		
	};
	
		} namespace $extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> using $extension_Range_149_Range = Range<T, IsClosed>;
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T;
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed($extension_Range_149_Range<T, IsClosed> const& $this ) -> const typename $extension_Range_149_Range<T, IsClosed>::ReverseIterator;
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty($extension_Range_149_Range<T, IsClosed> const& $this ) -> const bool;
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
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	struct IndexRange final : public Builtin::Struct {
		public: using $self = IndexRange;
		public: using $class = $Class_IndexRange;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange()  = default;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange(Index start, Index end, bool isClosed = Builtin::Boolean(false)) ;
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr  IndexRange(const Range<T, IsClosed>& range) ;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const $self& other) const  -> const bool;
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const Index;
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const Index;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetIsClosed() const noexcept -> const bool;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _start; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _end; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: bool _isClosed; ADV_CHECK_REF_STRUCT("bool", bool);
		template <size_t I> friend auto& get(IndexRange&);
		template <size_t I> friend const auto& get(const IndexRange&);
		
	};
	
		} namespace $extensions { using namespace System;
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	using $extension_Range_254_IndexRange = IndexRange;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length($extension_Range_254_IndexRange const& $this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize;
	#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_StartAt; template<> struct $static_StartAt<$extension_Range_254_IndexRange> { static inline constexpr auto get(Index start)  -> const typename $extension_Range_254_IndexRange; };
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_EndAt; template<> struct $static_EndAt<$extension_Range_254_IndexRange> { static inline constexpr auto get(Index end)  -> const typename $extension_Range_254_IndexRange; };
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_InclusiveEndAt; template<> struct $static_InclusiveEndAt<$extension_Range_254_IndexRange> { static inline constexpr auto get(Index end)  -> const typename $extension_Range_254_IndexRange; };
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart($extension_Range_254_IndexRange const& $this ) -> const Index;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd($extension_Range_254_IndexRange const& $this ) -> const Index;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed($extension_Range_254_IndexRange const& $this ) -> const bool;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode($extension_Range_254_IndexRange const& $this ) -> const Builtin::u64;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct $static_getAll; template<> struct $static_getAll<$extension_Range_254_IndexRange> { static inline constexpr auto get() -> const $extension_Range_254_IndexRange; };
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
		using ReverseIterator = $self::ReverseIterator;
		$Class_Range(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using ElementType = T;
		auto getHashCode() const -> Builtin::u64 { return __value.getHashCode(); }
		auto Iterate() const  -> Iterator const { ADV_EXPRESSION_BODY(__value.Iterate()); }
		auto operator==(const $self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	

	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	class $Class_IndexRange final : public Builtin::ValueType
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using $underlying = IndexRange; using $self = $underlying;
		$self __value;
		$Class_IndexRange(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		auto operator==(const $self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	ADV_CHECK_FOR_CONCRETE(IndexRange);
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(IndexRange, ISelfEquatable, ISelfEquatable, IndexRange);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::Range(Builtin::In<T> start, Builtin::In<T> end)  : 
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_start{start}, 
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if ((end <=> start) < 0) {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
	}
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Clear()  -> decltype(auto)
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start = _end = T{}); 
	}
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterate() const  -> const typename Range<T, IsClosed>::Iterator
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(Iterator{(*this)}); 
	}
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::Iterator::Iterator(const Range<T, IsClosed>& range)  : 
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(Start)(range.$ref())}, 
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(End)(range.$ref())}
	{
	}
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::MoveNext()  -> const bool
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_48 = Builtin::Cast<false, std::decay_t<decltype(_state)>::$self>(_state);
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_48.IsValid() && Builtin::Is(*__tmp__valid_48, Builtin::i32(1)))  {
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_48;
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(2);
					#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					if constexpr (!IsClosed) {
						#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return _current != _end;
					} else {
						#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						{
							#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
			}
			else {
				#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_48.IsValid() && Builtin::Is(*__tmp__valid_48, Builtin::i32(2)))  {
					#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_48;
					#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						if constexpr (IsClosed) {
							#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							if (_current != _end) {
								#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								StepForward();
								#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								return Builtin::Boolean(true);
							}
						} else {
							#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							{
								#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								if (StepForward() != _end) {
									#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
									return Builtin::Boolean(true);
								}
							}
						}
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(-1);
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::GetCurrent() const  -> const T
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::StepForward()  -> const T
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return ++_current;
		} else {
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return _current = ADV_UFCS(RangeStepForward)(_current.$ref(), Builtin::u32(1U));
			}
		}
		return {};
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::ReverseIterator::ReverseIterator(const Range<T, IsClosed>& range)  : 
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(End)(range.$ref())}, 
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(Start)(range.$ref())}
	{
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::Iterate() const  -> const $self
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::MoveNext()  -> const bool
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
						StepBackward();
						#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return _current != _end;
					} else {
						#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						{
							#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
			}
			else {
				#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_101.IsValid() && Builtin::Is(*__tmp__valid_101, Builtin::i32(2)))  {
					#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_101;
					#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						if (_current != _end) {
							#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							StepBackward();
							#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).$ref()) = Builtin::i32(-1);
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::StepBackward()  -> void
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			--_current;
		} else {
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				_current = ADV_UFCS(RangeStepBackward)(_current.$ref(), Builtin::u32(1U));
			}
		}
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::operator==(const $self& other) const  -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).$ref()) == ADV_UPCS(_start)(other.$ref()) && ADV_UPCS(_end)((*this).$ref()) == ADV_UPCS(_end)(other.$ref())); 
	}
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::getHashCode() const  -> Builtin::u64 
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).$ref()).$ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).$ref()).$ref()); 
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).$ref()).$ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).$ref()).$ref()); 
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2))));
	}
	
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetStart() const noexcept -> const T
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetEnd() const noexcept -> const T
	{
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr IndexRange::IndexRange(Index start, Index end, bool isClosed)  : 
	#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_start{start}, 
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}, 
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_isClosed{isClosed}
	{
	}
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr IndexRange::IndexRange(const Range<T, IsClosed>& range)  :
	#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	IndexRange(Builtin::Cast<true, Index>(ADV_UPCS(Start)(range.$ref())), Builtin::Cast<true, Index>(ADV_UPCS(End)(range.$ref())), IsClosed)
	{
	}
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::operator==(const $self& other) const  -> const bool
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).$ref()) == ADV_UPCS(_start)(other.$ref()) && ADV_UPCS(_end)((*this).$ref()) == ADV_UPCS(_end)(other.$ref()) && ADV_UPCS(_isClosed)((*this).$ref()) == ADV_UPCS(_isClosed)(other.$ref())); 
	}
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetStart() const noexcept -> const Index
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetEnd() const noexcept -> const Index
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetIsClosed() const noexcept -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_isClosed); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace $extensions { using namespace System;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)($this.$ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)($this.$ref())) <= 0;
		} else {
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)($this.$ref())) < 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UPCS(End)($this.$ref())) <= 0;
		} else {
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
					#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> (ADV_UPCS(End)($this.$ref()) - Builtin::i32(1))) <= 0;
				} else {
					#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)($this.$ref()).$ref(), Builtin::u32(1U))) <= 0;
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
				#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && ((ADV_UPCS(End)(range.$ref()) - Builtin::i32(1)) <=> ADV_UPCS(End)($this.$ref())) <= 0;
			} else {
				#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)(range.$ref()).$ref(), Builtin::u32(1U)) <=> ADV_UPCS(End)($this.$ref())) <= 0;
				}
			}
		} else {
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)($this.$ref()) <=> ADV_UPCS(Start)(range.$ref())) <= 0 && (ADV_UPCS(End)(range.$ref()) <=> ADV_UPCS(End)($this.$ref())) <= 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), range)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in($extension_Range_149_Range<T, IsClosed> const& $this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), range)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed($extension_Range_149_Range<T, IsClosed> const& $this ) -> const typename $extension_Range_149_Range<T, IsClosed>::ReverseIterator
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return { $this }; 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength($extension_Range_149_Range<T, IsClosed> const& $this ) -> const T
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(End)($this.$ref()) - ADV_UPCS(Start)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty($extension_Range_149_Range<T, IsClosed> const& $this ) -> const bool
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Length)($this.$ref()) == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length($extension_Range_254_IndexRange const& $this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(Builtin::usize{ADV_UFCS(Offset)(ADV_UPCS(End)($this.$ref()).$ref(), size) - ADV_UFCS(Offset)(ADV_UPCS(Start)($this.$ref()).$ref(), size) + Builtin::i32{ADV_UPCS(IsClosed)($this.$ref())}}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_StartAt<$extension_Range_254_IndexRange>::get(Index start)  -> const typename $extension_Range_254_IndexRange
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_254_IndexRange{start, ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_EndAt<$extension_Range_254_IndexRange>::get(Index end)  -> const typename $extension_Range_254_IndexRange
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_254_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_InclusiveEndAt<$extension_Range_254_IndexRange>::get(Index end)  -> const typename $extension_Range_254_IndexRange
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_254_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(true)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart($extension_Range_254_IndexRange const& $this ) -> const Index
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd($extension_Range_254_IndexRange const& $this ) -> const Index
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed($extension_Range_254_IndexRange const& $this ) -> const bool
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetIsClosed)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode($extension_Range_254_IndexRange const& $this ) -> const Builtin::u64
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)($this.$ref()).$ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)($this.$ref()).$ref()); 
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)($this.$ref()).$ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)($this.$ref()).$ref()); 
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2)))), (ADV_UFCS(_operator_xor_xor)(Builtin::u64(23ULL), Builtin::u32{ADV_UPCS(IsClosed)($this.$ref())})));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto $static_getAll<$extension_Range_254_IndexRange>::get() -> const $extension_Range_254_IndexRange
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY($extension_Range_254_IndexRange{ADV_USPCS(Start, Index)(), ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	

}