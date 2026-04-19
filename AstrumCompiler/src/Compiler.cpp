#include "Compiler.h"

#include <filesystem>
#include <queue>
#include <ranges>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include "windows.h"
#endif

#include "AstrumLang/StringUtils.h"
#include "CompilerErrorListener.h"

// using namespace antlr4;
namespace AstrumLang {

	std::span<const std::string> Compiler::getSourceCode(const std::string& filename) {
		if (sourceCode.find(filename) != sourceCode.end()) {
			return sourceCode[filename];
		}

		return {};
	}

	static auto errorListener = std::make_unique<CompilerErrorListener>();

	static void setupErrorListeners(antlr4::Recognizer* recognizer) {
		recognizer->removeErrorListeners();
		recognizer->addErrorListener(errorListener.get());
	}

#ifdef _WIN32
	std::string ExecCmd(const wchar_t* cmd  // [in] command to execute
	) {
		std::string strResult;
		HANDLE hPipeRead, hPipeWrite;

		SECURITY_ATTRIBUTES saAttr  = {sizeof(SECURITY_ATTRIBUTES)};
		saAttr.bInheritHandle       = TRUE;  // Pipe handles are inherited by child process.
		saAttr.lpSecurityDescriptor = NULL;

		// Create a pipe to get results from child's stdout.
		if (!CreatePipe(&hPipeRead, &hPipeWrite, &saAttr, 0))
			return strResult;

		STARTUPINFOW si = {sizeof(STARTUPINFOW)};
		si.dwFlags      = STARTF_USESHOWWINDOW | STARTF_USESTDHANDLES;
		si.hStdOutput   = hPipeWrite;
		si.hStdError    = hPipeWrite;
		si.wShowWindow  = SW_HIDE;  // Prevents cmd window from flashing.
		                            // Requires STARTF_USESHOWWINDOW in dwFlags.

		PROCESS_INFORMATION pi = {0};
		std::wstring cmdBuf;
		cmdBuf.reserve(32767);
		cmdBuf = cmd;

		BOOL fSuccess = CreateProcessW(NULL, cmdBuf.data(), NULL, NULL, TRUE, CREATE_NEW_CONSOLE,
		                               NULL, NULL, &si, &pi);
		if (!fSuccess) {
			CloseHandle(hPipeWrite);
			CloseHandle(hPipeRead);
			return strResult;
		}

		bool bProcessEnded = false;
		for (; !bProcessEnded;) {
			// Give some timeslice (50 ms), so we won't waste 100% CPU.
			bProcessEnded = WaitForSingleObject(pi.hProcess, 50) == WAIT_OBJECT_0;

			// Even if process exited - we continue reading, if
			// there is some data available over pipe.
			for (;;) {
				char buf[1024];
				DWORD dwRead  = 0;
				DWORD dwAvail = 0;

				if (!::PeekNamedPipe(hPipeRead, NULL, 0, NULL, &dwAvail, NULL))
					break;

				if (!dwAvail)  // No data available, return
					break;

				if (!::ReadFile(hPipeRead, buf, min(sizeof(buf) - 1, dwAvail), &dwRead, NULL) ||
				    !dwRead)
					// Error, the child process might ended
					break;

				buf[dwRead] = 0;
				strResult += buf;
			}
		}  // for

		CloseHandle(hPipeWrite);
		CloseHandle(hPipeRead);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
		return strResult;
	}  // ExecCmd
#endif

	class DependencyGraph {
		using cstring = const char*;

		std::unordered_map<cstring, std::vector<cstring>> adjacents;
		std::unordered_map<cstring, int> inDegrees;

	   public:
		// node w/o dependencies, just add it to the graph
		void addNode(cstring node) {
			if (inDegrees.find(node) == inDegrees.end()) {
				inDegrees[node] = 0;
			}
		}

		void addDependency(cstring dependent, cstring dependency) {
			// we make sure that the nodes are added to the graph
			addNode(dependent);
			addNode(dependency);

			// check for duplicates
			auto& dependents = adjacents[dependency];
			if (std::find(dependents.begin(), dependents.end(), dependent) == dependents.end()) {
				// add dependent node to adjacents list
				dependents.push_back(dependent);
				// increment dependencies
				inDegrees[dependent]++;
			}
		}

