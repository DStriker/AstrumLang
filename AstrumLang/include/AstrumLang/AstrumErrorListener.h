#pragma once
#include "AstrumParserVisitor.h"
#include "antlr4-runtime.h"
#include "export.h"

namespace AstrumLang {
	class ASTRUMLANG_API AstrumErrorListener : public antlr4::ANTLRErrorListener {
	   public:
		virtual void semanticError(const AstrumParserVisitor* sema, const std::string& msg,
		                           const antlr4::Token* token) = 0;
	};

	class ASTRUMLANG_API DefaultAstrumErrorListener : public AstrumErrorListener {
	   public:
		void semanticError(const AstrumParserVisitor* sema, const std::string& msg,
		                   const antlr4::Token* token) override;

		void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol,
		                 size_t line, size_t charPositionInLine, const std::string& msg,
		                 std::exception_ptr e) override;

		void reportAmbiguity(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa,
		                     size_t startIndex, size_t stopIndex, bool exact,
		                     const antlrcpp::BitSet& ambigAlts,
		                     antlr4::atn::ATNConfigSet* configs) override;

		void reportAttemptingFullContext(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa,
		                                 size_t startIndex, size_t stopIndex,
		                                 const antlrcpp::BitSet& conflictingAlts,
		                                 antlr4::atn::ATNConfigSet* configs) override;

		void reportContextSensitivity(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa,
		                              size_t startIndex, size_t stopIndex, size_t prediction,
		                              antlr4::atn::ATNConfigSet* configs) override;
	};
}  // namespace AstrumLang
