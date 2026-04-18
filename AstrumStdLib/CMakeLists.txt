set(TARGET_NAME AstrumStdLib)
file(GLOB STD_SOURCES
	src/Builtin/*.cpp
	src/System/*.cpp
	include/Builtin/*.h
	include/System/*.h
)
if(LIBASTRUMSTD_STATIC_BUILD)
  add_library(${TARGET_NAME} STATIC ${STD_SOURCES})
else()
  add_library(${TARGET_NAME} SHARED ${STD_SOURCES})
endif()

target_compile_features(${TARGET_NAME} PUBLIC cxx_std_20)
set_property(TARGET ${TARGET_NAME} PROPERTY C_STANDARD 17)
set_property(TARGET ${TARGET_NAME} PROPERTY C_STANDARD_REQUIRED ON)

if(NOT LIBASTRUMSTD_STATIC_BUILD)
	target_compile_definitions(${TARGET_NAME}
		PRIVATE
			LIBASTRUMSTD_DLL_BUILD
	)
endif()

target_include_directories(${TARGET_NAME} 
    PRIVATE 
        include/Builtin
		include/System
    PUBLIC 
        include 
)

set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME "libastrumstd")
install(TARGETS ${TARGET_NAME}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)

install(DIRECTORY include/ DESTINATION include)