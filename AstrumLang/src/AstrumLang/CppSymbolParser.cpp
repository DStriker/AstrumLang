#include "CppSymbolParser.h"

#include <clang-c/Documentation.h>
#include <clang-c/Index.h>

#include <iostream>

#include "CompilerSettings.h"
#include "StringUtils.h"
#pragma comment(lib, "libclang.lib")

namespace AstrumLang {
	std::vector<const char*> CppSymbolParser::args = {"-std=c++20", "-D__ASTRUM_INCLUDE_PARSER"};

	static bool IsTypeDefinition(CXCursorKind kind) {
		return kind == CXCursor_StructDecl || kind == CXCursor_ClassDecl ||
		       kind == CXCursor_UnionDecl || kind == CXCursor_EnumDecl ||
		       kind == CXCursor_TypedefDecl || kind == CXCursor_TypeAliasDecl ||
		       kind == CXCursor_TypeAliasTemplateDecl || kind == CXCursor_ClassTemplate;
	}

	static bool ContainsRawPointer(std::string typeStr) {
		bool hasPointer = typeStr.find('*') != std::string::npos;
		return hasPointer;
	}

	static std::string GetDefaultValue(CXTranslationUnit unit, CXCursor paramCursor) {
		CXCursor parentFunction = clang_getCursorSemanticParent(paramCursor);
		if (clang_Cursor_isNull(parentFunction)) {
			return "";
		}

		CXSourceRange functionRange = clang_getCursorExtent(parentFunction);
		CXToken* allTokens          = nullptr;
		unsigned numAllTokens       = 0;
		clang_tokenize(unit, functionRange, &allTokens, &numAllTokens);

		if (numAllTokens == 0) {
			return "";
		}

		std::string paramName = clang_getCString(clang_getCursorSpelling(paramCursor));
		bool foundParam       = false;
		std::vector<std::string> defaultValueTokens;

		int parentheses  = 0;
		int brackets     = 0;
		bool startParent = false;
		for (unsigned i = 0; i < numAllTokens; ++i) {
			CXToken currentToken = allTokens[i];
			std::string tokenSpelling =
			    clang_getCString(clang_getTokenSpelling(unit, currentToken));

			if (tokenSpelling == paramName && !foundParam) {
				foundParam = true;
				if (i + 1 < numAllTokens) {
					std::string nextTokenSpelling =
					    clang_getCString(clang_getTokenSpelling(unit, allTokens[i + 1]));

					if (nextTokenSpelling == "=") {
						brackets    = 0;
						parentheses = 0;
						startParent = false;
						for (unsigned j = i + 2; j < numAllTokens; ++j) {
							std::string valueToken =
							    clang_getCString(clang_getTokenSpelling(unit, allTokens[j]));

							if (valueToken == "(") {
								parentheses++;
								startParent = true;
							}

							else if (valueToken == "<") {
								brackets++;
							}

							else if (valueToken == "{") {
								brackets++;
							}

							else if (valueToken == "[") {
								brackets++;
							}

							else if (valueToken == ")") {
								if (parentheses > 0)
									parentheses--;
							}

							else if (valueToken == "}") {
								brackets--;
							}

							else if (valueToken == ">") {
								brackets--;
							}

							else if (valueToken == "]") {
								brackets--;
							}

							if ((valueToken == "," || valueToken == ")") && brackets == 0 &&
							    parentheses == 0) {
								if (startParent)
									defaultValueTokens.emplace_back(")");
								break;
							}
							defaultValueTokens.push_back(valueToken);
						}
					}
				}
				break;
			}
		}

		std::string defaultValue = "=";
		if (!defaultValueTokens.empty()) {
			for (const std::string& token : defaultValueTokens) { defaultValue += token; }
		}

		clang_disposeTokens(unit, allTokens, numAllTokens);
		clang_disposeString(clang_getCursorSpelling(paramCursor));
		return defaultValue;
	}

	struct Impl {
		static CXTranslationUnit unit;
		static std::string currentGlobalAlias;
		static std::string currentNamespace;
		static std::string currentTypename;
		static bool isUnsafe;
		static int8_t varargDepth;
		static CppSymbolParser* parser;

		static CXChildVisitResult VisitAttributes(CXCursor cursor, CXCursor parent,
		                                          CXClientData clientData) {
			if (cursor.kind == CXCursor_AnnotateAttr) {
				CXString attrName = clang_getCursorSpelling(cursor);
				std::string name  = clang_getCString(attrName);
				clang_disposeString(attrName);
				if (name == "unsafe")
					isUnsafe = true;
				else if (name.starts_with("varargs:"))
					varargDepth = std::stoi(name.substr(8));
			}
			return CXChildVisit_Continue;  // Continue visiting siblings
		}

