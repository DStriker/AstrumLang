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
} namespace $extensions {
} namespace System {
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
		public: CharIterator() = default;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr explicit CharIterator(Builtin::Str data) noexcept;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto MoveNext()  -> const bool;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Reset()  -> decltype(auto);
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto GetCurrent() const  -> const Builtin::char32;
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		public: inline constexpr auto Iterate() const  -> const CharIterator;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: System::Span<Builtin::u8> _data;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::usize _nextIndex;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: Builtin::char32 _current;
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		private: static constexpr Builtin::InlineArray<256, Builtin::u8> TrailingBytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(0)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(1)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(2)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(3)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(4)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(5)), Builtin::u8(Builtin::i32(5))});
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
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
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr CharIterator::CharIterator(Builtin::Str data) noexcept : 
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_data{ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(data.$ref()), ADV_UFCS(GetByteLength)(data.$ref()))}, 
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_nextIndex{Builtin::u32(0U)}, 
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	_current{Builtin::char32(U'\0')}
	{
	}
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::MoveNext()  -> const bool
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((_nextIndex <=> ADV_UPCS(Length)(_data.$ref())) >= 0) {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(false);
		}
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_current = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, _nextIndex++);
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (ADV_UPCS(IsAscii)(_current.$ref())) {
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(Builtin::u8{_current}.$ref())) {
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(TrailingBytes.$ref(), Builtin::UncheckedTag{}, _current))> trailingBytes = ADV_UFCS(_operator_subscript)(TrailingBytes.$ref(), Builtin::UncheckedTag{}, _current); 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		if ((_nextIndex + trailingBytes <=> ADV_UPCS(Length)(_data.$ref())) > 0) {
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			return Builtin::Boolean(true);
		}
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(_current))> currentChar = Builtin::Cast<true, Builtin::u32>(_current); 
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		{ auto $for_init_42 = System::Range<Builtin::Auto<decltype(trailingBytes)>, false>({}, trailingBytes); auto $for_iter_42 = ADV_UFCS(Iterate)($for_init_42.$ref()); while($for_iter_42.$ref().MoveNext()) {
		auto&& i = $for_iter_42.$ref().GetCurrent(); {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			currentChar <<= Builtin::i32(6);
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
			currentChar += ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, _nextIndex++);
		}}}
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		currentChar -= ADV_UFCS(_operator_subscript)(Offsets.$ref(), Builtin::UncheckedTag{}, trailingBytes);
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		_current = Builtin::Cast<true, Builtin::char32>(currentChar);
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		return Builtin::Boolean(true);
	}
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::Reset()  -> decltype(auto)
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(_nextIndex = Builtin::u32(0U)); 
	}
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::GetCurrent() const  -> const Builtin::char32
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	inline constexpr auto CharIterator::Iterate() const  -> const CharIterator
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\CharIterator.ast"
	

}