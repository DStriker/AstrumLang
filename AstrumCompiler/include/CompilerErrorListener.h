#pragma once
#include "AstrumLang/AstrumErrorListener.h"

namespace AstrumLang {
	class CompilerErrorListener : public DefaultAstrumErrorListener {
	   public:
		void semanticError(const AstrumParserVisitor* sema, const std::string& msg,
		                   const antlr4::Token* token) override;

		void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol,
		                 size_t line, size_t charPositionInLine, const std::string& msg,
		                 std::exception_ptr e) override;
	};
}  // namespace AstrumLang