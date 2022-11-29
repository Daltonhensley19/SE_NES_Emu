# Set the minimum CMake version.
cmake_minimum_required(VERSION 3.17)

# Give our project a name.
project(emuGui)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/")

# Unix compiler flags (should work on Clang or GCC compilers)
if(UNIX)
    add_compile_options(-Wall -Wextra -Wpedantic -std=c++20 -O2 )
endif()

if(WIN32)
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()


# Grab all of the `.cpp` files from the `/src` directory.
#FILE(GLOB CppSourceFiles src/emuSources/*.cpp)

# Show CMake where spdlog is located.

find_package(Qt6 REQUIRED COMPONENTS Widgets Multimedia)
qt_standard_project_setup()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src/emu_sources)
add_subdirectory(src/app)

# Build the program using all of the source files
#add_executable(z80_emu_program ${CppSourceFiles})

# Go to CMake file in `third_party` directory to handle libs.
add_subdirectory(third_party/)
add_subdirectory(tests/)