		static CXChildVisitResult VisitCursor(CXCursor cursor, const std::string& parentNamespace) {
			CXCursorKind kind = clang_getCursorKind(cursor);
			CXString spelling = clang_getCursorSpelling(cursor);
			std::string name  = clang_getCString(spelling);
			clang_disposeString(spelling);

			if (name.empty()) {
				return CXChildVisit_Recurse;
			}

			if (kind == CXCursor_Namespace) {
				std::string fullName =
				    parentNamespace.empty() ? name : parentNamespace + "." + name;
				parser->namespaces.insert(fullName);

				TraverseAST(*parser, cursor, fullName);
				return CXChildVisit_Continue;
			}

			if (IsTypeDefinition(kind)) {
				currentTypename = currentGlobalAlias + name;
				std::string fullName =
				    parentNamespace.empty() ? name : parentNamespace + "." + name;
				parser->types.insert(currentTypename);
				parser->types.insert(fullName);
				isUnsafe = false;
				clang_visitChildren(cursor, VisitAttributes, nullptr);
				if (isUnsafe) {
					parser->unsafeTypes.insert(currentTypename);
					parser->unsafeTypes.insert(fullName);
				} else {
					if (kind == CXCursor_TypedefDecl || kind == CXCursor_TypeAliasDecl ||
					    kind == CXCursor_TypeAliasTemplateDecl) {
						auto underlying              = clang_getTypedefDeclUnderlyingType(cursor);
						CXString typeName            = clang_getTypeSpelling(underlying);
						std::string typeStr          = clang_getCString(typeName);
						parser->aliasTable[fullName] = typeStr;
						parser->aliasTable[currentTypename] = typeStr;
						clang_disposeString(typeName);
						if (typeStr.find('*') != std::string::npos) {
							parser->unsafeTypes.insert(fullName);
							parser->unsafeTypes.insert(currentTypename);
						} else {
							typeStr = typeStr.substr(0, typeStr.find('<'));
							StringReplace(typeStr, "::", ".");
							if (parser->unsafeTypes.contains(typeStr) ||
							    parser->unsafeTypes.contains(parentNamespace + "." + typeStr)) {
								parser->unsafeTypes.insert(fullName);
								parser->unsafeTypes.insert(currentTypename);
							}
						}
					}
				}
				TraverseAST(*parser, cursor, fullName);
				return CXChildVisit_Continue;
			}

			if (kind == CXCursor_VarDecl || kind == CXCursor_FieldDecl) {
				CXType type           = clang_getCursorType(cursor);
				CXString typeSpelling = clang_getTypeSpelling(type);
				std::string typeStr   = clang_getCString(typeSpelling);
				std::string fullName =
				    parentNamespace.empty() ? name : parentNamespace + "." + name;
				StringReplace(typeStr, "::", ".");
				parser->symbolTable[currentGlobalAlias + name] = typeStr;
				parser->symbolTable[fullName] = typeStr;

				/*if (ContainsRawPointer(typeStr)) {
				    parser->unsafeVariables.insert(fullName);
				    parser->unsafeVariables.insert(currentGlobalAlias + name);
				} else*/
				{
					isUnsafe = false;
					clang_visitChildren(cursor, VisitAttributes, nullptr);
					if (isUnsafe) {
						parser->unsafeVariables.insert(fullName);
						parser->unsafeVariables.insert(currentGlobalAlias + name);
					}
				}
				clang_disposeString(typeSpelling);

				return CXChildVisit_Continue;
			}

			if (kind == CXCursor_FunctionDecl || kind == CXCursor_FunctionTemplate ||
			    kind == CXCursor_CXXMethod || kind == CXCursor_Constructor) {
				isUnsafe    = false;
				varargDepth = -1;
				clang_visitChildren(cursor, VisitAttributes, nullptr);
				std::string fullName =
				    parentNamespace.empty() ? name : parentNamespace + "." + name;
				CXType returnType     = clang_getResultType(clang_getCursorType(cursor));
				CXString typeSpelling = clang_getTypeSpelling(returnType);
				std::string typeStr   = clang_getCString(typeSpelling);
				StringReplace(typeStr, "const ", "");
				StringReplace(typeStr, " &", "");
				StringReplace(typeStr, "::", ".");
				parser->functionTable[fullName] = typeStr;
				bool isTypeMember = kind == CXCursor_CXXMethod || kind == CXCursor_Constructor;
				if (isTypeMember && !parentNamespace.empty()) {
					parser->functionTable[currentTypename + "." + name] = typeStr;
				} else {
					parser->functionTable[currentGlobalAlias + name] = typeStr;
				}
				std::string args;
				std::string params;

				if (!isUnsafe) {
					if (returnType.kind == CXType_Pointer) {
						isUnsafe = true;
					}
				}

				int numArgs = clang_Cursor_getNumArguments(cursor);
				for (int i = 0; i < numArgs; ++i) {
					CXCursor paramCursor  = clang_Cursor_getArgument(cursor, i);
					CXType paramType      = clang_getCursorType(paramCursor);
					CXString spelling     = clang_getCursorSpelling(paramCursor);
					CXString typeSpelling = clang_getTypeSpelling(paramType);
					std::string str       = clang_getCString(spelling);
					StringReplace(str, " ", "");
					if (!str.empty()) {
						if (i > 0)
							args += ",,";
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
						if (i > 0)
							params += ",,";
						params += str;
					}

					auto defaultValue = GetDefaultValue(unit, paramCursor);
					if (!defaultValue.empty())
						args += defaultValue;
				}

				clang_disposeString(typeSpelling);

				if (!args.empty())
					parser->parametersTable[fullName].insert(args);

				if (isUnsafe) {
					parser->unsafeFunctions.insert(fullName + "/" + params);
					if (isTypeMember && !parentNamespace.empty()) {
						parser->functionTable[currentTypename + "." + name + "/" + params] =
						    typeStr;
					} else {
						parser->functionTable[currentGlobalAlias + name + "/" + params] = typeStr;
					}
				}

				if (varargDepth >= 0) {
					parser->varargFunctions.insert({fullName, varargDepth});
					if (isTypeMember && !parentNamespace.empty()) {
						parser->varargFunctions.insert({currentTypename + "." + name, varargDepth});
					} else {
						parser->varargFunctions.insert({currentGlobalAlias + name, varargDepth});
					}
				}

				return CXChildVisit_Continue;
			}

			return CXChildVisit_Recurse;
		}

