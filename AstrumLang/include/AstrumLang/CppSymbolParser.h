#pragma once
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include "export.h"

namespace AstrumLang {
	class ASTRUMLANG_API CppSymbolParser {
		friend class Impl;

		static CppSymbolParser systemParser;

	   public:
		static std::vector<const char*> args;

		CppSymbolParser();

		std::unordered_set<std::string> types;
		std::unordered_set<std::string> namespaces;
		std::unordered_set<std::string> unsafeVariables;
		std::unordered_set<std::string> unsafeTypes;
		std::unordered_set<std::string> unsafeFunctions;
		std::unordered_map<std::string, std::string> symbolTable;
		std::unordered_map<std::string, std::string> functionTable;
		std::unordered_map<std::string, std::set<std::string>> parametersTable;
		std::unordered_map<std::string, std::string> aliasTable;
		std::unordered_map<std::string, int8_t> varargFunctions;

		void init();
		void parse(const std::string& path, const std::string& globalAlias = "");
		static void initializeSystemSymbolTable();
	};
}  // namespace AstrumLang