# Set the minimum CMake version.
cmake_minimum_required(VERSION 3.20)

# Give our project a name.
project(z80_emu_program)

# Unix compiler flags (should work on Clang or GCC compilers)
if(UNIX)
    add_compile_options(-Wall -Wextra -Wpedantic -std=c++20 )
endif()


# Grab all of the `.cpp` files from the `/src` directory.
FILE(GLOB CppSourceFiles src/*.cpp)

# Show CMake where spdlog is located.

# Build the program using all of the source files
add_executable(z80_emu_program ${CppSourceFiles})

# Go to CMake file in `third_party` directory to handle libs.
add_subdirectory(third_party/)