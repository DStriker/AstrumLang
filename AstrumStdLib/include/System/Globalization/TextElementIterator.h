#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "System/CharIterator.h"
using namespace System;

namespace System::Globalization {
namespace __Unsafe {} namespace __TextElementIterator$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class TextElementIterator;
class TextElementIndicesIterator;
//###############################################################################
//# Type definitions
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	struct [[clang::annotate("ref_struct")]] TextElementIterator final : public Builtin::RefStruct {
		public: using $self = TextElementIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: using ElementType = Builtin::Str;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		private: friend class TextElementIndicesIterator; friend class $Class_TextElementIndicesIterator;
		public: TextElementIterator() = default;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline explicit TextElementIterator(Builtin::Str data) noexcept;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: ASTRUMSTD_API auto MoveNext()  -> const bool;
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto Reset()  -> void;
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetData() const  -> const System::Span<Builtin::u8>;
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		private: System::Span<Builtin::u8> _data;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		private: Builtin::usize _currentTextElementOffset;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		private: Builtin::usize _nextTextElementOffset;
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIterator, IAbstractSequence, IAbstractSequence, TextElementIterator);
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIterator, ISequence, ISequence<Builtin::Str>, TextElementIterator);
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIterator, IAbstractIterator, IAbstractIterator, TextElementIterator);
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIterator, IIterator, IIterator<Builtin::Str>, TextElementIterator);
	
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	struct [[clang::annotate("ref_struct")]] TextElementIndicesIterator final : public Builtin::RefStruct {
		public: using $self = TextElementIndicesIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: using ElementType = std::tuple<Builtin::usize, Builtin::Str>;
		public: TextElementIndicesIterator() = default;
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline explicit TextElementIndicesIterator(Builtin::Str data) noexcept;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto MoveNext()  -> const bool;
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto Reset()  -> decltype(auto);
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::Str>;
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetData() const  -> const System::Span<Builtin::u8>;
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		private: TextElementIterator _iterator;
		
	};
	
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIndicesIterator, IAbstractSequence, IAbstractSequence, TextElementIndicesIterator);
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIndicesIterator, ISequence, ISequence<std::tuple<Builtin::usize, Builtin::Str>>, TextElementIndicesIterator);
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIndicesIterator, IAbstractIterator, IAbstractIterator, TextElementIndicesIterator);
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(TextElementIndicesIterator, IIterator, IIterator<std::tuple<Builtin::usize, Builtin::Str>>, TextElementIndicesIterator);
	
	} namespace $extensions {
template<class __TT> struct $static_GetGraphemeClusterBreakType;
template<class __TT> struct $static_getGetGraphemeClusterBreakType;
template<class __TT> struct $static_GetData;
template<class __TT> struct $static_getGetData;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_MoveNext;
template<class __TT> struct $static_getMoveNext;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_GetCurrent;
template<class __TT> struct $static_getGetCurrent;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static__data;
template<class __TT> struct $static_get_data;
template<class __TT> struct $static_Reset;
template<class __TT> struct $static_getReset;
template<class __TT> struct $static__currentTextElementOffset;
template<class __TT> struct $static_get_currentTextElementOffset;
template<class __TT> struct $static_GetRemainingByteLength;
template<class __TT> struct $static_getGetRemainingByteLength;
} namespace System::Globalization {
//###############################################################################
//# Function definitions
//###############################################################################

#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline TextElementIterator::TextElementIterator(Builtin::Str data) noexcept : 
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	_data{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(data.$ref()), ADV_UFCS(GetByteLength)(data.$ref()))}
	{
	}
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIterator::Reset()  -> void
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		_currentTextElementOffset = Builtin::u32(0U);
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		_nextTextElementOffset = Builtin::u32(0U);
	}
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_nextTextElementOffset)>, false>(_currentTextElementOffset, _nextTextElementOffset)))); 
	}
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIterator::GetData() const  -> const System::Span<Builtin::u8>
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_data)((*this).$ref())); 
	}
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Length)(_data.$ref()) - _nextTextElementOffset); 
	}
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIterator::Iterate() const  -> const $self
	{
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline TextElementIndicesIterator::TextElementIndicesIterator(Builtin::Str data) noexcept : 
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	_iterator{TextElementIterator{data}}
	{
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::MoveNext()  -> const bool
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(_iterator.$ref().MoveNext()); 
	}
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::Reset()  -> decltype(auto)
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(_iterator.$ref().Reset()); 
	}
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::Str>
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(ADV_UPCS(_currentTextElementOffset)(_iterator.$ref()), _iterator.$ref().GetCurrent())); 
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::GetData() const  -> const System::Span<Builtin::u8>
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(_iterator.$ref().GetData()); 
	}
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY(_iterator.$ref().GetRemainingByteLength()); 
	}
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	inline auto TextElementIndicesIterator::Iterate() const  -> const $self
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	

}