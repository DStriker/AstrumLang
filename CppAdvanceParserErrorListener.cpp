#include "CppAdvanceParserErrorListener.h"
#include "CppAdvanceSema.h"

using namespace antlr4;

void CppAdvanceParserErrorListener::syntaxError(Recognizer* recognizer, Token* offendingSymbol, size_t line, size_t charPositionInLine, const std::string& msg, std::exception_ptr e)
{
	if (offendingSymbol)
		CppAdvanceCompilerError(msg, offendingSymbol);
	else
		CppAdvanceCompilerError(msg, {line,charPositionInLine});
}

void CppAdvanceParserErrorListener::reportAmbiguity(Parser* recognizer, const dfa::DFA& dfa, size_t startIndex, size_t stopIndex, bool exact, const antlrcpp::BitSet& ambigAlts, atn::ATNConfigSet* configs)
{
	
}

void CppAdvanceParserErrorListener::reportAttemptingFullContext(Parser* recognizer, const dfa::DFA& dfa, size_t startIndex, size_t stopIndex, const antlrcpp::BitSet& conflictingAlts, atn::ATNConfigSet* configs)
{
	
}

void CppAdvanceParserErrorListener::reportContextSensitivity(Parser* recognizer, const dfa::DFA& dfa, size_t startIndex, size_t stopIndex, size_t prediction, atn::ATNConfigSet* configs)
{
	
}