		// Kahn's algorithm, topological sort
		std::vector<std::string> getSortedNodes() const {
			std::vector<std::string> order;
			std::queue<cstring> rootNodes;
			auto degrees = inDegrees;

			for (const auto& [node, degree] : degrees) {
				if (degree == 0) {
					rootNodes.push(node);
				}
			}

			while (!rootNodes.empty()) {
				auto currentNode = rootNodes.front();
				rootNodes.pop();
				order.emplace_back(currentNode);

				auto deps = adjacents.find(currentNode);
				if (deps != adjacents.end()) {
					for (auto dependent : deps->second) {
						if (--degrees[dependent] == 0) {
							rootNodes.push(dependent);
						}
					}
				}
			}

			if (order.size() != inDegrees.size()) {
				std::cout << "Cyclic dependency detected" << std::endl;
				throw std::runtime_error("Cyclic dependency detected");
			}

			return order;
		}
	};

	std::string Compiler::currentFilename;
	std::unordered_map<std::string, std::vector<std::string>> Compiler::sourceCode;

	bool Compiler::build(const std::vector<std::string>& sources, const std::string& exePath) {
		std::string cmd;
		auto backend           = CompilerSettings::get().backend;
		auto dllName           = CompilerSettings::get().dllName;
		auto optimizationLevel = CompilerSettings::get().optimizationLevel;
		auto instructionSet    = CompilerSettings::get().instructionSet;
		std::string quotes     = "\"";
#ifdef _WIN32
		auto vsPath = ExecCmd(L"vswhere -latest -property installationPath");
		StringTrim(vsPath);
		std::ofstream bat("astrum_build.bat");
		bat << "@echo off\ncall \"";
		bat << vsPath;
		bat << R"(\VC\Auxiliary\Build\vcvars64.bat")";
		bat << "\n";
#endif
		if (backend == CompilerBackend::Clang || backend == CompilerBackend::Gnu) {
			if (backend == CompilerBackend::Clang) {
				cmd += "clang++ ";
			} else {
				cmd += "g++ ";
			}
			for (const auto& path : CompilerSettings::get().includePaths) {
				cmd += " -I ";
				cmd += quotes;
				cmd += path;
				cmd += quotes;
			}
			for (const auto& src : sources) {
				cmd += " ";
				cmd += quotes;
				std::filesystem::path srcPath = src;
				srcPath.replace_extension("cpp");
				cmd += srcPath.string();
				cmd += quotes;
			}
			for (const auto& path : CompilerSettings::get().libraryPaths) {
				cmd += " -L";
				cmd += quotes;
				cmd += path;
				cmd += quotes;
			}
			for (std::filesystem::path lib : CompilerSettings::get().libraries) {
				cmd += " -l";
				lib.replace_extension();
				cmd += lib.string().substr(3);
			}
			cmd += " -o ";
			cmd += quotes;
			cmd += exePath;
			cmd += quotes;
			if (CompilerSettings::get().debugBuild) {
				if (optimizationLevel == -1) {
					cmd += " -O0";
				} else {
					cmd += " -O";
					cmd += std::to_string(optimizationLevel);
				}
				cmd += " -DDEBUG -D_DEBUG";
			} else {
				if (optimizationLevel == -1) {
					cmd += " -O3";
				} else {
					cmd += " -O";
					cmd += std::to_string(optimizationLevel);
				}
				cmd += " -DNDEBUG";
			}

			switch (instructionSet) {
				case InstructionSet::Default:
					break;
				case InstructionSet::IA32:
					cmd += " -mx87";
					break;
				case InstructionSet::SSE:
					cmd += " -msse";
					break;
				case InstructionSet::SSE2:
					cmd += " -msse2";
					break;
				case InstructionSet::SSE4_2:
					cmd += " -msse4.2";
					break;
				case InstructionSet::AVX:
					cmd += " -mavx";
					break;
				case InstructionSet::AVX2:
					cmd += " -mavx2";
					break;
				case InstructionSet::AVX512:
					cmd += " -mavx512f";
					break;
				case InstructionSet::AVX10_1:
					cmd += " -mavx10.1";
					break;
				case InstructionSet::AVX10_2:
					cmd += " -mavx10.2";
					break;
				case InstructionSet::ARM8_0:
					cmd += " -mavx";
					break;
				default:
					break;
			}

			cmd +=
			    " -W -g -fstack-protector-strong -std=c++20 -D_CONSOLE -D_UNICODE -DUNICODE "
			    "-L. -lastrumstd";
		} else if (backend == CompilerBackend::VisualCpp) {
			cmd += "cl /nologo /EHsc /W1";
			for (const auto& path : CompilerSettings::get().includePaths) {
				cmd += " /I";
				cmd += quotes;
				cmd += path;
				cmd += quotes;
			}
			for (const auto& src : sources) {
				cmd += " ";
				cmd += quotes;
				std::filesystem::path srcPath = src;
				srcPath.replace_extension("cpp");
				cmd += srcPath.string();
				cmd += quotes;
			}
			if (!dllName.empty()) {
				std::transform(dllName.begin(), dllName.end(), dllName.begin(), ::toupper);
				cmd += " /D ";
				cmd += quotes;
				cmd += dllName;
				cmd += "_EXPORTS";
				cmd += quotes;
			}
			cmd += " /Fe:";
			cmd += quotes;
			cmd += exePath;
			cmd += quotes;
			if (CompilerSettings::get().debugBuild) {
				if (optimizationLevel < 1) {
					cmd += " /Od";
				} else if (optimizationLevel == 3) {
					cmd += " /O2";
				} else {
					cmd += " /O";
					cmd += std::to_string(optimizationLevel);
				}
				cmd += R"( /RTC1 /sdl /D ""DEBUG"" /D ""_DEBUG"" /MDd)";
			} else {
				if (optimizationLevel == -1 || optimizationLevel == 3) {
					cmd += " /O2";
				} else if (optimizationLevel == 0) {
					cmd += " /Od";
				} else {
					cmd += " /O";
					cmd += std::to_string(optimizationLevel);
				}
				cmd += R"( /MD /Ob2 /D ""NDEBUG"")";
			}

			switch (instructionSet) {
				case AstrumLang::InstructionSet::Default:
					break;
				case AstrumLang::InstructionSet::IA32:
					cmd += " /arch:IA32";
					break;
				case AstrumLang::InstructionSet::SSE:
					cmd += " /arch:SSE";
					break;
				case AstrumLang::InstructionSet::SSE2:
					cmd += " /arch:SSE2";
					break;
				case AstrumLang::InstructionSet::SSE4_2:
					cmd += " /arch:SSE4.2";
					break;
				case AstrumLang::InstructionSet::AVX:
					cmd += " /arch:AVX";
					break;
				case AstrumLang::InstructionSet::AVX2:
					cmd += " /arch:AVX2";
					break;
				case AstrumLang::InstructionSet::AVX512:
					cmd += " /arch:AVX512";
					break;
				case AstrumLang::InstructionSet::AVX10_1:
					cmd += " /arch:AVX10.1";
					break;
				case AstrumLang::InstructionSet::AVX10_2:
					cmd += " /arch:AVX10.2";
					break;
				case AstrumLang::InstructionSet::ARM8_0:
					cmd += " /arch:armv8.0";
					break;
				case AstrumLang::InstructionSet::ARM8_1:
					cmd += " /arch:armv8.1";
					break;
				case AstrumLang::InstructionSet::ARM8_2:
					cmd += " /arch:armv8.2";
					break;
				case AstrumLang::InstructionSet::ARM8_3:
					cmd += " /arch:armv8.3";
					break;
				case AstrumLang::InstructionSet::ARM8_4:
					cmd += " /arch:armv8.4";
					break;
				case AstrumLang::InstructionSet::ARM8_5:
					cmd += " /arch:armv8.5";
					break;
				case AstrumLang::InstructionSet::ARM8_6:
					cmd += " /arch:armv8.6";
					break;
				case AstrumLang::InstructionSet::ARM8_7:
					cmd += " /arch:armv8.7";
					break;
				case AstrumLang::InstructionSet::ARM8_8:
					cmd += " /arch:armv8.8";
					break;
				case AstrumLang::InstructionSet::ARM8_9:
					cmd += " /arch:armv8.9";
					break;
				case AstrumLang::InstructionSet::ARM9_0:
					cmd += " /arch:armv9.0";
					break;
				case AstrumLang::InstructionSet::ARM9_1:
					cmd += " /arch:armv9.1";
					break;
				case AstrumLang::InstructionSet::ARM9_2:
					cmd += " /arch:armv9.2";
					break;
				case AstrumLang::InstructionSet::ARM9_3:
					cmd += " /arch:armv9.3";
					break;
				case AstrumLang::InstructionSet::ARM9_4:
					cmd += " /arch:armv9.4";
					break;
				default:
					break;
			}

			cmd +=
			    R"( /GS /Zc:wchar_t /Gm- /Zi /Zc:inline /fp:precise /D ""_CONSOLE"" /D ""_UNICODE"" /D ""UNICODE"" /errorReport:prompt /WX- /Zc:forScope /Gd /std:c++latest /wd4005 /wd4584 /wd4190 /we4297 /we4715 /we26447 /we26815 /we26816 /external:W0 ""libastrumstd.lib"")";

			auto libPaths = CompilerSettings::get().libraryPaths;
			if (!libPaths.empty()) {
				cmd += " /link";
			}
			for (const auto& path : libPaths) {
				cmd += " /LIBPATH:";
				cmd += quotes;
				cmd += path;
				cmd += quotes;
			}
			for (const std::filesystem::path& lib : CompilerSettings::get().libraries) {
				cmd += " ";
				cmd += quotes;
				cmd += lib.string();
				cmd += quotes;
			}
		}

#ifdef _WIN32
		bat << cmd;
		bat.close();
		cmd = "astrum_build.bat";
#endif

