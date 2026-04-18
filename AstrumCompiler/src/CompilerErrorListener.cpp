#include "CompilerErrorListener.h"

#include <format>

#include "AstrumLang/SourcePosition.h"
#include "AstrumLang/StringUtils.h"
#include "Compiler.h"

namespace AstrumLang {

	static void processError(const std::string& msg, const antlr4::Token* token,
	                         SourcePosition position) {
		auto filename = Compiler::getCurrentFilename();
		std::cout << "\x1b[1m\x1b[34m" << filename << ":" << position.toString()
		          << ":\x1b[31m error: \x1b[22m" << msg << "\x1b[33m" << std::endl;
		auto src = Compiler::getSourceCode(filename);
		if (!src.empty()) {
			auto txt = src[position.line - 1];
			StringReplace(txt, "\t", " ");
			std::cout << std::format("{:>5}", position.line) << " | " << txt << std::endl;
		}
		std::cout << std::string(5, ' ') << " | " << std::string(position.column, ' ') << "^";
		if (token) {
			std::cout << std::string(token->getStopIndex() - token->getStartIndex(), '~');
		}

		std::cout << "\x1b[0m" << std::endl;

		for (std::filesystem::path file : CompilerSettings::get().sourceFiles)
		{
			file.replace_extension("h");
			std::filesystem::remove(file);
		}

		std::exit(-1);
	}

	void CompilerErrorListener::semanticError(const AstrumParserVisitor* sema,
	                                          const std::string& msg, const antlr4::Token* token) {
		processError(msg, token, {token->getLine(), token->getCharPositionInLine()});
	}

	void CompilerErrorListener::syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* token,
	                                        size_t line, size_t column, const std::string& msg,
	                                        std::exception_ptr e) {
		SourcePosition pos = token
		                         ? SourcePosition {token->getLine(), token->getCharPositionInLine()}
		                         : SourcePosition {line, column};
		processError(msg, token, pos);
	}

}  // namespace AstrumLang