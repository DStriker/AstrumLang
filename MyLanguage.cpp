// MyLanguage.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma warning( error: 4172 26815 26816)

#include "CppAdvanceLexer.h";
#include "CppAdvanceParser.h";
#include "CppAdvanceParserBaseListener.h";
#include "CppAdvanceSema.h";
#include "CppAdvanceCodegen.h";
#include "CppAdvanceParserErrorListener.h"
//#define CPPADVANCE_OVERFLOW_CHECKS
#include "CppAdvance.h"
#include <array>
#ifdef _WIN32
#include "windows.h"
#include <corecrt_io.h>
#include <fcntl.h>
#endif
#include <filesystem>
#include "CppSymbolParser.h"
#include <iostream>
#include <initializer_list>
#pragma comment(lib,"CppAdvanceLib.lib")

using namespace antlr4;

#ifdef _WIN32
void EnableVirtualTerminalProcessing() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE) {
		std::cerr << "Error getting console handle." << std::endl;
	}

	DWORD dwMode = 0;
	if (!GetConsoleMode(hConsole, &dwMode)) {
		std::cerr << "Error getting console mode." << std::endl;
	}

	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hConsole, dwMode)) {
		std::cerr << "Error setting console mode." << std::endl;
	}

	SetConsoleOutputCP(CP_UTF8);
}
#endif

void preprocessDLL() {
	if (!DLLName.empty())
	{
		std::transform(DLLName.begin(), DLLName.end(), DLLName.begin(), ::toupper);
		std::ofstream exportFile;
		exportFile.open(DLLName + "_export.h");
		exportFile << "#pragma once\n";
		exportFile << "#if defined _WIN32 || defined __CYGWIN__\n";
		exportFile << "#ifdef " << DLLName << "_EXPORTS\n";
		exportFile << "#define " << DLLName << "_API __declspec(dllexport)\n";
		exportFile << "#else\n";
		exportFile << "#define " << DLLName << "_API __declspec(dllimport)\n";
		exportFile << "#endif\n";
		exportFile << "#define " << DLLName << "_HIDDEN \n";
		exportFile << "#else\n";
		exportFile << "#define " << DLLName << "_API __attribute__((visibility(\"default\")))\n";
		exportFile << "#define " << DLLName << "_HIDDEN __attribute__((visibility(\"hidden\")))\n";
		exportFile << "#endif\n";
	}
}

namespace fs = std::filesystem;
class ClassTest;
struct Test : public CppAdvance::Struct {
	using __class = ClassTest;
	int i;
};

class ClassTest : public CppAdvance::ValueType {
	Test t;
public:
	ClassTest(const Test& value) : t{value} {}
};

int main(int argc, const char* argv[])
{
#ifdef _WIN32
	EnableVirtualTerminalProcessing();
#endif
	for (int i = 1; i < argc; ++i)
	{
		auto txt = std::string(argv[i]);
		if (txt.starts_with("/DLL:"))
		{
			DLLName = txt.substr(5);
		}
		else if (txt.starts_with("-I"))
		{
			cppParserArgs.push_back(argv[i]);
		}
	}
	using namespace CppAdvance;
		//Test tt;
		//tt.i = 5;
		//ObjectRef obj = tt;
		//std::cout << &obj.__ref() << "\n";
		//std::cout << &(obj.__ref()._refCounts) << "\n";
		//std::cout << size_t(obj.__ref().GetStrongReferenceCount()) << "\n";
	preprocessDLL();
	CurrentCppAdvanceCompilingFile = "FirstProgram.adv";
	std::ifstream stream;
	stream.open(CurrentCppAdvanceCompilingFile);
	ANTLRInputStream input(stream);
	CppAdvanceLexer lexer(&input);
	lexer.removeErrorListeners();
	auto errorListener = std::make_unique<CppAdvanceParserErrorListener>();
	lexer.addErrorListener(errorListener.get());
	CommonTokenStream tokens(&lexer);
	if (lexer.getNumberOfSyntaxErrors())
		std::exit(-1);

	CppAdvanceParser parser(&tokens);
	parser.removeErrorListeners();
	parser.addErrorListener(errorListener.get());
	stream.clear();
	stream.seekg(0, std::ios::beg);
	std::string line;
	while (std::getline(stream, line)) {
		CurrentCppAdvanceCompilingFileSource += line;
		CurrentCppAdvanceCompilingFileSource += "\n";
	}

	tree::ParseTree* tree = parser.program();
	if (parser.getNumberOfSyntaxErrors())
		std::exit(-1);
	//std::cout << tree->toStringTree(&parser) << "\n";

	{
		auto filename = "FirstProgram";
		CppAdvanceSema sema{ &parser, filename };
		tree::ParseTreeWalker::DEFAULT.walk(&sema, tree);
		tree::ParseTreeWalker::DEFAULT.walk(&sema, tree);
		CppAdvanceCodegen codegen(sema, filename);
		codegen.print();
		std::cout << "Build successful\n";
	}

	fs::path exePath("C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\FirstProgram.exe");
	int compileResult = std::system("cmd /c compile.bat");
	if (compileResult != 0) {
		std::cerr << "Compilation failed with code: " + std::to_string(compileResult);
		return 0;
	}

	std::cout << "Compilation successful. Executable: " << exePath << std::endl;
	std::string runCommand = "\"" + exePath.string() + "\"";
	std::cout << "Running executable..." << std::endl;

	int runResult = std::system(runCommand.c_str());
	if (runResult != 0) {
		std::cerr << "Executable exited with code: " << runResult << std::endl;
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
