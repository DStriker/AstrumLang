#include "CompilerSettings.h"

#include <filesystem>
#include <iostream>

#include "CppSymbolParser.h"
#include "StringUtils.h"

namespace AstrumLang {
	CompilerSettings& CompilerSettings::get() {
		static CompilerSettings instance;
		return instance;
	}

	void CompilerSettings::setupFromCmd(std::span<const char*> args) {
		namespace fs = std::filesystem;

		if (args.empty()) {
			get().versionMode = true;
			return;
		}
		for (auto arg : args) {
			auto str = std::string(arg);
			if (str == "-v") {
				get().versionMode = true;
				return;
			}
			if (str == "-h") {
				get().helpMode = true;
				return;
			}
			if (str.starts_with("-DLL:")) {
				get().dllName = str.substr(5);
			} else if (str.starts_with("-o:")) {
				get().exePath = str.substr(3);
			} else if (str.starts_with("-I:")) {
				CppSymbolParser::args.push_back(arg);
				get().includePaths.emplace_back(str.substr(3));
			} else if (str.starts_with("-L:")) {
				get().libraryPaths.emplace_back(str.substr(3));
			} else if (str.starts_with("-l:")) {
				get().libraries.emplace_back(str.substr(3));
			} else if (str == "-unittest") {
				get().unitTestMode = true;
			} else if (str == "-O0") {
				get().optimizationLevel = 0;
			} else if (str == "-O1") {
				get().optimizationLevel = 1;
			} else if (str == "-O2") {
				get().optimizationLevel = 2;
			} else if (str == "-O3") {
				get().optimizationLevel = 3;
			} else if (str == "build") {
				get().buildMode = true;
			} else if (str == "run") {
				get().buildMode = true;
				get().runMode   = true;
			} else if (str == "-backend:clang") {
				get().backend = CompilerBackend::Clang;
			} else if (str == "-backend:msvc") {
				get().backend = CompilerBackend::VisualCpp;
			} else if (str == "-backend:gcc") {
				get().backend = CompilerBackend::Gnu;
			} else if (str == "-ia32") {
				get().instructionSet = InstructionSet::IA32;
			} else if (str == "-sse") {
				get().instructionSet = InstructionSet::SSE;
			} else if (str == "-sse2") {
				get().instructionSet = InstructionSet::SSE2;
			} else if (str == "-sse42") {
				get().instructionSet = InstructionSet::SSE4_2;
			} else if (str == "-avx") {
				get().instructionSet = InstructionSet::AVX;
			} else if (str == "-avx2") {
				get().instructionSet = InstructionSet::AVX2;
			} else if (str == "-avx512") {
				get().instructionSet = InstructionSet::AVX512;
			} else if (str == "-avx101") {
				get().instructionSet = InstructionSet::AVX10_1;
			} else if (str == "-avx102") {
				get().instructionSet = InstructionSet::AVX10_2;
			} else if (str == "-armv80") {
				get().instructionSet = InstructionSet::ARM8_0;
			} else if (str == "-armv81") {
				get().instructionSet = InstructionSet::ARM8_1;
			} else if (str == "-armv82") {
				get().instructionSet = InstructionSet::ARM8_2;
			} else if (str == "-armv83") {
				get().instructionSet = InstructionSet::ARM8_3;
			} else if (str == "-armv84") {
				get().instructionSet = InstructionSet::ARM8_4;
			} else if (str == "-armv85") {
				get().instructionSet = InstructionSet::ARM8_5;
			} else if (str == "-armv86") {
				get().instructionSet = InstructionSet::ARM8_6;
			} else if (str == "-armv87") {
				get().instructionSet = InstructionSet::ARM8_7;
			} else if (str == "-armv88") {
				get().instructionSet = InstructionSet::ARM8_8;
			} else if (str == "-armv89") {
				get().instructionSet = InstructionSet::ARM8_9;
			} else if (str == "-armv90") {
				get().instructionSet = InstructionSet::ARM9_0;
			} else if (str == "-armv91") {
				get().instructionSet = InstructionSet::ARM9_1;
			} else if (str == "-armv92") {
				get().instructionSet = InstructionSet::ARM9_2;
			} else if (str == "-armv93") {
				get().instructionSet = InstructionSet::ARM9_3;
			} else if (str == "-armv94") {
				get().instructionSet = InstructionSet::ARM9_4;
			} else if (str == "debug") {
				get().debugBuild = true;
			} else if (str == "gen" || str == "release") {
			} else {
				std::string src = arg;
				if (src.starts_with("\""))
					src = src.substr(1, src.length() - 2);
				if (src.ends_with(".ast") || src.ends_with(".astrum")) {
					fs::path srcPath = src;
					if (!srcPath.is_absolute())
						srcPath = fs::current_path() / srcPath;
					if (!fs::exists(srcPath)) {
						std::cout << "[WARNING] File not found: " << srcPath << std::endl;
						continue;
					}
					auto headerPath = srcPath;
					auto cppPath    = srcPath;
					headerPath.replace_extension("h");
					cppPath.replace_extension("cpp");
					auto lastAstrumTime = fs::last_write_time(srcPath);
					if (!fs::exists(headerPath) || !fs::exists(cppPath) ||
					    fs::last_write_time(headerPath) < lastAstrumTime ||
					    fs::last_write_time(cppPath) < lastAstrumTime) {
						get().sourceFiles.emplace_back(src);
					}
				} else {
					std::runtime_error("Unknown parameter: " + str);
				}
			}
		}
	}

	static std::optional<std::string> findFileInPath(const std::filesystem::path& filePath) {
		auto headerPath = filePath;
		headerPath.replace_extension("h");
		if (std::filesystem::exists(headerPath)) {
			return headerPath.string();
		}

		const auto packagePath = filePath / "package.h";
		if (std::filesystem::exists(packagePath)) {
			return packagePath.string();
		}

		if (std::filesystem::exists(filePath) && std::filesystem::is_regular_file(filePath)) {
			return filePath.string();
		}

		return {};
	}

	std::optional<std::string> CompilerSettings::findFileInIncludePaths(
	    const std::string& fileName, std::filesystem::path basePath) {
		if (!basePath.empty()) {
			if (auto file = findFileInPath(basePath / fileName))
				return file;
		}

		for (const auto& path : get().includePaths) {
			if (auto file = findFileInPath(std::filesystem::path(path) / fileName))
				return file;
		}

		// throw std::runtime_error("File not found: " + fileName);
		std::cout << "[WARNING] File not found: " << fileName << std::endl;
		return {};
	}
}  // namespace AstrumLang
