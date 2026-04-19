#pragma once
#include <filesystem>
#include <span>
#include <string>
#include <vector>

#include "export.h"

namespace AstrumLang {

	enum class CompilerBackend { Clang, VisualCpp, Gnu };

	enum class InstructionSet {
		Default,
		IA32,
		SSE,
		SSE2,
		SSE4_2,
		AVX,
		AVX2,
		AVX512,
		AVX10_1,
		AVX10_2,
		ARM8_0,
		ARM8_1,
		ARM8_2,
		ARM8_3,
		ARM8_4,
		ARM8_5,
		ARM8_6,
		ARM8_7,
		ARM8_8,
		ARM8_9,
		ARM9_0,
		ARM9_1,
		ARM9_2,
		ARM9_3,
		ARM9_4
	};

	class ASTRUMLANG_API CompilerSettings {
		CompilerSettings() = default;

	   public:
		std::vector<std::string> sourceFiles;
		std::vector<std::string> includePaths;
		std::vector<std::string> libraryPaths;
		std::vector<std::string> libraries;
		std::string dllName;
		std::string exePath;
		InstructionSet instructionSet = InstructionSet::Default;
		CompilerBackend backend       = CompilerBackend::Clang;
		int optimizationLevel         = -1;
		bool unitTestMode             = false;
		bool buildMode                = false;
		bool runMode                  = false;
		bool debugBuild               = false;
		bool versionMode              = false;
		bool helpMode                 = false;

		static CompilerSettings& get();
		static void setupFromCmd(std::span<const char*> args);
		static std::optional<std::string> findFileInIncludePaths(
		    const std::string& fileName, std::filesystem::path basePath = {});
	};
}  // namespace AstrumLang