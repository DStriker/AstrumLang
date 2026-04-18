#include "AstrumCompilerSettings.h"
#include "CppSymbolParser.h"

AstrumCompilerSettings& AstrumCompilerSettings::get()
{
	static AstrumCompilerSettings instance;
	return instance;
}

void AstrumCompilerSettings::setupFromCmd(std::span<const char*> args)
{
	for (auto arg : args)
	{
		auto str = std::string(arg);
		if (str.starts_with("/DLL:"))
		{
			get().dllName = str.substr(5);
		}
		else if (str.starts_with("-I"))
		{
			CppSymbolParser::args.push_back(arg);
			get().includePaths.emplace_back(str.substr(2));
		}
		else if (str == "-unittest")
		{
			get().unitTestMode = true;
		}
	}
}
