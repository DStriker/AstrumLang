// MyLanguage.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение
// программы.
//
#pragma warning(error : 4172 26815 26816)
#define ADV_CPP_APPLICATION

inline constexpr auto VERSION = "0.0.1";
inline constexpr auto USAGE   = "Usage: astrumc [ gen | build [debug|release] | run ] [ -parameter... ] <file...>\n";
inline constexpr auto HELP = R"(
Modes:
   gen				Only generate CPP files
   build			Build project with C++ backend (debug/release build modes)
   run				Build project and run application

Options: 
  -armv80			Generate code for ARM architecture version 8.0
  -armv81			Generate code for ARM architecture version 8.1
  -armv82			Generate code for ARM architecture version 8.2
  -armv83			Generate code for ARM architecture version 8.3
  -armv84			Generate code for ARM architecture version 8.4
  -armv85			Generate code for ARM architecture version 8.5
  -armv86			Generate code for ARM architecture version 8.6
  -armv87			Generate code for ARM architecture version 8.7
  -armv88			Generate code for ARM architecture version 8.8
  -armv89			Generate code for ARM architecture version 8.9
  -armv90			Generate code for ARM architecture version 9.0
  -armv91			Generate code for ARM architecture version 9.1
  -armv92			Generate code for ARM architecture version 9.2
  -armv93			Generate code for ARM architecture version 9.3
  -armv94			Generate code for ARM architecture version 9.4
  -avx				Generate code with AVX instructions
  -avx2				Generate code with AVX2 instructions
  -avx512			Generate code with AVX512 instructions
  -avx101			Generate code with AVX10.1 instructions
  -avx102			Generate code with AVX10.2 instructions
  -backend:<backend>		Compiler backend (clang, msvc, gcc)
  -DLL:<name>			Generate and build dynamic library with <name>
  -h				Display available options
  -I:<dir>			Add directory to the end of the list of include search paths
  -ia32				Generate code for IA32 architecture
  -l:<file>			Add library to linker
  -L:<dir>			Add directory to library search path	
  -o:<file>			Write output to <file>
  -O0				Disable optimization (default in debug build)
  -O1				Optimization for compact
  -O2				Optimization for speed (default in release build)
  -O3				Maximal optimization (only for Clang/GCC backend)
  -sse				Generate code with SSE instructions
  -sse2				Generate code with SSE2 instructions
  -sse42			Generate code with SSE4.2 instructions
  -unittest			Build and run unit tests
  -v				Display compiler version
)";

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
	if (CompilerSettings::get().versionMode) {
		std::cout << "Astrum language compiler version " << VERSION << std::endl;
		if (args.empty()) {
			std::cout << USAGE << "Use astrumc -h for help." << std::endl;
		}
		return 0;
	}
	if (CompilerSettings::get().helpMode) {
		std::cout << USAGE << HELP << std::endl;

		return 0;
	}

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