		int compileResult = std::system(cmd.c_str());
		if (compileResult != 0) {
			std::cerr << "Compilation failed with code: " + std::to_string(compileResult);
			return false;
		}
		std::cout << "Build completed\n";
		return true;
	}

	bool Compiler::compile() {
		// creates file with dllexport macro if dll build mode enabled
		preprocessDLL();
		// fills symbol table with system symbols
		CppSymbolParser::initializeSystemSymbolTable();

		const auto& sourceFiles = CompilerSettings::get().sourceFiles;
		if (!sourceFiles.empty())
			std::cout << "The following modules will be compiled:\n";
		for (const auto& file : sourceFiles) { std::cout << file << std::endl; }

		// preparing package headers
		preparePackages(sourceFiles);

		// codegen
		if (!generateCpp(sourceFiles))
			return false;

		std::string exePath = CompilerSettings::get().exePath;
		if (exePath.empty()) {
#ifdef _WIN32
			exePath = "Application.exe";
#else
			exePath = "a.out";
#endif
		}

		// cpp build
		if (!sourceFiles.empty() && CompilerSettings::get().buildMode) {
			if (!build(sourceFiles, exePath))
				return false;
		}

		// run application
		if (CompilerSettings::get().runMode) {
			std::string runCommand = "\"" + exePath + "\"";
			std::cout << "Running executable..." << std::endl;

			int runResult = std::system(runCommand.c_str());
			if (runResult != 0) {
				std::cerr << "Executable exited with code: " << runResult << std::endl;
			}
		}

		return true;
	}

	bool Compiler::generateCpp(const std::vector<std::string>& sourceFiles) {
		std::cout << "Stage 0: Building AST and dependency graphs\n";
		std::unordered_map<std::string, AstrumParser*> parsers;
		std::unordered_map<std::string, AstrumParser::ModuleContext*> ast;
		DependencyGraph dependencies;
		for (const auto& src : sourceFiles) {
			currentFilename = src;

			// read source file
			std::ifstream srcStream(src);

			// creates a token stream
			auto antlrStream = new antlr4::ANTLRInputStream(srcStream);
			auto lexer       = new AstrumLexer(antlrStream);
			setupErrorListeners(lexer);
			// make a lexical analysis
			auto tokenStream = new antlr4::CommonTokenStream(lexer);
			if (lexer->getNumberOfSyntaxErrors())
				return false;

			// caches a source code for diagnostic info
			srcStream.clear();
			srcStream.seekg(0, std::ios::beg);
			std::string line;
			auto& srcCode = sourceCode[src];
			while (std::getline(srcStream, line)) { srcCode.emplace_back(line); }

			// makes a syntax analysis
			auto parser = new AstrumParser(tokenStream);
			setupErrorListeners(parser);
			parsers[src] = parser;

			// building AST
			AstrumParser::ModuleContext* astRoot = parser->module();
			ast[src]                             = astRoot;

			// dependencies
			std::filesystem::path srcPath = src;
			auto imports                  = astRoot->importDeclaration();
			bool hasDependencies          = false;
			for (auto dependency : imports) {
				if (!dependency->Public() || !dependency->moduleName())
					continue;

				auto name = dependency->moduleName()->getText();
				StringReplace(name, ".", "/");

				if (auto searchInIncludes = CompilerSettings::findFileInIncludePaths(
				        name + ".ast", srcPath.parent_path())) {
					auto activeDependency =
					    std::find(sourceFiles.begin(), sourceFiles.end(), *searchInIncludes);
					if (activeDependency != sourceFiles.end()) {
						dependencies.addDependency(src.c_str(), activeDependency->c_str());
						hasDependencies = true;
					}
					continue;
				}

				if (auto searchInIncludes =
				        CompilerSettings::findFileInIncludePaths(name, srcPath.parent_path())) {
					auto dir = (std::filesystem::path(*searchInIncludes).parent_path()).string();
					auto activeDependencies =
					    sourceFiles |
					    std::views::filter([&](const auto& file) { return file.starts_with(dir); });
					for (const auto& dep : activeDependencies) {
						dependencies.addDependency(src.c_str(), dep.c_str());
						hasDependencies = true;
					}
					continue;
				}
			}

			if (!hasDependencies)
				dependencies.addNode(src.c_str());

			if (parser->getNumberOfSyntaxErrors())
				return false;
		}

		// topological sort
		auto orderedSources = dependencies.getSortedNodes();

		// first codegen pass
		std::cout << "Stage 1: Codegen first pass\n";
		std::unordered_map<std::string, AstrumSema*> semas;
		std::unordered_map<std::string, AstrumCodegen*> codegens;
		for (const auto& src : orderedSources) {
			currentFilename = src;

			// semantic analysis
			auto sema  = new AstrumSema(parsers[src], ast[src], src);
			semas[src] = sema;
			sema->addErrorListener(errorListener.get());
			sema->runFirstPass();

			// translation to cpp
			auto codegen  = new AstrumCodegen(*sema);
			codegens[src] = codegen;
			codegen->printFirstPass();
		}

		// second codegen pass
		std::cout << "Stage 2: Codegen second pass\n";
		for (const auto& src : orderedSources) {
			currentFilename = src;

			// semantic analysis
			semas[src]->runSecondPass();

			// translation to cpp
			codegens[src]->printSecondPass();

			delete ast[src];
			delete semas[src];
			delete codegens[src];
			ast[src]      = nullptr;
			semas[src]    = nullptr;
			codegens[src] = nullptr;
		}

		std::cout << "Codegen completed\n";
		return true;
	}

	void Compiler::preparePackages(const std::vector<std::string>& sourceFiles) {
		std::cout << "Preparing packages\n";
		std::set<std::filesystem::path> packages;
		for (std::filesystem::path src : sourceFiles) { packages.insert(src.parent_path()); }
		for (const auto& package : packages) {
			auto packageHeader = package / "package.h";
			std::string oldModules;
			if (std::filesystem::exists(packageHeader)) {
				std::ifstream file(packageHeader);
				std::ostringstream fileContents;
				if (file.is_open()) {
					fileContents << file.rdbuf();
				}
				oldModules = fileContents.str();
			}

			std::ostringstream newModules;
			for (const auto& entry : std::filesystem::directory_iterator(package)) {
				auto entryPath = entry.path();
				if (entryPath.extension().string() == ".ast") {
					entryPath.replace_extension("h");
					newModules << "#include \"" << entryPath.filename().string() << "\"\n";
				}
			}

			if (oldModules != newModules.str()) {
				std::ofstream file(packageHeader);
				if (file.is_open()) {
					file << newModules.str();
				}
			}
		}
	}

	void Compiler::preprocessDLL() {
		auto DLLName = CompilerSettings::get().dllName;
		if (!DLLName.empty()) {
			std::transform(DLLName.begin(), DLLName.end(), DLLName.begin(), ::toupper);
			std::ofstream exportFile;
			exportFile.open(DLLName + "_export.h");
			exportFile << "#pragma once\n"
			           << "#if defined _WIN32 || defined __CYGWIN__\n"
			           << "#ifdef " << DLLName << "_EXPORTS\n"
			           << "#define " << DLLName << "_API __declspec(dllexport)\n"
			           << "#else\n"
			           << "#define " << DLLName << "_API __declspec(dllimport)\n"
			           << "#endif\n"
			           << "#define " << DLLName << "_HIDDEN \n"
			           << "#else\n"
			           << "#define " << DLLName << "_API __attribute__((visibility(\"default\")))\n"
			           << "#define " << DLLName
			           << "_HIDDEN __attribute__((visibility(\"hidden\")))\n"
			           << "#endif\n";
		}
	}

}  // namespace AstrumLang