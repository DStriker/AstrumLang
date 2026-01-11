@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
set Esp.Extensions=CppCoreCheck.dll
set CAExcludePath=%Include%
cl /nologo /EHsc /W1 /external:I"C:\Users\user\Documents\VSProjects\TestDll" "C:\Users\user\Documents\VSProjects\MyLanguage\FirstProgram.cpp" "C:\Users\user\Documents\VSProjects\MyLanguage\CppAdvance.obj" /Fe:"C:\Users\user\Documents\VSProjects\MyLanguage\FirstProgram.exe" /GS /Zc:wchar_t /Gm- /Od /RTC1 /Zi /sdl /Zc:inline /fp:precise /D "_DEBUG" /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /D "TESTDLL_EXPORTS" /errorReport:prompt /WX- /Zc:forScope /Gd /MDd /std:c++latest /wd4005 /wd4584 /wd4190 /we4297 /we4715 /we26447 /we26815 /we26816 /external:W0 "CppAdvanceLib.lib"
