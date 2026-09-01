#include "StringSpliterator.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	auto StringSpliterator::MoveNext()  -> const bool
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::Nullable<Builtin::usize> separatorIndex{}; 
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::usize separatorLength{}; 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::TrimEntries))> needTrim = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::TrimEntries); 
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::SkipEmptyEntries))> skipEmpty = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::SkipEmptyEntries); 
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::ProcessLineEndingAsSingleChar))> processLineEndingAsSingle = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::ProcessLineEndingAsSingleChar); 
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (_isAny) {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			separatorLength = Builtin::u32(1U);
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			separatorIndex = ADV_UFCS(IndexOfAny)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBytes);
		} else {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (_isBuffer) {
				#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				separatorLength = ADV_UPCS(Length)(_separatorBytes.$ref());
				#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), _separatorBytes);
			} else {
				#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				if (_isFilter) {
					#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					separatorLength = Builtin::u32(1U);
					#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					{ auto $for_init_133 = CharIndicesIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)))}; auto $for_iter_133 = ADV_UFCS(Iterate)($for_init_133.$ref()); while($for_iter_133.$ref().MoveNext()) {
					auto&& [offset, c] = $for_iter_133.$ref().GetCurrent(); {
						#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						if ((*(_separatorFilter))(c)) {
							#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							separatorIndex = offset;
							#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							break;
						}
					}}}
				} else {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (_separatorByte) {
						#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						separatorLength = Builtin::u32(1U);
						#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						separatorIndex = ADV_UFCS(IndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_startNext, System::Index::End, false)).$ref(), (*(_separatorByte)));
					} else {
						#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						{
							#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							return Builtin::Boolean(false);
						}
					}
				}
			}
		}
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::LocalFunction<void()> reset; reset = [&] ()
		{
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_endCurrent = ADV_UPCS(Length)(_src.$ref());
			#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_startNext = ADV_UPCS(Length)(_src.$ref());
			#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorByte = nullptr;
			#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isBuffer = Builtin::Boolean(false);
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isAny = Builtin::Boolean(false);
			#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isFilter = Builtin::Boolean(false);
		};
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		;
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_startCurrent = _startNext;
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (separatorIndex) {
			#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_endCurrent = _startCurrent + (*(separatorIndex));
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_startNext = _endCurrent + separatorLength;
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (processLineEndingAsSingle && (_endCurrent <=> (ADV_UPCS(Length)(_src.$ref()) - Builtin::u32(1U))) < 0 && ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, _endCurrent) == Builtin::u8('\r') && ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, _endCurrent + Builtin::u32(1U)) == Builtin::u8('\n')) {
				#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				++_startNext;
			}
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (needTrim) {
				#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				const Builtin::Auto<decltype(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), ADV_UFCS(GetByteLength)(ASCII_WHITESPACES.$ref())))> spaces = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), ADV_UFCS(GetByteLength)(ASCII_WHITESPACES.$ref())); 
				#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				Builtin::Auto<decltype(ADV_UFCS(TrimStart)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces))> trimmed = ADV_UFCS(TrimStart)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces); 
				#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				_startCurrent += (_endCurrent - _startCurrent) - ADV_UPCS(Length)(trimmed.$ref());
				#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				trimmed = ADV_UFCS(TrimEnd)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces);
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				_endCurrent -= (_endCurrent - _startCurrent) - ADV_UPCS(Length)(trimmed.$ref());
			}
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (skipEmpty && _endCurrent - _startCurrent == Builtin::u32(0U)) {
				#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				return MoveNext();
			}
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (++_count == _maxCount) {
				#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				reset();
			}
		} else {
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				reset();
				#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				return !skipEmpty || (_endCurrent - _startCurrent <=> Builtin::u32(0U)) > 0;
			}
		}
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		return Builtin::Boolean(true);
	}
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
	auto StringReverseSpliterator::MoveNext()  -> const bool
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::Nullable<Builtin::usize> separatorIndex{}; 
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::usize separatorLength{}; 
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::TrimEntries))> needTrim = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::TrimEntries); 
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::SkipEmptyEntries))> skipEmpty = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::SkipEmptyEntries); 
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		const Builtin::Auto<decltype(ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::ProcessLineEndingAsSingleChar))> processLineEndingAsSingle = ADV_UFCS(HasFlag)(_options.$ref(), StringSplitOptions::ProcessLineEndingAsSingleChar); 
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (_isAny) {
			#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			separatorIndex = ADV_UFCS(LastIndexOfAny)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), _separatorBytes);
			#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			separatorLength = Builtin::u32(1U);
		} else {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (_isBuffer) {
				#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				separatorIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), _separatorBytes);
				#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				separatorLength = ADV_UPCS(Length)(_separatorBytes.$ref());
			} else {
				#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				if (_isFilter) {
					#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					separatorLength = Builtin::u32(1U);
					#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					{ auto $for_init_320 = ReverseCharIndicesIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)))}; auto $for_iter_320 = ADV_UFCS(Iterate)($for_init_320.$ref()); while($for_iter_320.$ref().MoveNext()) {
					auto&& [offset, c] = $for_iter_320.$ref().GetCurrent(); {
						#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						if ((*(_separatorFilter))(c)) {
							#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							separatorIndex = offset;
							#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							break;
						}
					}}}
				} else {
					#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
					if (_separatorByte) {
						#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						separatorIndex = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endNext)>, false>({}, _endNext)).$ref(), (*(_separatorByte)));
						#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						separatorLength = Builtin::u32(1U);
					} else {
						#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
						{
							#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
							return Builtin::Boolean(false);
						}
					}
				}
			}
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		Builtin::LocalFunction<void()> reset; reset = [&] ()
		{
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_startCurrent = Builtin::u32(0U);
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_endNext = Builtin::u32(0U);
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_separatorByte = nullptr;
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isBuffer = Builtin::Boolean(false);
			#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isAny = Builtin::Boolean(false);
			#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_isFilter = Builtin::Boolean(false);
		};
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		;
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		_endCurrent = _endNext;
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		if (separatorIndex) {
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_endNext = (*(separatorIndex));
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			_startCurrent = _endNext + separatorLength;
			#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (processLineEndingAsSingle && (_endNext <=> Builtin::u32(0U)) > 0 && ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, _endNext) == Builtin::u8('\n') && ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, _endNext - Builtin::u32(1U)) == Builtin::u8('\r')) {
				#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				--_endNext;
			}
			#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (needTrim) {
				#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				const Builtin::Auto<decltype(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), ADV_UFCS(GetByteLength)(ASCII_WHITESPACES.$ref())))> spaces = ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(ASCII_WHITESPACES.$ref()), ADV_UFCS(GetByteLength)(ASCII_WHITESPACES.$ref())); 
				#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				Builtin::Auto<decltype(ADV_UFCS(TrimStart)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces))> trimmed = ADV_UFCS(TrimStart)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces); 
				#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				_startCurrent += (_endCurrent - _startCurrent) - ADV_UPCS(Length)(trimmed.$ref());
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				trimmed = ADV_UFCS(TrimEnd)(ADV_UFCS(_operator_subscript)(_src.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(_endCurrent)>, false>(_startCurrent, _endCurrent)).$ref(), spaces);
				#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				_endCurrent -= (_endCurrent - _startCurrent) - ADV_UPCS(Length)(trimmed.$ref());
			}
			#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (skipEmpty && _endCurrent - _startCurrent == Builtin::u32(0U)) {
				#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				return MoveNext();
			}
			#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			if (++_count == _maxCount) {
				#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				reset();
			}
		} else {
			#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
			{
				#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				reset();
				#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
				return !skipEmpty || (_endCurrent - _startCurrent <=> Builtin::u32(0U)) > 0;
			}
		}
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\StringSpliterator.ast"
		return Builtin::Boolean(true);
	}

}