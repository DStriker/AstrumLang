#pragma once
#include "antlr4-runtime.h"


class CppAdvanceLexerBase : public antlr4::Lexer
{
public:
	explicit CppAdvanceLexerBase(antlr4::CharStream* input) : antlr4::Lexer(input) {}

protected:
	std::stack<char> interpolatedTypes;
	std::stack<int> curlyLevels;
	int interpolatedStringLevel = 0;
	char currentInterpolatedType = 0;

	void OnInterpolatedRegularStringStart() {
		interpolatedStringLevel++;
		interpolatedTypes.push(0);
		currentInterpolatedType = 0;
	}

	void OnInterpolatedVerbatiumStringStart() {
		interpolatedStringLevel++;
		interpolatedTypes.push(1);
		currentInterpolatedType = 1;
	}

	void OnInterpolatedMultilineStringStart() {
		interpolatedStringLevel++;
		interpolatedTypes.push(2);
		currentInterpolatedType = 2;
	}

	void OnOpenBrace() {
		if (interpolatedStringLevel > 0)
		{
			curlyLevels.top()++;
		}
	}

	void OnCloseBrace() {
		if (interpolatedStringLevel > 0)
		{
			curlyLevels.top()--;
			if (curlyLevels.top() == 0)
			{
				curlyLevels.pop();
				skip();
				popMode();
			}
		}
	}

	void OnColon();

	void OpenBraceInside() {
		curlyLevels.push(1);
	}

	void OnCloseBraceInside() {
		curlyLevels.pop();
	}

	bool IsRegularCharInside() {
		return currentInterpolatedType == 0;
	}

	bool IsVerbatiumCharInside() {
		return currentInterpolatedType == 1;
	}

	bool IsMultilineStringInside() {
		return currentInterpolatedType == 2;
	}

	void OnDoubleQuoteInside() {
		interpolatedStringLevel--;
		interpolatedTypes.pop();
		currentInterpolatedType = !interpolatedTypes.empty() ? interpolatedTypes.top() : 0;
	}

	void OnGraveInside() {
		interpolatedStringLevel--;
		interpolatedTypes.pop();
		currentInterpolatedType = !interpolatedTypes.empty() ? interpolatedTypes.top() : 0;
	}

	void OnTripleQuoteInside() {
		interpolatedStringLevel--;
		interpolatedTypes.pop();
		currentInterpolatedType = !interpolatedTypes.empty() ? interpolatedTypes.top() : 0;
	}
};