		static void TraverseAST(CppSymbolParser& parserRef, CXCursor cursor,
		                        const std::string& parentNamespace) {
			parser = &parserRef;
			clang_visitChildren(
			    cursor,
			    [](CXCursor c, CXCursor parent, CXClientData client_data) {
				    auto* data = static_cast<std::string*>(client_data);
				    return VisitCursor(c, *data);
			    },
			    (void*) &parentNamespace);
		}
	};

	CXTranslationUnit Impl::unit = nullptr;
	std::string Impl::currentNamespace;
	std::string Impl::currentTypename;
	std::string Impl::currentGlobalAlias;
	bool Impl::isUnsafe           = false;
	int8_t Impl::varargDepth      = -1;
	CppSymbolParser* Impl::parser = nullptr;

	CppSymbolParser CppSymbolParser::systemParser;

	CppSymbolParser::CppSymbolParser() = default;

	void CppSymbolParser::init() {
		types           = systemParser.types;
		namespaces      = systemParser.namespaces;
		unsafeVariables = systemParser.unsafeVariables;
		unsafeTypes     = systemParser.unsafeTypes;
		unsafeFunctions = systemParser.unsafeFunctions;
		symbolTable     = systemParser.symbolTable;
		functionTable   = systemParser.functionTable;
		parametersTable = systemParser.parametersTable;
		aliasTable      = systemParser.aliasTable;
		varargFunctions = systemParser.varargFunctions;
	}

	void CppSymbolParser::parse(const std::string& path, const std::string& globalAlias) {
		CXIndex index = clang_createIndex(0, 0);

		Impl::unit = clang_parseTranslationUnit(
		    index, path.c_str(), args.data(), args.size(), nullptr, 0,
		    CXTranslationUnit_SkipFunctionBodies | CXTranslationUnit_KeepGoing |
		        CXTranslationUnit_IgnoreNonErrorsFromIncludedFiles);

		if (!Impl::unit) {
			std::cerr << "Failed to parse translation unit: " << path << ".\n";
			clang_disposeIndex(index);
			return;
		}

		Impl::currentGlobalAlias = globalAlias;
		if (!globalAlias.empty()) {
			Impl::currentGlobalAlias += ".";
		}
		CXCursor cursor = clang_getTranslationUnitCursor(Impl::unit);
		Impl::TraverseAST(*this, cursor, "");
		Impl::currentGlobalAlias = "";

		clang_disposeTranslationUnit(Impl::unit);
		clang_disposeIndex(index);
	}

	void CppSymbolParser::initializeSystemSymbolTable() {
		systemParser.parse(*CompilerSettings::findFileInIncludePaths("Builtin/Builtin.h"));
	}
}  // namespace AstrumLang