#pragma once
#include <span>

#include "AstrumLang/AstrumCodegen.h"
#include "AstrumLang/AstrumLexer.h"
#include "AstrumLang/AstrumParser.h"
#include "AstrumLang/AstrumSema.h"
#include "AstrumLang/CompilerSettings.h"

namespace AstrumLang {
	class Compiler {
		static std::string currentFilename;
		static std::unordered_map<std::string, std::vector<std::string>> sourceCode;
		static void preprocessDLL();

	   public:
		static std::string getCurrentFilename() { return currentFilename; }

		static std::span<const std::string> getSourceCode(const std::string& filename);

		static bool compile();
	};
}  // namespace AstrumLang