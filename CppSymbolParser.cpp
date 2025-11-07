#include "CppSymbolParser.h"
#include <clang-c/Index.h>
#include <ostream>
#include <iostream>
#include "StringUtils.h"
#include <unordered_map>
#include <set>
#pragma comment(lib,"libclang.lib")

std::vector < const char* > cppParserArgs = { "-std=c++20" };
CXTranslationUnit unit;

bool IsTypeDefinition(CXCursorKind kind) {
	return kind == CXCursor_StructDecl ||
		kind == CXCursor_ClassDecl ||
		kind == CXCursor_UnionDecl ||
		kind == CXCursor_EnumDecl ||
		kind == CXCursor_TypedefDecl ||
		kind == CXCursor_TypeAliasDecl ||
		kind == CXCursor_TypeAliasTemplateDecl ||
		kind == CXCursor_ClassTemplate;
}

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
static bool isUnsafe = false;
static int8_t varargDepth = -1;

void TraverseAST(CXCursor cursor, const std::string& parentNamespace);

CXChildVisitResult VisitAttributes(CXCursor cursor, CXCursor parent, CXClientData clientData) {
	if (cursor.kind == CXCursor_AnnotateAttr) {
		CXString attrName = clang_getCursorSpelling(cursor);
		std::string name = clang_getCString(attrName);
		clang_disposeString(attrName);
		if (name == "unsafe") isUnsafe = true;
		else if (name.starts_with("varargs:")) varargDepth = std::stoi(name.substr(8));
	}
	return CXChildVisit_Continue; // Continue visiting siblings
}

bool ContainsRawPointer(std::string typeStr) {
	bool hasPointer = typeStr.find('*') != std::string::npos;
	return hasPointer;
}

std::string GetDefaultValue(CXCursor paramCursor) {
	CXSourceRange range = clang_getCursorExtent(paramCursor);

	CXToken* tokens;
	unsigned numTokens;
	clang_tokenize(unit, range, &tokens, &numTokens);

	std::string defaultValue;
	bool foundEquals = false;

	for (unsigned i = 0; i < numTokens; ++i) {
		CXString tokenText = clang_getTokenSpelling(unit, tokens[i]);
		std::string text = clang_getCString(tokenText);
		clang_disposeString(tokenText);

		if (text == "=") {
			foundEquals = true;
		}

		if (foundEquals) {
			defaultValue += text + " ";
		}
	}

	clang_disposeTokens(unit, tokens, numTokens);

	if (!defaultValue.empty()) {
		defaultValue.pop_back();
	}

	return defaultValue;
}

