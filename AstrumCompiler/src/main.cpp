// MyLanguage.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение
// программы.
//
#pragma warning(error : 4172 26815 26816)
#define ADV_CPP_APPLICATION

#include <array>

#include <filesystem>
#include <initializer_list>
#include <iostream>
#include "AstrumLang/CompilerSettings.h"
#include "Compiler.h"

#ifdef _WIN32
#include <corecrt_io.h>
#include <fcntl.h>
#define WIN32_LEAN_AND_MEAN
#include "windows.h"
#endif

using namespace AstrumLang;

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

int main(int argc, const char* argv[]) {
#ifdef _WIN32
	EnableVirtualTerminalProcessing();
#endif
	std::vector<const char*> args;
	for (int i = 1; i < argc; ++i) { args.emplace_back(argv[i]); }
	CompilerSettings::setupFromCmd(args);

	Compiler::compile();

	/*std::filesystem::path exePath(
	    R"(C:\Users\user\Documents\VSProjects\MyLanguage\FirstProgram.exe)");
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
	}*/

	return 0;
}
