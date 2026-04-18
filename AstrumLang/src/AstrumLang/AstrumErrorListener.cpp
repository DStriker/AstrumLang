#include "AstrumErrorListener.h"

#include <memory>

using namespace antlr4;

namespace AstrumLang {

	void DefaultAstrumErrorListener::semanticError(const AstrumParserVisitor* sema,
	                                               const std::string& msg,
	                                               const antlr4::Token* token) {}

	void DefaultAstrumErrorListener::syntaxError(Recognizer* recognizer, Token* offendingSymbol,
	                                             size_t line, size_t charPositionInLine,
	                                             const std::string& msg, std::exception_ptr e) {}

	void DefaultAstrumErrorListener::reportAmbiguity(Parser* recognizer, const dfa::DFA& dfa,
	                                                 size_t startIndex, size_t stopIndex,
	                                                 bool exact, const antlrcpp::BitSet& ambigAlts,
	                                                 atn::ATNConfigSet* configs) {}

	void DefaultAstrumErrorListener::reportAttemptingFullContext(
	    Parser* recognizer, const dfa::DFA& dfa, size_t startIndex, size_t stopIndex,
	    const antlrcpp::BitSet& conflictingAlts, atn::ATNConfigSet* configs) {}

	void DefaultAstrumErrorListener::reportContextSensitivity(Parser* recognizer,
	                                                          const dfa::DFA& dfa,
	                                                          size_t startIndex, size_t stopIndex,
	                                                          size_t prediction,
	                                                          atn::ATNConfigSet* configs) {}

}  // namespace AstrumLang