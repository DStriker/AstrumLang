include($ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)
message(STATUS "CMAKE_TOOLCHAIN_FILE: ${CMAKE_TOOLCHAIN_FILE}")
find_package(antlr4-runtime CONFIG REQUIRED)
find_package(Java 17 COMPONENTS Runtime REQUIRED)

set(TARGET_NAME AstrumLangAPI)
if(LIBASTRUMLANG_STATIC_BUILD)
  add_library(${TARGET_NAME} STATIC)
else()
  add_library(${TARGET_NAME} SHARED)
endif()

target_compile_features(${TARGET_NAME} PUBLIC cxx_std_20)

if(NOT LIBASTRUMLANG_STATIC_BUILD)
	target_compile_definitions(${TARGET_NAME}
		PRIVATE
			LIBASTRUMLANG_DLL_BUILD
	)
endif()

set(SRC_DIR "src/AstrumLang")
set(HEADERS_DIR "include/AstrumLang")
set(GRAMMAR_DIR grammar)

target_sources(${TARGET_NAME}
	PRIVATE
		${SRC_DIR}/CompilerSettings.cpp
		${SRC_DIR}/CppSymbolParser.cpp
		${SRC_DIR}/AstrumErrorListener.cpp
		${SRC_DIR}/AstrumLexerBase.cpp
		${SRC_DIR}/AstrumLexer.cpp
		${SRC_DIR}/AstrumParser.cpp
		${SRC_DIR}/AstrumParserVisitor.cpp
		${SRC_DIR}/AstrumParserBaseVisitor.cpp
		${SRC_DIR}/AstrumSema.cpp
		${SRC_DIR}/AstrumCodegen.cpp
		${GRAMMAR_DIR}/AstrumLexer.g4
		${GRAMMAR_DIR}/AstrumParser.g4
	
	PUBLIC
		${HEADERS_DIR}/export.h
		${HEADERS_DIR}/CompilerSettings.h
		${HEADERS_DIR}/CppSymbolParser.h
		${HEADERS_DIR}/AstrumLexerBase.h
		${HEADERS_DIR}/AstrumLexer.h
		${HEADERS_DIR}/AstrumParser.h
		${HEADERS_DIR}/AstrumParserVisitor.h
		${HEADERS_DIR}/AstrumParserBaseVisitor.h
		${HEADERS_DIR}/AstrumErrorListener.h
		${HEADERS_DIR}/AstrumSema.h
		${HEADERS_DIR}/AstrumCodegen.h
		${HEADERS_DIR}/SourcePosition.h
		${HEADERS_DIR}/StringUtils.h
)

target_link_directories(${TARGET_NAME}
	PRIVATE
		third_party/binary
		third_party/library
)

target_link_libraries(${TARGET_NAME}
  PRIVATE
    libclang
  PUBLIC
	antlr4-runtime
)

find_path(ANTLR_INCLUDE_DIR NAMES antlr4-common.h PATH_SUFFIXES antlr4-runtime)

target_include_directories(${TARGET_NAME} 
    PRIVATE 
        ${HEADERS_DIR}
		third_party/include
    PUBLIC 
        include 
		${ANTLR_INCLUDE_DIR}
)

set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME "libastrumlang")
set(ANTLR_GENERATED_FILES
    ${HEADERS_DIR}/AstrumLexer.h
    ${SRC_DIR}/AstrumLexer.cpp
    ${HEADERS_DIR}/AstrumParser.h
    ${SRC_DIR}/AstrumParser.cpp
    ${HEADERS_DIR}/AstrumParserBaseVisitor.h
    ${SRC_DIR}/AstrumParserBaseVisitor.cpp
    ${HEADERS_DIR}/AstrumParserVisitor.h
    ${SRC_DIR}/AstrumParserVisitor.cpp
)

if(WIN32)
	add_custom_command(
		OUTPUT ${ANTLR_GENERATED_FILES}
		COMMAND WinGenerateParser.bat
		DEPENDS ${GRAMMAR_DIR}/AstrumLexer.g4 ${GRAMMAR_DIR}/AstrumParser.g4
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/AstrumLang/grammar
		VERBATIM
	)
else()
	add_custom_command(
		OUTPUT ${ANTLR_GENERATED_FILES}
		COMMAND UnixGenerateParser.sh
		DEPENDS ${GRAMMAR_DIR}/AstrumLexer.g4 ${GRAMMAR_DIR}/AstrumParser.g4
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/AstrumLang/grammar
		VERBATIM
	)
endif()

add_custom_target(AstrumParserGenerator ALL
    DEPENDS ${ANTLR_GENERATED_FILES}
    COMMENT "Parser generation"
)

add_dependencies(${TARGET_NAME} AstrumParserGenerator)

if (CMAKE_IMPORT_LIBRARY_SUFFIX)
    add_custom_command(
      TARGET "${TARGET_NAME}" POST_BUILD
	  COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/AstrumLang/third_party/binary" "$<TARGET_FILE_DIR:${TARGET_NAME}>"
      COMMAND_EXPAND_LISTS
    )
endif()

install(TARGETS ${TARGET_NAME}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)

install(DIRECTORY include/ DESTINATION include)