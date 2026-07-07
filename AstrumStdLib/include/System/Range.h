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
namespace __Unsafe {} namespace __Range_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, bool IsClosed = Builtin::Boolean(false)> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class Range;
class IndexRange;
//###############################################################################
//# Global type aliases
//###############################################################################
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
template<class T> using ClosedRange = Range<T, Builtin::Boolean(true)>;
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange8 = Range<Builtin::i8>;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange16 = Range<Builtin::i16>;
#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange32 = Range<Builtin::i32>;
#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange64 = Range<Builtin::i64>;
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange128 = Range<Builtin::i128>;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntRange = Range<Builtin::isize>;
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange8 = Range<Builtin::u8>;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange16 = Range<Builtin::u16>;
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange32 = Range<Builtin::u32>;
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange64 = Range<Builtin::u64>;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange128 = Range<Builtin::u128>;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntRange = Range<Builtin::usize>;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteRange = Range<Builtin::u8>;
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange32 = Range<Builtin::f32>;
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatRange64 = Range<Builtin::f64>;
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange8 = ClosedRange<Builtin::i8>;
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange16 = ClosedRange<Builtin::i16>;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange32 = ClosedRange<Builtin::i32>;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange64 = ClosedRange<Builtin::i64>;
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange128 = ClosedRange<Builtin::i128>;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using IntClosedRange = ClosedRange<Builtin::isize>;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange8 = ClosedRange<Builtin::u8>;
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange16 = ClosedRange<Builtin::u16>;
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange32 = ClosedRange<Builtin::u32>;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange64 = ClosedRange<Builtin::u64>;
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange128 = ClosedRange<Builtin::u128>;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using UIntClosedRange = ClosedRange<Builtin::usize>;
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using ByteClosedRange = ClosedRange<Builtin::u8>;
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatClosedRange32 = ClosedRange<Builtin::f32>;
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
using FloatClosedRange64 = ClosedRange<Builtin::f64>;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class __Class_Range;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) struct Range final : public Builtin::Struct {
		public: using __self = Range<T, IsClosed>;
		public: using __class = __Class_Range<T, IsClosed>;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		public: 
		class __Class_Iterator;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct Iterator final : public Builtin::Struct {
			public: using __self = Iterator;
			public: using __class = __Class_Iterator;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit Iterator(const Range<T, IsClosed>& range) ;
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
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
		class __Class_ReverseIterator;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		struct ReverseIterator final : public Builtin::Struct {
			public: using __self = ReverseIterator;
			public: using __class = __Class_ReverseIterator;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using ElementType = T;
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr explicit ReverseIterator(const Range<T, IsClosed>& range) ;
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto Iterate() const  -> const __self;
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto MoveNext()  -> const bool;
			#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: inline constexpr auto GetCurrent() const  -> const T;
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: inline constexpr auto StepBackward()  -> void;
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _current; ADV_CHECK_REF_STRUCT("T", T);
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: T _end; ADV_CHECK_REF_STRUCT("T", T);
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			private: Builtin::i32 _state = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			template <size_t I> friend auto& get(ReverseIterator&);
			template <size_t I> friend const auto& get(const ReverseIterator&);
			
		};
		
		public: 
		
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class __Class_Iterator final : public Builtin::ValueType
		{
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using __underlying = Iterator; using __self = __underlying;
			__self __value;
			__Class_Iterator(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
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
		
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		class __Class_ReverseIterator final : public Builtin::ValueType
		{
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractSequence, IAbstractSequence);
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(ISequence<T>, ISequence<T>);
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IAbstractIterator, IAbstractIterator);
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			ADV_CHECK_INTERFACE(IIterator<T>, IIterator<T>);
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			public: using __underlying = ReverseIterator; using __self = __underlying;
			__self __value;
			__Class_ReverseIterator(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			auto Iterate() const  -> __self const { ADV_EXPRESSION_BODY(__value.Iterate()); }
			auto MoveNext() -> bool const { ADV_EXPRESSION_BODY(__value.MoveNext()); }
			auto GetCurrent() const  -> T const { ADV_EXPRESSION_BODY(__value.GetCurrent()); }
			
		};
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_FOR_CONCRETE(ReverseIterator);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractSequence, IAbstractSequence, ReverseIterator);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, ISequence, ISequence<T>, ReverseIterator);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IAbstractIterator, IAbstractIterator, ReverseIterator);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseIterator, IIterator, IIterator<T>, ReverseIterator);
		
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using ElementType = T;
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
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
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const __self& other) const  -> const bool;
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const T;
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const T;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _start; ADV_CHECK_REF_STRUCT("T", T);
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: T _end; ADV_CHECK_REF_STRUCT("T", T);
		template <size_t I, class T, bool IsClosed> friend auto& get(Range<T, IsClosed>&);
		template <size_t I, class T, bool IsClosed> friend const auto& get(const Range<T, IsClosed>&);
		
	};
	
		} namespace __extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> using __extension_Range_143_Range = Range<T, IsClosed>;
	#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool;
	#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool;
	#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool;
	#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T;
	#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T;
	#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const typename __extension_Range_143_Range<T, IsClosed>::ReverseIterator;
	#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T;
	#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const bool;
	} namespace System{
using __extensions::Contains;
using __extensions::Contains;
using __extensions::Contains;
using __extensions::_operator_in;
using __extensions::_operator_in;
using __extensions::_operator_in;
using __extensions::getStart;
using __extensions::getEnd;
using __extensions::getReversed;
using __extensions::getLength;
using __extensions::getIsEmpty;

	class __Class_IndexRange;
	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	struct IndexRange final : public Builtin::Struct {
		public: using __self = IndexRange;
		public: using __class = __Class_IndexRange;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange()  = default;
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr IndexRange(Index start, Index end, bool isClosed = Builtin::Boolean(false)) ;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr  IndexRange(const Range<T, IsClosed>& range) ;
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto operator==(const __self& other) const  -> const bool;
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetStart() const noexcept -> const Index;
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetEnd() const noexcept -> const Index;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: inline constexpr auto GetIsClosed() const noexcept -> const bool;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _start; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: Index _end; ADV_CHECK_REF_STRUCT("Index", Index);
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		private: bool _isClosed; ADV_CHECK_REF_STRUCT("bool", bool);
		template <size_t I> friend auto& get(IndexRange&);
		template <size_t I> friend const auto& get(const IndexRange&);
		
	};
	
		} namespace __extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	using __extension_Range_248_IndexRange = IndexRange;
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length(__extension_Range_248_IndexRange const& __this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct __static_StartAt; template<> struct __static_StartAt<__extension_Range_248_IndexRange> { static inline constexpr auto get(Index start)  -> const typename __extension_Range_248_IndexRange; };
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct __static_EndAt; template<> struct __static_EndAt<__extension_Range_248_IndexRange> { static inline constexpr auto get(Index end)  -> const typename __extension_Range_248_IndexRange; };
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct __static_InclusiveEndAt; template<> struct __static_InclusiveEndAt<__extension_Range_248_IndexRange> { static inline constexpr auto get(Index end)  -> const typename __extension_Range_248_IndexRange; };
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart(__extension_Range_248_IndexRange const& __this ) -> const Index;
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd(__extension_Range_248_IndexRange const& __this ) -> const Index;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed(__extension_Range_248_IndexRange const& __this ) -> const bool;
	#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode(__extension_Range_248_IndexRange const& __this ) -> const Builtin::u64;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class __TT> struct __static_getAll; template<> struct __static_getAll<__extension_Range_248_IndexRange> { static inline constexpr auto get() -> const __extension_Range_248_IndexRange; };
	} namespace System{
using __extensions::Length;
using __extensions::__static_StartAt;
using __extensions::__static_EndAt;
using __extensions::__static_InclusiveEndAt;
using __extensions::getStart;
using __extensions::getEnd;
using __extensions::getIsClosed;
using __extensions::getHashCode;
using __extensions::__static_getAll;

	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) class __Class_Range final : public Builtin::ValueType
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(IAbstractSequence, IAbstractSequence);
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISequence<T>, ISequence<T>);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using __underlying = Range<T, IsClosed>; using __self = __underlying;
		__self __value;
		using Iterator = __self::Iterator;
		using ReverseIterator = __self::ReverseIterator;
		__Class_Range(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getHashCode() const -> Builtin::u64 { return __value.getHashCode(); }
		auto Iterate() const  -> Iterator const { ADV_EXPRESSION_BODY(__value.Iterate()); }
		auto operator==(const __self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	

	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	class __Class_IndexRange final : public Builtin::ValueType
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_CHECK_INTERFACE(ISelfEquatable, ISelfEquatable);
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		public: using __underlying = IndexRange; using __self = __underlying;
		__self __value;
		__Class_IndexRange(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto operator==(const __self& other) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		
	};
	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	ADV_CHECK_FOR_CONCRETE(IndexRange);
	#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
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
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (!IsClosed) {
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if (end == start) {
				#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				Builtin::Throw(Builtin::InvalidArgumentException{});
			}
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
		ADV_EXPRESSION_BODY(Iterator((*this))); 
	}
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::Iterator::Iterator(const Range<T, IsClosed>& range)  : 
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(Start)(range.__ref())}, 
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(End)(range.__ref())}
	{
	}
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::MoveNext()  -> const bool
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_48 = Builtin::Cast<false, std::decay_t<decltype(_state)>::__self>(_state);
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_48.IsValid() && Builtin::Is(*__tmp__valid_48, Builtin::i32(1)))  {
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_48;
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).__ref()) = Builtin::i32(2);
					#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return Builtin::Boolean(true);
				}
			}
			else {
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_48.IsValid() && Builtin::Is(*__tmp__valid_48, Builtin::i32(2)))  {
					#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_48;
					#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						if constexpr (IsClosed) {
							#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							if (_current != _end) {
								#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								StepForward();
								#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								return Builtin::Boolean(true);
							}
						} else {
							#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							{
								#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
								if (StepForward() != _end) {
									#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
									return Builtin::Boolean(true);
								}
							}
						}
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).__ref()) = Builtin::i32(-1);
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::GetCurrent() const  -> const T
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::Iterator::StepForward()  -> const T
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return ++_current;
		} else {
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return _current = ADV_UFCS(RangeStepForward)(_current.__ref(), Builtin::u32(1U));
			}
		}
		return {};
	}
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr Range<T, IsClosed>::ReverseIterator::ReverseIterator(const Range<T, IsClosed>& range)  : 
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_current{ADV_UPCS(End)(range.__ref())}, 
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{ADV_UPCS(Start)(range.__ref())}
	{
	}
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::Iterate() const  -> const __self
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::MoveNext()  -> const bool
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		{
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			auto __tmp__valid_97 = Builtin::Cast<false, std::decay_t<decltype(_state)>::__self>(_state);
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if(__tmp__valid_97.IsValid() && Builtin::Is(*__tmp__valid_97, Builtin::i32(1)))  {
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				const auto& _state = *__tmp__valid_97;
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					if constexpr (!IsClosed) {
						#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						StepBackward();
					}
					#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					ADV_UPCS(_state)((*this).__ref()) = Builtin::i32(2);
					#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return Builtin::Boolean(true);
				}
			}
			else {
				#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if(__tmp__valid_97.IsValid() && Builtin::Is(*__tmp__valid_97, Builtin::i32(2)))  {
					#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					const auto& _state = *__tmp__valid_97;
					#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						if (_current != _end) {
							#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							StepBackward();
							#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
							return Builtin::Boolean(true);
						}
					}
				}
				 else { using __switchType = decltype(_state); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_UPCS(_state)((*this).__ref()) = Builtin::i32(-1);
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return Builtin::Boolean(false);
	}
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::GetCurrent() const  -> const T
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_current); 
	}
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::ReverseIterator::StepBackward()  -> void
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			--_current;
		} else {
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				_current = ADV_UFCS(RangeStepBackward)(_current.__ref(), Builtin::u32(1U));
			}
		}
	}
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::operator==(const __self& other) const  -> const bool
	{
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).__ref()) == ADV_UPCS(_start)(other.__ref()) && ADV_UPCS(_end)((*this).__ref()) == ADV_UPCS(_end)(other.__ref())); 
	}
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::getHashCode() const  -> Builtin::u64 
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).__ref()).__ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)((*this).__ref()).__ref()); 
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).__ref()).__ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)((*this).__ref()).__ref()); 
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ (ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2))));
	}
	
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetStart() const noexcept -> const T
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(Builtin::TypeIs<T, IValueEnumerable>() || Builtin::TypeIs<T, IRangeCustomIterator>()) inline constexpr auto Range<T, IsClosed>::GetEnd() const noexcept -> const T
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr IndexRange::IndexRange(Index start, Index end, bool isClosed)  : 
	#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_start{start}, 
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_end{end}, 
	#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	_isClosed{isClosed}
	{
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> requires(std::convertible_to<T, Index>) inline constexpr IndexRange::IndexRange(const Range<T, IsClosed>& range)  :
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	IndexRange(Builtin::Cast<true, Index>(ADV_UPCS_NONLOCAL(Start)(range.__ref())), Builtin::Cast<true, Index>(ADV_UPCS_NONLOCAL(End)(range.__ref())), IsClosed)
	{
	}
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::operator==(const __self& other) const  -> const bool
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_start)((*this).__ref()) == ADV_UPCS(_start)(other.__ref()) && ADV_UPCS(_end)((*this).__ref()) == ADV_UPCS(_end)(other.__ref()) && ADV_UPCS(_isClosed)((*this).__ref()) == ADV_UPCS(_isClosed)(other.__ref())); 
	}
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetStart() const noexcept -> const Index
	{
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_start); 
	}
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetEnd() const noexcept -> const Index
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_end); 
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto IndexRange::GetIsClosed() const noexcept -> const bool
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(_isClosed); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace __extensions { using namespace System;
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)(__this.__ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)(__this.__ref())) <= 0;
		} else {
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)(__this.__ref()) <=> val) <= 0 && (val <=> ADV_UPCS(End)(__this.__ref())) < 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && (ADV_UPCS(End)(range.__ref()) <=> ADV_UPCS(End)(__this.__ref())) <= 0;
		} else {
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
					#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && (ADV_UPCS(End)(range.__ref()) <=> (ADV_UPCS(End)(__this.__ref()) - Builtin::i32(1))) <= 0;
				} else {
					#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					{
						#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
						return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && (ADV_UPCS(End)(range.__ref()) <=> ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)(__this.__ref()).__ref(), Builtin::u32(1U))) <= 0;
					}
				}
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto Contains(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		if constexpr (IsClosed) {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			if constexpr (Builtin::TypeIs<T, IValueEnumerable>()) {
				#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && ((ADV_UPCS(End)(range.__ref()) - Builtin::i32(1)) <=> ADV_UPCS(End)(__this.__ref())) <= 0;
			} else {
				#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				{
					#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
					return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && (ADV_UFCS(RangeStepBackward)(ADV_UPCS(End)(range.__ref()).__ref(), Builtin::u32(1U)) <=> ADV_UPCS(End)(__this.__ref())) <= 0;
				}
			}
		} else {
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
			{
				#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
				return (ADV_UPCS(Start)(__this.__ref()) <=> ADV_UPCS(Start)(range.__ref())) <= 0 && (ADV_UPCS(End)(range.__ref()) <=> ADV_UPCS(End)(__this.__ref())) <= 0;
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<T> val)  -> const bool
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(__this.__ref(), val)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(true)>> range)  -> const bool
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(__this.__ref(), range)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto _operator_in(__extension_Range_143_Range<T, IsClosed> const& __this LIFETIMEBOUND, Builtin::In<Range<T, Builtin::Boolean(false)>> range)  -> const bool
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(__this.__ref(), range)); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getStart(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getEnd(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getReversed(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const typename __extension_Range_143_Range<T, IsClosed>::ReverseIterator
	{
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(typename __extension_Range_143_Range<T, IsClosed>::ReverseIterator{__this}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getLength(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const T
	{
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(End)(__this.__ref()) - ADV_UPCS(Start)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	template<class T, bool IsClosed> inline constexpr auto getIsEmpty(__extension_Range_143_Range<T, IsClosed> const& __this ) -> const bool
	{
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Length)(__this.__ref()) == Builtin::i32(0)); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	
} namespace __extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto Length(__extension_Range_248_IndexRange const& __this LIFETIMEBOUND, Builtin::usize size)  -> const Builtin::usize
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(Builtin::usize{ADV_UFCS(Offset)(ADV_UPCS(End)(__this.__ref()).__ref(), size) - ADV_UFCS(Offset)(ADV_UPCS(Start)(__this.__ref()).__ref(), size) + Builtin::i32{ADV_UPCS(IsClosed)(__this.__ref())}}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto __static_StartAt<__extension_Range_248_IndexRange>::get(Index start)  -> const typename __extension_Range_248_IndexRange
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(__extension_Range_248_IndexRange{start, ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto __static_EndAt<__extension_Range_248_IndexRange>::get(Index end)  -> const typename __extension_Range_248_IndexRange
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(__extension_Range_248_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(false)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto __static_InclusiveEndAt<__extension_Range_248_IndexRange>::get(Index end)  -> const typename __extension_Range_248_IndexRange
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(__extension_Range_248_IndexRange{ADV_USPCS(Start, Index)(), end, Builtin::Boolean(true)}); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getStart(__extension_Range_248_IndexRange const& __this ) -> const Index
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetStart)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getEnd(__extension_Range_248_IndexRange const& __this ) -> const Index
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetEnd)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getIsClosed(__extension_Range_248_IndexRange const& __this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetIsClosed)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto getHashCode(__extension_Range_248_IndexRange const& __this ) -> const Builtin::u64
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(Start)(__this.__ref()).__ref()))> startHash = ADV_UPCS(HashCode)(ADV_UPCS(Start)(__this.__ref()).__ref()); 
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		const Builtin::Auto<decltype(ADV_UPCS(HashCode)(ADV_UPCS(End)(__this.__ref()).__ref()))> endHash = ADV_UPCS(HashCode)(ADV_UPCS(End)(__this.__ref()).__ref()); 
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		return startHash ^ ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(endHash, Builtin::u32(0x9e3779b9U)), (startHash << Builtin::i32(6))), (startHash >> Builtin::i32(2)))), (ADV_UFCS(_operator_xor_xor)(Builtin::u64(23ULL), Builtin::u32{ADV_UPCS(IsClosed)(__this.__ref())})));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	inline constexpr auto __static_getAll<__extension_Range_248_IndexRange>::get() -> const __extension_Range_248_IndexRange
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
		ADV_EXPRESSION_BODY(__extension_Range_248_IndexRange{ADV_USPCS(Start, Index)(), ADV_USPCS(End, Index)(), Builtin::Boolean(false)}); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Range.ast"
	

}