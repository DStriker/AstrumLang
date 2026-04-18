java org.antlr.v4.Tool -visitor -no-listener -Dlanguage=Cpp -DexportMacro=ASTRUMLANG_API -package AstrumLang AstrumLexer.g4 AstrumParser.g4
move *.h ..\include\AstrumLang
move *.cpp ..\src\AstrumLang
