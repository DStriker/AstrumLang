#!/bin/bash

java org.antlr.v4.Tool -visitor -no-listener -Dlanguage=Cpp -package AstrumLang AstrumLexer.g4 AstrumParser.g4
mv *.h ../include/AstrumLang
mv *.cpp ../src/AstrumLang
