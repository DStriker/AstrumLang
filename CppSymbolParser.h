#pragma once
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <set>

extern std::vector < const char* > cppParserArgs;

struct CppSymbolInfo {
	std::string name;
	std::string fullName; 

	constexpr bool operator==(const CppSymbolInfo& other) const noexcept {
		return name == other.name && fullName == other.fullName;
	}
};

template<>
class std::hash<CppSymbolInfo> {
public:
	size_t operator()(const CppSymbolInfo& info) const noexcept {
        return std::hash<std::string>{}(info.fullName);
	}
};

class CppSymbolParser {
	std::string currentNamespace;
public:
	CppSymbolParser();

	std::unordered_set<std::string>& types;
	std::unordered_set<std::string>& namespaces;
	std::unordered_set<std::string>& unsafeVariables;
	std::unordered_set<std::string>& unsafeTypes;
	std::unordered_set<std::string>& unsafeFunctions;
	std::unordered_map<std::string, std::string>& symbolTable;
	std::unordered_map<std::string, std::string>& functionTable;
	std::unordered_map<std::string, std::set<std::string>>& parametersTable;
	std::unordered_map<std::string, std::string>& aliasTable;
	std::unordered_map<std::string, int8_t>& varargFunctions;

	void parse(const std::string& path);
};