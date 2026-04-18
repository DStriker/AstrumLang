set(TARGET_NAME AstrumCompiler)

add_executable(${TARGET_NAME})
target_compile_features(${TARGET_NAME} PRIVATE cxx_std_20)
set_property(TARGET ${TARGET_NAME} PROPERTY C_STANDARD 17)
set_property(TARGET ${TARGET_NAME} PROPERTY C_STANDARD_REQUIRED ON)

file(GLOB_RECURSE IGNORED_FILES
	tests/*.cpp
	tests/*.h
	tests/*.ast
)

target_sources(${TARGET_NAME}
  PRIVATE
	include/Compiler.h
	src/Compiler.cpp
	include/CompilerErrorListener.h
	src/CompilerErrorListener.cpp
    src/main.cpp
	${IGNORED_FILES}
)

find_path(ANTLR_INCLUDE_DIR NAMES antlr4-common.h PATH_SUFFIXES antlr4-runtime)
target_include_directories(${TARGET_NAME} 
    PRIVATE 
        include 
		${CMAKE_SOURCE_DIR}/AstrumLang/include
		${ANTLR_INCLUDE_DIR}
)

target_link_directories(${TARGET_NAME}
	PRIVATE
		$<TARGET_LINKER_FILE_DIR:AstrumLangAPI>
)

target_link_libraries(${TARGET_NAME}
  PRIVATE
	antlr4-runtime
    libastrumlang
)

install(TARGETS ${TARGET_NAME}
    RUNTIME DESTINATION bin
)

set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME "astrumc")
set_source_files_properties(${IGNORED_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)