CXChildVisitResult VisitCursor(CXCursor cursor, const std::string& parentNamespace) {
	CXCursorKind kind = clang_getCursorKind(cursor);
	CXString spelling = clang_getCursorSpelling(cursor);
	std::string name = clang_getCString(spelling);
	clang_disposeString(spelling);

	if (name.empty()) {
		return CXChildVisit_Recurse;
	}

	if (kind == CXCursor_Namespace) {
		std::string fullName = parentNamespace.empty() ? name : parentNamespace + "." + name;
		namespaces.insert(fullName);

		TraverseAST(cursor, fullName);
		return CXChildVisit_Continue;
	}

	if (IsTypeDefinition(kind)) {
		std::string fullName = parentNamespace.empty() ? name : parentNamespace + "." + name;
		types.insert(fullName);
		isUnsafe = false;
		clang_visitChildren(cursor, VisitAttributes, nullptr);
		if (isUnsafe)
		{
			unsafeTypes.insert(fullName);
		}
		else
		{
			if (kind == CXCursor_TypedefDecl || kind == CXCursor_TypeAliasDecl || kind == CXCursor_TypeAliasTemplateDecl)
			{
				auto underlying = clang_getTypedefDeclUnderlyingType(cursor);
				CXString typeName = clang_getTypeSpelling(underlying);
				std::string typeStr = clang_getCString(typeName);
				aliasTable[fullName] = typeStr;
				clang_disposeString(typeName);
				if (typeStr.find('*') != std::string::npos) {
					unsafeTypes.insert(fullName);
				}
				else
				{
					typeStr = typeStr.substr(0, typeStr.find('<'));
					StringReplace(typeStr, "::", ".");
					if (unsafeTypes.contains(typeStr) || unsafeTypes.contains(parentNamespace + "." + typeStr))
						unsafeTypes.insert(fullName);
				}
			}
		}
		TraverseAST(cursor, fullName);
		return CXChildVisit_Continue;
	}

	if (kind == CXCursor_VarDecl || kind == CXCursor_FieldDecl)
	{
		CXType type = clang_getCursorType(cursor);
		CXString typeSpelling = clang_getTypeSpelling(type);
		std::string typeStr = clang_getCString(typeSpelling);
		std::string fullName = parentNamespace.empty() ? name : parentNamespace + "." + name;
// 		if (typeStr.find('::') == std::string::npos) typeStr = parentNamespace + "." + typeStr;
// 		else 
		StringReplace(typeStr, "::", ".");
		symbolTable[fullName] = typeStr;

		if (ContainsRawPointer(typeStr))
		{
			unsafeVariables.insert(fullName);
		}
		else
		{
			isUnsafe = false;
			clang_visitChildren(cursor, VisitAttributes, nullptr);
			if (isUnsafe)
			{
				unsafeVariables.insert(fullName);
			}
		}
		clang_disposeString(typeSpelling);
		
		return CXChildVisit_Continue;
	}

	if (kind == CXCursor_FunctionDecl || kind == CXCursor_FunctionTemplate || kind == CXCursor_CXXMethod)
	{
		isUnsafe = false;
		varargDepth = -1;
		clang_visitChildren(cursor, VisitAttributes, nullptr);
		std::string fullName = parentNamespace.empty() ? name : parentNamespace + "." + name;
		CXType returnType = clang_getResultType(clang_getCursorType(cursor));
		CXString typeSpelling = clang_getTypeSpelling(returnType);
		std::string typeStr = clang_getCString(typeSpelling);
		StringReplace(typeStr, "const ", "");
		StringReplace(typeStr, " &", "");
		StringReplace(typeStr, "::", ".");
		functionTable[fullName] = typeStr;
		std::string args;
		std::string params;
		
		if (!isUnsafe) {
			if (returnType.kind == CXType_Pointer) {
				isUnsafe = true;
			}
		}

		int numArgs = clang_Cursor_getNumArguments(cursor);
		for (int i = 0; i < numArgs; ++i) {
			CXCursor paramCursor = clang_Cursor_getArgument(cursor, i);
			CXType paramType = clang_getCursorType(paramCursor);
			CXString spelling = clang_getCursorSpelling(paramCursor);
			CXString typeSpelling = clang_getTypeSpelling(returnType);
			std::string str = clang_getCString(spelling);
			StringReplace(str, " ", "");
			if (!str.empty()) {
				if (i > 0) args += ",,";
				args += str;
			}
			clang_disposeString(spelling);

			if (paramType.kind == CXType_Pointer) {
				isUnsafe = true;
			}

			str = clang_getCString(typeSpelling);
			clang_disposeString(typeSpelling);
			StringReplace(str, "const ", "");
			StringReplace(str, " &", "");
			StringReplace(str, "::", ".");
			if (!str.empty()) {
				if (i > 0) params += ",,";
				params += str;
			}

			auto defaultValue = GetDefaultValue(paramCursor);
			if (!defaultValue.empty()) args += defaultValue;
		}

		clang_disposeString(typeSpelling);

		if (!args.empty()) parametersTable[fullName].insert(args);

		if (isUnsafe)
		{
			unsafeFunctions.insert(fullName+"/"+params);
		}

		if (varargDepth >= 0)
		{
			varargFunctions.insert({fullName, varargDepth});
		}

		return CXChildVisit_Continue;
	}

	return CXChildVisit_Recurse;
}

void TraverseAST(CXCursor cursor, const std::string& parentNamespace) {
	//auto nsString = std::make_unique < std::string >(parentNamespace);
	clang_visitChildren(cursor, [](CXCursor c, CXCursor parent, CXClientData client_data) {
		auto* data = static_cast<std::string*>(client_data);
		return VisitCursor(c, *data);
		}, (void*)&parentNamespace);
}

CppSymbolParser::CppSymbolParser() : types(::types), namespaces(::namespaces), unsafeVariables(::unsafeVariables), 
unsafeTypes(::unsafeTypes), unsafeFunctions{ ::unsafeFunctions }, symbolTable{ ::symbolTable }, functionTable{::functionTable},
parametersTable{::parametersTable}, aliasTable{ ::aliasTable }, varargFunctions{ ::varargFunctions } {}

void CppSymbolParser::parse(const std::string& path)
{
	CXIndex index = clang_createIndex(0, 0);

	//// Параметры парсинга
	//const char* args[] = {
	//	"-std=c++20",
	//	"-IC:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\ATLMFC\\include",
	//	"-IC:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\NETFXSDK\\4.8\\include\\um",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\shared",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\um",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\winrt",
	//	"-IC:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\cppwinrt",
	//	"-IC:\\Users\\user\\Documents\\VSProjects\\TestDll"
	//};

	// Парсим файл
	unit = clang_parseTranslationUnit(
		index,
		path.c_str(),
		cppParserArgs.data(), cppParserArgs.size(),
		nullptr, 0,
		CXTranslationUnit_None
	);

	if (!unit) {
		std::cerr << "Failed to parse translation unit." << std::endl;
		clang_disposeIndex(index);
		return;
	}

	// Обходим AST
	CXCursor cursor = clang_getTranslationUnitCursor(unit);
	//::types.clear();
	//::namespaces.clear();
	TraverseAST(cursor,"");

	// Освобождаем ресурсы
	clang_disposeTranslationUnit(unit);
	clang_disposeIndex(index);
}
