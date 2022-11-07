FILE(GLOB emuSourceFiles ../emu_sources/*.cpp)

set(CMAKE_AUTOMOC ON)
add_library(emuLayer STATIC
    ${emuSourceFiles}
)
target_link_libraries(emuLayer PRIVATE Qt6::Core spdlog::spdlog_header_only)
target_include_directories(emuLayer INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
