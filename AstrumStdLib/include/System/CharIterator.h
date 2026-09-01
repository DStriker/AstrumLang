#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Char.h"
#include "Span.h"
#include "System/Collections/ISequence.h"
using namespace System::Collections;
#include "System/Collections/IIterator.h"
using namespace System::Collections;

namespace System {
namespace __Unsafe {} namespace __CharIterator$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CharIterator;
class CharIndicesIterator;
class ReverseCharIterator;
class ReverseCharIndicesIterator;
//###############################################################################
//# Type definitions
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	struct [[clang::annotate("ref_struct")]] CharIterator final : public Builtin::RefStruct {
		public: using $self = CharIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ElementType = Builtin::char32;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ReverseIterator = ReverseCharIterator;
		public: CharIterator() = default;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr explicit CharIterator(Builtin::Str data) noexcept;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Reset()  -> decltype(auto);
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetCurrent() const  -> const Builtin::char32;
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetData() const  -> const System::Span<Builtin::u8>;
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: System::Span<Builtin::u8> _data;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _nextIndex;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::char32 _current;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: static constexpr Builtin::InlineArray<6, Builtin::u32> Offsets = Builtin::ToInlineArray<Builtin::u32>({Builtin::u32(Builtin::i32(0x00000000)), Builtin::u32(Builtin::i32(0x00003080)), Builtin::u32(Builtin::i32(0x000E2080)), Builtin::u32(Builtin::i32(0x03C82080)), Builtin::u32(Builtin::i64(0xFA082080LL)), Builtin::u32(Builtin::i64(0x82082080LL))});
		
	};
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIterator, IAbstractSequence, IAbstractSequence, CharIterator);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIterator, ISequence, ISequence<Builtin::char32>, CharIterator);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIterator, IAbstractIterator, IAbstractIterator, CharIterator);
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIterator, IIterator, IIterator<Builtin::char32>, CharIterator);
	
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	struct [[clang::annotate("ref_struct")]] CharIndicesIterator final : public Builtin::RefStruct {
		public: using $self = CharIndicesIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ElementType = std::tuple<Builtin::usize, Builtin::char32>;
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ReverseIterator = ReverseCharIndicesIterator;
		public: CharIndicesIterator() = default;
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr explicit CharIndicesIterator(Builtin::Str data) noexcept;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Reset()  -> void;
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::char32>;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetData() const  -> const System::Span<Builtin::u8>;
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _offset;
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _nextOffset;
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: CharIterator _iterator;
		
	};
	
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIndicesIterator, IAbstractSequence, IAbstractSequence, CharIndicesIterator);
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIndicesIterator, ISequence, ISequence<std::tuple<Builtin::usize, Builtin::char32>>, CharIndicesIterator);
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIndicesIterator, IAbstractIterator, IAbstractIterator, CharIndicesIterator);
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(CharIndicesIterator, IIterator, IIterator<std::tuple<Builtin::usize, Builtin::char32>>, CharIndicesIterator);
	
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	struct [[clang::annotate("ref_struct")]] ReverseCharIterator final : public Builtin::RefStruct {
		public: using $self = ReverseCharIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ElementType = Builtin::char32;
		public: ReverseCharIterator() = default;
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr explicit ReverseCharIterator(Builtin::Str data) noexcept;
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Reset()  -> decltype(auto);
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetCurrent() const  -> const Builtin::char32;
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: System::Span<Builtin::u8> _data;
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _nextIndex;
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::char32 _current;
		
	};
	
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIterator, IAbstractSequence, IAbstractSequence, ReverseCharIterator);
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIterator, ISequence, ISequence<Builtin::char32>, ReverseCharIterator);
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIterator, IAbstractIterator, IAbstractIterator, ReverseCharIterator);
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIterator, IIterator, IIterator<Builtin::char32>, ReverseCharIterator);
	
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	struct [[clang::annotate("ref_struct")]] ReverseCharIndicesIterator final : public Builtin::RefStruct {
		public: using $self = ReverseCharIndicesIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: using ElementType = std::tuple<Builtin::usize, Builtin::char32>;
		public: ReverseCharIndicesIterator() = default;
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr explicit ReverseCharIndicesIterator(Builtin::Str data) noexcept;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Reset()  -> void;
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::char32>;
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetRemainingByteLength() const  -> const Builtin::usize;
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Iterate() const  -> const $self;
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _offset;
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: ReverseCharIterator _iterator;
		
	};
	
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIndicesIterator, IAbstractSequence, IAbstractSequence, ReverseCharIndicesIterator);
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIndicesIterator, ISequence, ISequence<std::tuple<Builtin::usize, Builtin::char32>>, ReverseCharIndicesIterator);
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIndicesIterator, IAbstractIterator, IAbstractIterator, ReverseCharIndicesIterator);
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseCharIndicesIterator, IIterator, IIterator<std::tuple<Builtin::usize, Builtin::char32>>, ReverseCharIndicesIterator);
	
		} namespace $extensions { using namespace System;
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	using $extension_CharIterator_194_CharIterator = CharIterator;
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto getReversed($extension_CharIterator_194_CharIterator const& $this ) -> const typename $extension_CharIterator_194_CharIterator::ReverseIterator;
	} namespace System{
using $extensions::getReversed;

		} namespace $extensions { using namespace System;
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	using $extension_CharIterator_201_CharIndicesIterator = CharIndicesIterator;
	#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto getReversed($extension_CharIterator_201_CharIndicesIterator const& $this ) -> const typename $extension_CharIterator_201_CharIndicesIterator::ReverseIterator;
	} namespace System{
using $extensions::getReversed;

	} namespace $extensions {
template<class __TT> struct $static_GetData;
template<class __TT> struct $static_getGetData;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_Reset;
template<class __TT> struct $static_getReset;
template<class __TT> struct $static_IsAscii;
template<class __TT> struct $static_getIsAscii;
template<class __TT> struct $static_IsUtf8CodePointBoundary;
template<class __TT> struct $static_getIsUtf8CodePointBoundary;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_Utf8TrailingByteCount;
template<class __TT> struct $static_getUtf8TrailingByteCount;
template<class __TT> struct $static__current;
template<class __TT> struct $static_get_current;
template<class __TT> struct $static__data;
template<class __TT> struct $static_get_data;
template<class __TT> struct $static_GetRemainingByteLength;
template<class __TT> struct $static_getGetRemainingByteLength;
template<class __TT> struct $static_MoveNext;
template<class __TT> struct $static_getMoveNext;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_GetCurrent;
template<class __TT> struct $static_getGetCurrent;
template<class __TT> struct $static__iterator;
template<class __TT> struct $static_get_iterator;
template<class __TT> struct $static_NarrowToInt8;
template<class __TT> struct $static_getNarrowToInt8;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr CharIterator::CharIterator(Builtin::Str data) noexcept : 
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_data{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(data.$ref()), ADV_UFCS(GetByteLength)(data.$ref()))}, 
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_nextIndex{Builtin::u32(0U)}, 
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_current{Builtin::char32(U'\0')}
	{
	}
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::MoveNext()  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((_nextIndex <=> ADV_UPCS(Length)(_data.$ref())) >= 0) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(false);
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_current = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, _nextIndex++);
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (ADV_UPCS(IsAscii)(_current.$ref())) {
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(Builtin::u8{_current}.$ref())) {
			#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Utf8TrailingByteCount)(Builtin::u8{_current}.$ref()))> trailingBytes = ADV_UPCS(Utf8TrailingByteCount)(Builtin::u8{_current}.$ref()); 
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((_nextIndex + trailingBytes <=> ADV_UPCS(Length)(_data.$ref())) > 0) {
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(_current))> currentChar = Builtin::Cast<true, Builtin::u32>(_current); 
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		{ auto $for_init_43 = System::Range<Builtin::Auto<decltype(trailingBytes)>, false>({}, trailingBytes); auto $for_iter_43 = ADV_UFCS(Iterate)($for_init_43.$ref()); while($for_iter_43.$ref().MoveNext()) {
		auto&& i = $for_iter_43.$ref().GetCurrent(); {
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			currentChar <<= Builtin::i32(6);
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			currentChar += ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, _nextIndex++);
		}}}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		currentChar -= ADV_UFCS(_operator_subscript)(Offsets.$ref(), Builtin::UncheckedTag{}, trailingBytes);
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_current = Builtin::Cast<true, Builtin::char32>(currentChar);
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return Builtin::Boolean(true);
	}
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::Reset()  -> decltype(auto)
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(_nextIndex = Builtin::u32(0U)); 
	}
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::GetCurrent() const  -> const Builtin::char32
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::GetData() const  -> const System::Span<Builtin::u8>
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_data)((*this).$ref())); 
	}
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Length)(_data.$ref()) - _nextIndex); 
	}
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::Iterate() const  -> const $self
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr CharIndicesIterator::CharIndicesIterator(Builtin::Str data) noexcept : 
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_offset{Builtin::u32(0U)}, 
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_nextOffset{Builtin::u32(0U)}, 
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_iterator{CharIterator{data}}
	{
	}
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::MoveNext()  -> const bool
	{
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(GetRemainingByteLength)(_iterator.$ref()))> oldLen = ADV_UFCS(GetRemainingByteLength)(_iterator.$ref()); 
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (ADV_UFCS(MoveNext)(_iterator.$ref())) {
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			_offset = _nextOffset;
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			ADV_UFCS(_operator_add_mod_eq)(_nextOffset, oldLen - ADV_UFCS(GetRemainingByteLength)(_iterator.$ref()));
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return Builtin::Boolean(false);
	}
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::Reset()  -> void
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_offset = ADV_USPCS(MaxValue, Builtin::usize)();
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_UFCS(Reset)(_iterator.$ref());
	}
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::char32>
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(_offset, ADV_UFCS(GetCurrent)(_iterator.$ref()))); 
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::GetData() const  -> const System::Span<Builtin::u8>
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this).$ref()._iterator.$ref().GetData()); 
	}
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetRemainingByteLength)(_iterator.$ref())); 
	}
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIndicesIterator::Iterate() const  -> const $self
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr ReverseCharIterator::ReverseCharIterator(Builtin::Str data) noexcept : 
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_data{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(data.$ref()), ADV_UFCS(GetByteLength)(data.$ref()))}, 
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_nextIndex{ADV_UFCS(_operator_sub_mod)(ADV_UFCS(GetByteLength)(data.$ref()), Builtin::u32(1U))}, 
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_current{Builtin::char32(U'\0')}
	{
	}
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIterator::MoveNext()  -> const bool
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((_nextIndex <=> ADV_UPCS(Length)(_data.$ref())) >= 0) {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(false);
		}
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)))> last = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)); 
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (ADV_UPCS(IsAscii)(last.$ref())) {
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			_current = last;
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)))> third = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)); 
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		Builtin::u32 codepoint = third & (Builtin::u32(0x7FU) >> Builtin::i32(2)); 
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((ADV_UFCS(NarrowToInt8)(third.$ref()) <=> (Builtin::i32(-64))) < 0) {
			#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)))> second = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)); 
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			codepoint = second & (Builtin::u32(0x7FU) >> Builtin::i32(3));
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			if ((ADV_UFCS(NarrowToInt8)(second.$ref()) <=> (Builtin::i32(-64))) < 0) {
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)))> first = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, ADV_UFCS(_operator_sub_sub_mod_postfix)(_nextIndex)); 
				#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
				if (!ADV_UPCS(IsUtf8CodePointBoundary)(first.$ref())) {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
					Builtin::Throw(Builtin::InvalidOperationException{});
				}
				#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
				codepoint = first & (Builtin::u32(0x7FU) >> Builtin::i32(4));
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
				codepoint = (codepoint << Builtin::i32(6)) | (second & Builtin::u32(0x3FU));
			}
			#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			codepoint = (codepoint << Builtin::i32(6)) | (third & Builtin::u32(0x3FU));
		}
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		codepoint = (codepoint << Builtin::i32(6)) | (last & Builtin::u32(0x3FU));
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_current = Builtin::Cast<true, Builtin::char32>(codepoint);
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return Builtin::Boolean(true);
	}
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIterator::Reset()  -> decltype(auto)
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(_nextIndex = ADV_UPCS(Length)(_data.$ref()) - Builtin::u32(1U)); 
	}
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIterator::GetCurrent() const  -> const Builtin::char32
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod)(_nextIndex, Builtin::u32(1U))); 
	}
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIterator::Iterate() const  -> const $self
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr ReverseCharIndicesIterator::ReverseCharIndicesIterator(Builtin::Str data) noexcept : 
	#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_offset{ADV_UFCS(GetByteLength)(data.$ref())}, 
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_iterator{ReverseCharIterator{data}}
	{
	}
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIndicesIterator::MoveNext()  -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(GetRemainingByteLength)(_iterator.$ref()))> oldLen = ADV_UFCS(GetRemainingByteLength)(_iterator.$ref()); 
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (ADV_UFCS(MoveNext)(_iterator.$ref())) {
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			_offset -= oldLen - ADV_UFCS(GetRemainingByteLength)(_iterator.$ref());
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return Builtin::Boolean(false);
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIndicesIterator::Reset()  -> void
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_offset = ADV_USPCS(MaxValue, Builtin::usize)();
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_UFCS(Reset)(_iterator.$ref());
	}
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIndicesIterator::GetCurrent() const  -> const std::tuple<Builtin::usize, Builtin::char32>
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(_offset, ADV_UFCS(GetCurrent)(_iterator.$ref()))); 
	}
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIndicesIterator::GetRemainingByteLength() const  -> const Builtin::usize
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetRemainingByteLength)(_iterator.$ref())); 
	}
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto ReverseCharIndicesIterator::Iterate() const  -> const $self
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	
} namespace $extensions { using namespace System;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto getReversed($extension_CharIterator_194_CharIterator const & $this ) -> const typename $extension_CharIterator_194_CharIterator::ReverseIterator
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		using TIterator = typename $extension_CharIterator_194_CharIterator::ReverseIterator;
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return TIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(GetData)($this.$ref()))};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	
} namespace $extensions { using namespace System;
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto getReversed($extension_CharIterator_201_CharIndicesIterator const & $this ) -> const typename $extension_CharIterator_201_CharIndicesIterator::ReverseIterator
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		using TIterator = typename $extension_CharIterator_201_CharIndicesIterator::ReverseIterator;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return TIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(GetData)($this.$ref()))};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	

}