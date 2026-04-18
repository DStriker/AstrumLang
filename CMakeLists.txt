cmake_minimum_required(VERSION 3.20)

project(Astrum VERSION 0.1.0 LANGUAGES CXX)

set(PROJECTS AstrumLang AstrumCompiler AstrumStdLib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_C_STANDARD 17)

foreach(PROJ ${PROJECTS})
    add_subdirectory(${PROJ})
endforeach()

add_custom_target(ProjectOptions ALL
    SOURCES .gitignore .clang-format
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)