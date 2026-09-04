#include "TextElementIterator.h"

namespace System::Globalization {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
	auto TextElementIterator::MoveNext()  -> const bool
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		_currentTextElementOffset = _nextTextElementOffset;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		if ((_currentTextElementOffset <=> ADV_UPCS(Length)(_data.$ref())) >= 0) {
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			return Builtin::Boolean(false);
		}
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		Builtin::Auto<decltype(CharIndicesIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_currentTextElementOffset, System::Index::End, false)))})> charIterator = CharIndicesIterator{ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::Str>)(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange(_currentTextElementOffset, System::Index::End, false)))}; 
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		GraphemeClusterBreakType currentBreakType{}; 
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		auto nextStep = [&] () 
		{
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			if (ADV_UFCS(MoveNext)(charIterator.$ref())) {
				#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				currentBreakType = ADV_USFCS((CharUnicodeInfo), GetGraphemeClusterBreakType)(get<1>(ADV_UFCS(GetCurrent)(charIterator.$ref())));
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				return Builtin::Boolean(true);
			}
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			currentBreakType = std::decay_t<decltype(currentBreakType)>::Other;
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			return Builtin::Boolean(false);
		}; 
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		nextStep();
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		const Builtin::Auto<decltype(currentBreakType == std::decay_t<decltype(currentBreakType)>::Prepend)> hasPrepend = currentBreakType == std::decay_t<decltype(currentBreakType)>::Prepend; 
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		Builtin::Defer $defer_39_8{[&]() {{
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			const Builtin::usize textElementLength = get<0>(ADV_UFCS(GetCurrent)(charIterator.$ref())); 
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			if (textElementLength == ADV_USPCS(MaxValue, Builtin::usize)()) {
				#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				_nextTextElementOffset = ADV_UPCS(Length)(_data.$ref());
			} else {
				#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				{
					#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
					_nextTextElementOffset = _currentTextElementOffset + textElementLength;
				}
			}
		}}};
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		while (currentBreakType == std::decay_t<decltype(currentBreakType)>::Prepend && nextStep()) 
		{
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		if (hasPrepend) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			if (currentBreakType == std::decay_t<decltype(currentBreakType)>::Control || currentBreakType == std::decay_t<decltype(currentBreakType)>::CR || currentBreakType == std::decay_t<decltype(currentBreakType)>::LF) {
				#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		Builtin::Auto<decltype(currentBreakType)> prevBreakType = currentBreakType; 
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		nextStep();
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		CONTINUE_stateMachine: {{
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
			{
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				auto __tmp__valid_67 = Builtin::Cast<false, std::decay_t<decltype((prevBreakType))>::$self>((prevBreakType));
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
				if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::CR))  {
					#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
					{
						#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
						if (currentBreakType == std::decay_t<decltype(currentBreakType)>::LF) {
							#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
							nextStep();
						}
					}
				}
				else {
					#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
					if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::L))  {
						#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
						{
							#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
							{
								#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
								auto __tmp__valid_75 = Builtin::Cast<false, std::decay_t<decltype(currentBreakType)>::$self>(currentBreakType);
								#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
								if(__tmp__valid_75.IsValid() && Builtin::Is(*__tmp__valid_75, std::decay_t<decltype(currentBreakType)>::L))  {
									#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									const auto& currentBreakType = *__tmp__valid_75;
									#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									{
										#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										nextStep();
										#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										goto CONTINUE_stateMachine;
									}
								}
								else {
									#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									if(__tmp__valid_75.IsValid() && Builtin::Is(*__tmp__valid_75, std::decay_t<decltype(currentBreakType)>::V))  {
										#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										const auto& currentBreakType = *__tmp__valid_75;
										#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										{
											#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											nextStep();
											#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											prevBreakType = std::decay_t<decltype(currentBreakType)>::V;
											#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											goto CONTINUE_stateMachine;
										}
									}
									else {
										#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										if(__tmp__valid_75.IsValid() && Builtin::Is(*__tmp__valid_75, std::decay_t<decltype(currentBreakType)>::LV))  {
											#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											const auto& currentBreakType = *__tmp__valid_75;
											#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											{
												#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												nextStep();
												#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												prevBreakType = std::decay_t<decltype(currentBreakType)>::LV;
												#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												goto CONTINUE_stateMachine;
											}
										}
										else {
											#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											if(__tmp__valid_75.IsValid() && Builtin::Is(*__tmp__valid_75, std::decay_t<decltype(currentBreakType)>::LVT))  {
												#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												const auto& currentBreakType = *__tmp__valid_75;
												#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												{
													#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
													nextStep();
													#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
													prevBreakType = std::decay_t<decltype(currentBreakType)>::LVT;
													#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
													goto CONTINUE_stateMachine;
												}
											}
											else {
												#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												{
												}
												
											}
										}
									}
								}
							}

						}
					}
					else {
						#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
						if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::LV) || Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::V))  {
							#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
							{
								#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
								{
									#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									auto __tmp__valid_99 = Builtin::Cast<false, std::decay_t<decltype(currentBreakType)>::$self>(currentBreakType);
									#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									if(__tmp__valid_99.IsValid() && Builtin::Is(*__tmp__valid_99, std::decay_t<decltype(currentBreakType)>::V))  {
										#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										const auto& currentBreakType = *__tmp__valid_99;
										#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										{
											#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											nextStep();
											#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											prevBreakType = std::decay_t<decltype(currentBreakType)>::V;
											#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											goto CONTINUE_stateMachine;
										}
									}
									else {
										#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										if(__tmp__valid_99.IsValid() && Builtin::Is(*__tmp__valid_99, std::decay_t<decltype(currentBreakType)>::T))  {
											#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											const auto& currentBreakType = *__tmp__valid_99;
											#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											{
												#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												nextStep();
												#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												prevBreakType = std::decay_t<decltype(currentBreakType)>::T;
												#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												goto CONTINUE_stateMachine;
											}
										}
										else {
											#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											{
											}
											
										}
									}
								}

							}
						}
						else {
							#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
							if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::LVT) || Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::T))  {
								#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
								{
									#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									{
										#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										auto __tmp__valid_114 = Builtin::Cast<false, std::decay_t<decltype(currentBreakType)>::$self>(currentBreakType);
										#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										if(__tmp__valid_114.IsValid() && Builtin::Is(*__tmp__valid_114, std::decay_t<decltype(currentBreakType)>::T))  {
											#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											const auto& currentBreakType = *__tmp__valid_114;
											#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											{
												#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												nextStep();
												#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												prevBreakType = std::decay_t<decltype(currentBreakType)>::T;
												#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												goto CONTINUE_stateMachine;
											}
										}
										else {
											#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											{
											}
											
										}
									}

								}
							}
							else {
								#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
								if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::ExtendedPictograph))  {
									#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									{
										#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										while (currentBreakType == std::decay_t<decltype(currentBreakType)>::Extend && nextStep()) 
										{
										}
										#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										if (currentBreakType == std::decay_t<decltype(currentBreakType)>::ZWJ) {
											#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											nextStep();
											#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											if (currentBreakType == std::decay_t<decltype(currentBreakType)>::ExtendedPictograph) {
												#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												nextStep();
												#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												goto CONTINUE_stateMachine;
											}
										}
									}
								}
								else {
									#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
									if(__tmp__valid_67.IsValid() && Builtin::Is(*__tmp__valid_67, std::decay_t<decltype((prevBreakType))>::RegionalIndicator))  {
										#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										{
											#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
											if (currentBreakType == std::decay_t<decltype(currentBreakType)>::RegionalIndicator) {
												#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
												nextStep();
											}
										}
									}
									else {
										#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
										{
										}
										
									}
								}
							}
						}
					}
				}
			}

		} BREAK_stateMachine:; }
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		while ((currentBreakType == std::decay_t<decltype(currentBreakType)>::Extend || currentBreakType == std::decay_t<decltype(currentBreakType)>::ZWJ || currentBreakType == std::decay_t<decltype(currentBreakType)>::SpacingMark) && nextStep()) 
		{
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\TextElementIterator.ast"
		return Builtin::Boolean(true);
	}

}