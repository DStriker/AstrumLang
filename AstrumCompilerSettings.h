#pragma once
#include <vector>
#include <string>
#include <span>

class AstrumCompilerSettings
{
	std::vector<std::string> includePaths;
	std::string dllName;
	bool unitTestMode = false;

	AstrumCompilerSettings();
public:

	static AstrumCompilerSettings& get();
	static void setupFromCmd(std::span<const char*> args);
};